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

class fs_extend {
public:
    static olua_Return ls(lua_State *L, std::filesystem::path dir, bool recursive = false) {
        if (recursive) {
            auto ret = new std::filesystem::recursive_directory_iterator(dir);
            olua_postnew(L, ret);
            olua_pushobj(L, ret);
        } else {
            auto ret = new std::filesystem::directory_iterator(dir);
            olua_postnew(L, ret);
            olua_pushobj(L, ret);
        }
        return 1;
    }
};

}

#endif