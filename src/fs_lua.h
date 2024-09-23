#ifndef __FS_LUA_H__
#define __FS_LUA_H__

#include "olua.hpp"

#include <filesystem>

#ifdef _WIN32
#include <stdexcept>
#include <Windows.h>

std::wstring string_to_wstring(const std::string& string)
{
    if (string.empty())
    {
        return L"";
    }

    const auto size_needed = MultiByteToWideChar(CP_UTF8, 0, string.data(), (int)string.size(), nullptr, 0);
    if (size_needed <= 0)
    {
        throw std::runtime_error("MultiByteToWideChar() failed: " + std::to_string(size_needed));
    }

    std::wstring result(size_needed, 0);
    MultiByteToWideChar(CP_UTF8, 0, string.data(), (int)string.size(), result.data(), size_needed);
    return result;
}

std::string wstring_to_string(const std::wstring& wide_string)
{
    if (wide_string.empty())
    {
        return "";
    }

    const auto size_needed = WideCharToMultiByte(CP_UTF8, 0, wide_string.data(), (int)wide_string.size(), nullptr, 0, nullptr, nullptr);
    if (size_needed <= 0)
    {
        throw std::runtime_error("WideCharToMultiByte() failed: " + std::to_string(size_needed));
    }

    std::string result(size_needed, 0);
    WideCharToMultiByte(CP_UTF8, 0, wide_string.data(), (int)wide_string.size(), result.data(), size_needed, nullptr, nullptr);
    return result;
}


template <> inline
void olua_check_string<std::wstring>(lua_State *L, int idx, std::wstring *value)
{
    size_t len;
    const char *str = olua_checklstring(L, idx, &len);
    std::wstring wstr = string_to_wstring(std::string(str, len));
    *value = wstr;
}

template <> inline
int olua_push_string<std::wstring>(lua_State *L, const std::wstring &value)
{
    auto str = wstring_to_string(value);
    lua_pushlstring(L, str.data(), str.size());
    return 1;
}

static inline
void olua_check_string(lua_State *L, int idx, const wchar_t **value)
{
    std::wstring str;
    olua_check_string(L, idx, &str);
    wchar_t *ptr = (wchar_t *)olua_newrawobj(L, NULL, sizeof(wchar_t) * str.size());
    std::wcsncpy(ptr, str.c_str(), str.size());
    olua_emplaceobj(L, -1, ptr, OLUA_VOIDCLS);
    lua_pop(L, 1);
    *value = ptr;
}

static inline
int olua_push_string(lua_State *L, const wchar_t *value)
{
    return olua_push_string(L, std::wstring(value));
}
#endif // _WIN32

namespace fs {

constexpr const char *INVALID_ITERACTOR = ".olua.fs.invalid_iterator";

template <class T> inline
int pairs_next(lua_State *L) {
    lua_settop(L, 2);
    auto self = olua_toobj<T>(L, 1);
    auto itor = olua_isnil(L, 2) ? self : olua_toobj<T>(L, 2);
    if (*itor != std::filesystem::end(*itor)) {
        auto v = **itor;
        ++(*itor);
        if (olua_isnil(L, 2)) {
            olua_copy_object(L, *itor, nullptr);
        } else {
            olua_setrawobj(L, 2, itor);
        }
        olua_copy_object(L, v, nullptr);
        return 2;
    } else {
        lua_pushnil(L);
        return 1;
    }
}

template <class T> inline
olua_Return pairs(lua_State *L, T *self) {
    lua_pushstring(L, INVALID_ITERACTOR);
    if (olua_getvariable(L, 1) != LUA_TNIL) {
        luaL_error(L, "'%s' has already been used", olua_objstring(L, 1));
    }
    lua_pushstring(L, INVALID_ITERACTOR);
    lua_pushboolean(L, true);
    olua_setvariable(L, 1);
    lua_pushcfunction(L, pairs_next<T>);
    lua_pushvalue(L, 1);
    lua_pushnil(L);
    return 3;
}

class directory_iterator_extend {
public:
    static olua_Return __pairs(lua_State *L, std::filesystem::directory_iterator *self) {
        return pairs(L, self);
    }
};

class recursive_directory_iterator_extend {
public:
    static olua_Return __pairs(lua_State *L, std::filesystem::recursive_directory_iterator *self) {
       return pairs(L, self);
    }
};

class path_extend {
public:
    static std::filesystem::path posix_path(std::filesystem::path *self) {
#ifdef _WIN32
        auto preferred = self->make_preferred().string();
        std::replace(preferred.begin(), preferred.end(), L'\\', L'/');
        return std::filesystem::path(preferred);
#else
        auto preferred = self->make_preferred().string();
        std::replace(preferred.begin(), preferred.end(), '\\', '/');
        return std::filesystem::path(preferred);
#endif
    }
};

}

#endif