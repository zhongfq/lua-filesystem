//
// AUTO GENERATED, DO NOT MODIFY!
//
#include "lua_fs.h"
#include "olua.hpp"
#include "fs_lua.h"

#include <filesystem>

static int _olua_module_fs(lua_State *L);

static int _olua_fun_std_filesystem_file_time_type___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (std::filesystem::file_time_type *)olua_toobj(L, 1, "fs.file_time_type");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::file_time_type::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_fs_file_time_type(lua_State *L)
{
    oluacls_class<std::filesystem::file_time_type>(L, "fs.file_time_type");
    oluacls_func(L, "__gc", _olua_fun_std_filesystem_file_time_type___gc);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_fs_file_time_type(lua_State *L)
{
    olua_require(L, ".olua.module.fs",  _olua_module_fs);
    if (!olua_getclass(L, "fs.file_time_type")) {
        luaL_error(L, "class not found: std::filesystem::file_time_type");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_std_error_code___eq$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::error_code *arg1;       /** x */
        std::error_code *arg2;       /** y */

        olua_check_object(L, 1, &arg1, "fs.error_code");
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // @operator(operator==) static bool operator==(const std::error_code &x, const std::error_code &y)
        bool ret = (*arg1) == (*arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_code::__eq(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_code___eq$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::error_code *arg1;       /** x */
        std::error_condition *arg2;       /** y */

        olua_check_object(L, 1, &arg1, "fs.error_code");
        olua_check_object(L, 2, &arg2, "fs.error_condition");

        // @operator(operator==) static bool operator==(const std::error_code &x, const std::error_condition &y)
        bool ret = (*arg1) == (*arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_code::__eq(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_code___eq(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "fs.error_code")) && (olua_is_object(L, 2, "fs.error_code"))) {
            // @operator(operator==) static bool operator==(const std::error_code &x, const std::error_code &y)
            return _olua_fun_std_error_code___eq$1(L);
        }

        // if ((olua_is_object(L, 1, "fs.error_code")) && (olua_is_object(L, 2, "fs.error_condition"))) {
            // @operator(operator==) static bool operator==(const std::error_code &x, const std::error_condition &y)
            return _olua_fun_std_error_code___eq$2(L);
        // }
    }

    luaL_error(L, "method 'std::error_code::__eq' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_error_code___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (std::error_code *)olua_toobj(L, 1, "fs.error_code");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_code::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_code___lt(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::error_code *arg1;       /** x */
        std::error_code *arg2;       /** y */

        olua_check_object(L, 1, &arg1, "fs.error_code");
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // @operator(operator<) static bool operator<(const std::error_code &x, const std::error_code &y)
        bool ret = (*arg1) < (*arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_code::__lt(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_code_assign(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::error_code *self = nullptr;
        int arg1 = 0;       /** val */
        std::error_category *arg2;       /** cat */

        olua_to_object(L, 1, &self, "fs.error_code");
        olua_check_integer(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "fs.error_category");

        // void assign(int val, const std::error_category &cat)
        self->assign(arg1, *arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_code::assign(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_code_category(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::error_code *self = nullptr;

        olua_to_object(L, 1, &self, "fs.error_code");

        // const std::error_category &category()
        const std::error_category &ret = self->category();
        int num_ret = olua_push_object(L, ret, "fs.error_category");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_code::category(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_code_clear(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::error_code *self = nullptr;

        olua_to_object(L, 1, &self, "fs.error_code");

        // void clear()
        self->clear();

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_code::clear(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_code_default_error_condition(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::error_code *self = nullptr;

        olua_to_object(L, 1, &self, "fs.error_code");

        // std::error_condition default_error_condition()
        std::error_condition ret = self->default_error_condition();
        int num_ret = olua_copy_object(L, ret, "fs.error_condition");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_code::default_error_condition(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_code_message(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::error_code *self = nullptr;

        olua_to_object(L, 1, &self, "fs.error_code");

        // std::string message()
        std::string ret = self->message();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_code::message(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_code_new$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // std::error_code()
        std::error_code *ret = new std::error_code();
        int num_ret = olua_push_object(L, ret, "fs.error_code");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_code::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_code_new$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        int arg1 = 0;       /** val */
        std::error_category *arg2;       /** cat */

        olua_check_integer(L, 1, &arg1);
        olua_check_object(L, 2, &arg2, "fs.error_category");

        // std::error_code(int val, const std::error_category &cat)
        std::error_code *ret = new std::error_code(arg1, *arg2);
        int num_ret = olua_push_object(L, ret, "fs.error_code");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_code::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_code_new(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // std::error_code()
        return _olua_fun_std_error_code_new$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 1)) && (olua_is_object(L, 2, "fs.error_category"))) {
            // std::error_code(int val, const std::error_category &cat)
            return _olua_fun_std_error_code_new$2(L);
        // }
    }

    luaL_error(L, "method 'std::error_code::new' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_error_code_value(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::error_code *self = nullptr;

        olua_to_object(L, 1, &self, "fs.error_code");

        // int value()
        int ret = self->value();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_code::value(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_fs_error_code(lua_State *L)
{
    oluacls_class<std::error_code>(L, "fs.error_code");
    oluacls_func(L, "__eq", _olua_fun_std_error_code___eq);
    oluacls_func(L, "__gc", _olua_fun_std_error_code___gc);
    oluacls_func(L, "__lt", _olua_fun_std_error_code___lt);
    oluacls_func(L, "assign", _olua_fun_std_error_code_assign);
    oluacls_func(L, "category", _olua_fun_std_error_code_category);
    oluacls_func(L, "clear", _olua_fun_std_error_code_clear);
    oluacls_func(L, "default_error_condition", _olua_fun_std_error_code_default_error_condition);
    oluacls_func(L, "message", _olua_fun_std_error_code_message);
    oluacls_func(L, "new", _olua_fun_std_error_code_new);
    oluacls_func(L, "value", _olua_fun_std_error_code_value);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_fs_error_code(lua_State *L)
{
    olua_require(L, ".olua.module.fs",  _olua_module_fs);
    if (!olua_getclass(L, "fs.error_code")) {
        luaL_error(L, "class not found: std::error_code");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_std_error_category___eq(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::error_category *self = nullptr;
        std::error_category *arg1;       /** rhs */

        olua_to_object(L, 1, &self, "fs.error_category");
        olua_check_object(L, 2, &arg1, "fs.error_category");

        // @operator(operator==) bool operator==(const std::error_category &rhs)
        bool ret = (*self) == (*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_category::__eq(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_category___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (std::error_category *)olua_toobj(L, 1, "fs.error_category");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_category::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_category___lt(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::error_category *self = nullptr;
        std::error_category *arg1;       /** rhs */

        olua_to_object(L, 1, &self, "fs.error_category");
        olua_check_object(L, 2, &arg1, "fs.error_category");

        // @operator(operator<) bool operator<(const std::error_category &rhs)
        bool ret = (*self) < (*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_category::__lt(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_category_default_error_condition(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::error_category *self = nullptr;
        int arg1 = 0;       /** ev */

        olua_to_object(L, 1, &self, "fs.error_category");
        olua_check_integer(L, 2, &arg1);

        // std::error_condition default_error_condition(int ev)
        std::error_condition ret = self->default_error_condition(arg1);
        int num_ret = olua_copy_object(L, ret, "fs.error_condition");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_category::default_error_condition(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_category_equivalent$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::error_category *self = nullptr;
        int arg1 = 0;       /** code */
        std::error_condition *arg2;       /** condition */

        olua_to_object(L, 1, &self, "fs.error_category");
        olua_check_integer(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "fs.error_condition");

        // bool equivalent(int code, const std::error_condition &condition)
        bool ret = self->equivalent(arg1, *arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_category::equivalent(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_category_equivalent$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::error_category *self = nullptr;
        std::error_code *arg1;       /** code */
        int arg2 = 0;       /** condition */

        olua_to_object(L, 1, &self, "fs.error_category");
        olua_check_object(L, 2, &arg1, "fs.error_code");
        olua_check_integer(L, 3, &arg2);

        // bool equivalent(const std::error_code &code, int condition)
        bool ret = self->equivalent(*arg1, arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_category::equivalent(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_category_equivalent(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 3) {
        if ((olua_is_object(L, 1, "fs.error_category")) && (olua_is_integer(L, 2)) && (olua_is_object(L, 3, "fs.error_condition"))) {
            // bool equivalent(int code, const std::error_condition &condition)
            return _olua_fun_std_error_category_equivalent$1(L);
        }

        // if ((olua_is_object(L, 1, "fs.error_category")) && (olua_is_object(L, 2, "fs.error_code")) && (olua_is_integer(L, 3))) {
            // bool equivalent(const std::error_code &code, int condition)
            return _olua_fun_std_error_category_equivalent$2(L);
        // }
    }

    luaL_error(L, "method 'std::error_category::equivalent' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_error_category_message(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::error_category *self = nullptr;
        int arg1 = 0;       /** ev */

        olua_to_object(L, 1, &self, "fs.error_category");
        olua_check_integer(L, 2, &arg1);

        // std::string message(int ev)
        std::string ret = self->message(arg1);
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_category::message(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_category_name(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::error_category *self = nullptr;

        olua_to_object(L, 1, &self, "fs.error_category");

        // const char *name()
        const char *ret = self->name();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_category::name(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_fs_error_category(lua_State *L)
{
    oluacls_class<std::error_category>(L, "fs.error_category");
    oluacls_func(L, "__eq", _olua_fun_std_error_category___eq);
    oluacls_func(L, "__gc", _olua_fun_std_error_category___gc);
    oluacls_func(L, "__lt", _olua_fun_std_error_category___lt);
    oluacls_func(L, "default_error_condition", _olua_fun_std_error_category_default_error_condition);
    oluacls_func(L, "equivalent", _olua_fun_std_error_category_equivalent);
    oluacls_func(L, "message", _olua_fun_std_error_category_message);
    oluacls_func(L, "name", _olua_fun_std_error_category_name);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_fs_error_category(lua_State *L)
{
    olua_require(L, ".olua.module.fs",  _olua_module_fs);
    if (!olua_getclass(L, "fs.error_category")) {
        luaL_error(L, "class not found: std::error_category");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_std_error_condition___eq$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::error_condition *arg1;       /** x */
        std::error_code *arg2;       /** y */

        olua_check_object(L, 1, &arg1, "fs.error_condition");
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // @operator(operator==) static bool operator==(const std::error_condition &x, const std::error_code &y)
        bool ret = (*arg1) == (*arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_condition::__eq(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_condition___eq$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::error_condition *arg1;       /** x */
        std::error_condition *arg2;       /** y */

        olua_check_object(L, 1, &arg1, "fs.error_condition");
        olua_check_object(L, 2, &arg2, "fs.error_condition");

        // @operator(operator==) static bool operator==(const std::error_condition &x, const std::error_condition &y)
        bool ret = (*arg1) == (*arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_condition::__eq(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_condition___eq(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "fs.error_condition")) && (olua_is_object(L, 2, "fs.error_code"))) {
            // @operator(operator==) static bool operator==(const std::error_condition &x, const std::error_code &y)
            return _olua_fun_std_error_condition___eq$1(L);
        }

        // if ((olua_is_object(L, 1, "fs.error_condition")) && (olua_is_object(L, 2, "fs.error_condition"))) {
            // @operator(operator==) static bool operator==(const std::error_condition &x, const std::error_condition &y)
            return _olua_fun_std_error_condition___eq$2(L);
        // }
    }

    luaL_error(L, "method 'std::error_condition::__eq' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_error_condition___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (std::error_condition *)olua_toobj(L, 1, "fs.error_condition");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_condition::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_condition___lt(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::error_condition *arg1;       /** x */
        std::error_condition *arg2;       /** y */

        olua_check_object(L, 1, &arg1, "fs.error_condition");
        olua_check_object(L, 2, &arg2, "fs.error_condition");

        // @operator(operator<) static bool operator<(const std::error_condition &x, const std::error_condition &y)
        bool ret = (*arg1) < (*arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_condition::__lt(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_condition_assign(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::error_condition *self = nullptr;
        int arg1 = 0;       /** val */
        std::error_category *arg2;       /** cat */

        olua_to_object(L, 1, &self, "fs.error_condition");
        olua_check_integer(L, 2, &arg1);
        olua_check_object(L, 3, &arg2, "fs.error_category");

        // void assign(int val, const std::error_category &cat)
        self->assign(arg1, *arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_condition::assign(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_condition_category(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::error_condition *self = nullptr;

        olua_to_object(L, 1, &self, "fs.error_condition");

        // const std::error_category &category()
        const std::error_category &ret = self->category();
        int num_ret = olua_push_object(L, ret, "fs.error_category");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_condition::category(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_condition_clear(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::error_condition *self = nullptr;

        olua_to_object(L, 1, &self, "fs.error_condition");

        // void clear()
        self->clear();

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_condition::clear(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_condition_message(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::error_condition *self = nullptr;

        olua_to_object(L, 1, &self, "fs.error_condition");

        // std::string message()
        std::string ret = self->message();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_condition::message(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_condition_new$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // std::error_condition()
        std::error_condition *ret = new std::error_condition();
        int num_ret = olua_push_object(L, ret, "fs.error_condition");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_condition::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_condition_new$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        int arg1 = 0;       /** val */
        std::error_category *arg2;       /** cat */

        olua_check_integer(L, 1, &arg1);
        olua_check_object(L, 2, &arg2, "fs.error_category");

        // std::error_condition(int val, const std::error_category &cat)
        std::error_condition *ret = new std::error_condition(arg1, *arg2);
        int num_ret = olua_push_object(L, ret, "fs.error_condition");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_condition::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_error_condition_new(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // std::error_condition()
        return _olua_fun_std_error_condition_new$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 1)) && (olua_is_object(L, 2, "fs.error_category"))) {
            // std::error_condition(int val, const std::error_category &cat)
            return _olua_fun_std_error_condition_new$2(L);
        // }
    }

    luaL_error(L, "method 'std::error_condition::new' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_error_condition_value(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::error_condition *self = nullptr;

        olua_to_object(L, 1, &self, "fs.error_condition");

        // int value()
        int ret = self->value();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::error_condition::value(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_fs_error_condition(lua_State *L)
{
    oluacls_class<std::error_condition>(L, "fs.error_condition");
    oluacls_func(L, "__eq", _olua_fun_std_error_condition___eq);
    oluacls_func(L, "__gc", _olua_fun_std_error_condition___gc);
    oluacls_func(L, "__lt", _olua_fun_std_error_condition___lt);
    oluacls_func(L, "assign", _olua_fun_std_error_condition_assign);
    oluacls_func(L, "category", _olua_fun_std_error_condition_category);
    oluacls_func(L, "clear", _olua_fun_std_error_condition_clear);
    oluacls_func(L, "message", _olua_fun_std_error_condition_message);
    oluacls_func(L, "new", _olua_fun_std_error_condition_new);
    oluacls_func(L, "value", _olua_fun_std_error_condition_value);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_fs_error_condition(lua_State *L)
{
    olua_require(L, ".olua.module.fs",  _olua_module_fs);
    if (!olua_getclass(L, "fs.error_condition")) {
        luaL_error(L, "class not found: std::error_condition");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_cls_fs_path_format(lua_State *L)
{
    oluacls_class<std::filesystem::path::format>(L, "fs.path.format");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "auto_format", (lua_Integer)std::filesystem::path::format::auto_format);
    oluacls_enum(L, "generic_format", (lua_Integer)std::filesystem::path::format::generic_format);
    oluacls_enum(L, "native_format", (lua_Integer)std::filesystem::path::format::native_format);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_fs_path_format(lua_State *L)
{
    olua_require(L, ".olua.module.fs",  _olua_module_fs);
    if (!olua_getclass(L, "fs.path.format")) {
        luaL_error(L, "class not found: std::filesystem::path::format");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_cls_fs_copy_options(lua_State *L)
{
    oluacls_class<std::filesystem::copy_options>(L, "fs.copy_options");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "copy_symlinks", (lua_Integer)std::filesystem::copy_options::copy_symlinks);
    oluacls_enum(L, "create_hard_links", (lua_Integer)std::filesystem::copy_options::create_hard_links);
    oluacls_enum(L, "create_symlinks", (lua_Integer)std::filesystem::copy_options::create_symlinks);
    oluacls_enum(L, "directories_only", (lua_Integer)std::filesystem::copy_options::directories_only);
    oluacls_enum(L, "none", (lua_Integer)std::filesystem::copy_options::none);
    oluacls_enum(L, "overwrite_existing", (lua_Integer)std::filesystem::copy_options::overwrite_existing);
    oluacls_enum(L, "recursive", (lua_Integer)std::filesystem::copy_options::recursive);
    oluacls_enum(L, "skip_existing", (lua_Integer)std::filesystem::copy_options::skip_existing);
    oluacls_enum(L, "skip_symlinks", (lua_Integer)std::filesystem::copy_options::skip_symlinks);
    oluacls_enum(L, "update_existing", (lua_Integer)std::filesystem::copy_options::update_existing);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_fs_copy_options(lua_State *L)
{
    olua_require(L, ".olua.module.fs",  _olua_module_fs);
    if (!olua_getclass(L, "fs.copy_options")) {
        luaL_error(L, "class not found: std::filesystem::copy_options");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_std_filesystem_file_status___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (std::filesystem::file_status *)olua_toobj(L, 1, "fs.file_status");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::file_status::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_file_status_new$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // std::filesystem::file_status()
        std::filesystem::file_status *ret = new std::filesystem::file_status();
        int num_ret = olua_push_object(L, ret, "fs.file_status");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::file_status::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_file_status_new$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::file_type arg1 = (std::filesystem::file_type)0;       /** ft */
        std::filesystem::perms arg2 = (std::filesystem::perms)0;       /** prms */

        olua_check_enum(L, 1, &arg1);
        olua_check_enum(L, 2, &arg2);

        // std::filesystem::file_status(std::filesystem::file_type ft, @optional std::filesystem::perms prms)
        std::filesystem::file_status *ret = new std::filesystem::file_status(arg1, arg2);
        int num_ret = olua_push_object(L, ret, "fs.file_status");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::file_status::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_file_status_new$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::file_type arg1 = (std::filesystem::file_type)0;       /** ft */

        olua_check_enum(L, 1, &arg1);

        // std::filesystem::file_status(std::filesystem::file_type ft)
        std::filesystem::file_status *ret = new std::filesystem::file_status(arg1);
        int num_ret = olua_push_object(L, ret, "fs.file_status");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::file_status::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_file_status_new(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // std::filesystem::file_status()
        return _olua_fun_std_filesystem_file_status_new$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_enum(L, 1))) {
            // std::filesystem::file_status(std::filesystem::file_type ft)
            return _olua_fun_std_filesystem_file_status_new$3(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_enum(L, 1)) && (olua_is_enum(L, 2))) {
            // std::filesystem::file_status(std::filesystem::file_type ft, @optional std::filesystem::perms prms)
            return _olua_fun_std_filesystem_file_status_new$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::file_status::new' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_file_status_permissions$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::file_status *self = nullptr;

        olua_to_object(L, 1, &self, "fs.file_status");

        // std::filesystem::perms permissions()
        std::filesystem::perms ret = self->permissions();
        int num_ret = olua_push_enum(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::file_status::permissions(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_file_status_permissions$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::file_status *self = nullptr;
        std::filesystem::perms arg1 = (std::filesystem::perms)0;       /** p */

        olua_to_object(L, 1, &self, "fs.file_status");
        olua_check_enum(L, 2, &arg1);

        // void permissions(std::filesystem::perms p)
        self->permissions(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::file_status::permissions(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_file_status_permissions(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // std::filesystem::perms permissions()
        return _olua_fun_std_filesystem_file_status_permissions$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.file_status")) && (olua_is_enum(L, 2))) {
            // void permissions(std::filesystem::perms p)
            return _olua_fun_std_filesystem_file_status_permissions$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::file_status::permissions' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_file_status_type$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::file_status *self = nullptr;

        olua_to_object(L, 1, &self, "fs.file_status");

        // std::filesystem::file_type type()
        std::filesystem::file_type ret = self->type();
        int num_ret = olua_push_enum(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::file_status::type(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_file_status_type$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::file_status *self = nullptr;
        std::filesystem::file_type arg1 = (std::filesystem::file_type)0;       /** ft */

        olua_to_object(L, 1, &self, "fs.file_status");
        olua_check_enum(L, 2, &arg1);

        // void type(std::filesystem::file_type ft)
        self->type(arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::file_status::type(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_file_status_type(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // std::filesystem::file_type type()
        return _olua_fun_std_filesystem_file_status_type$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.file_status")) && (olua_is_enum(L, 2))) {
            // void type(std::filesystem::file_type ft)
            return _olua_fun_std_filesystem_file_status_type$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::file_status::type' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_cls_fs_file_status(lua_State *L)
{
    oluacls_class<std::filesystem::file_status>(L, "fs.file_status");
    oluacls_func(L, "__gc", _olua_fun_std_filesystem_file_status___gc);
    oluacls_func(L, "new", _olua_fun_std_filesystem_file_status_new);
    oluacls_func(L, "permissions", _olua_fun_std_filesystem_file_status_permissions);
    oluacls_func(L, "type", _olua_fun_std_filesystem_file_status_type);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_fs_file_status(lua_State *L)
{
    olua_require(L, ".olua.module.fs",  _olua_module_fs);
    if (!olua_getclass(L, "fs.file_status")) {
        luaL_error(L, "class not found: std::filesystem::file_status");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_cls_fs_file_type(lua_State *L)
{
    oluacls_class<std::filesystem::file_type>(L, "fs.file_type");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "block", (lua_Integer)std::filesystem::file_type::block);
    oluacls_enum(L, "character", (lua_Integer)std::filesystem::file_type::character);
    oluacls_enum(L, "directory", (lua_Integer)std::filesystem::file_type::directory);
    oluacls_enum(L, "fifo", (lua_Integer)std::filesystem::file_type::fifo);
    oluacls_enum(L, "none", (lua_Integer)std::filesystem::file_type::none);
    oluacls_enum(L, "not_found", (lua_Integer)std::filesystem::file_type::not_found);
    oluacls_enum(L, "regular", (lua_Integer)std::filesystem::file_type::regular);
    oluacls_enum(L, "socket", (lua_Integer)std::filesystem::file_type::socket);
    oluacls_enum(L, "symlink", (lua_Integer)std::filesystem::file_type::symlink);
    oluacls_enum(L, "unknown", (lua_Integer)std::filesystem::file_type::unknown);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_fs_file_type(lua_State *L)
{
    olua_require(L, ".olua.module.fs",  _olua_module_fs);
    if (!olua_getclass(L, "fs.file_type")) {
        luaL_error(L, "class not found: std::filesystem::file_type");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_cls_fs_perm_options(lua_State *L)
{
    oluacls_class<std::filesystem::perm_options>(L, "fs.perm_options");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "add", (lua_Integer)std::filesystem::perm_options::add);
    oluacls_enum(L, "nofollow", (lua_Integer)std::filesystem::perm_options::nofollow);
    oluacls_enum(L, "remove", (lua_Integer)std::filesystem::perm_options::remove);
    oluacls_enum(L, "replace", (lua_Integer)std::filesystem::perm_options::replace);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_fs_perm_options(lua_State *L)
{
    olua_require(L, ".olua.module.fs",  _olua_module_fs);
    if (!olua_getclass(L, "fs.perm_options")) {
        luaL_error(L, "class not found: std::filesystem::perm_options");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_cls_fs_perms(lua_State *L)
{
    oluacls_class<std::filesystem::perms>(L, "fs.perms");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "all", (lua_Integer)std::filesystem::perms::all);
    oluacls_enum(L, "group_all", (lua_Integer)std::filesystem::perms::group_all);
    oluacls_enum(L, "group_exec", (lua_Integer)std::filesystem::perms::group_exec);
    oluacls_enum(L, "group_read", (lua_Integer)std::filesystem::perms::group_read);
    oluacls_enum(L, "group_write", (lua_Integer)std::filesystem::perms::group_write);
    oluacls_enum(L, "mask", (lua_Integer)std::filesystem::perms::mask);
    oluacls_enum(L, "none", (lua_Integer)std::filesystem::perms::none);
    oluacls_enum(L, "others_all", (lua_Integer)std::filesystem::perms::others_all);
    oluacls_enum(L, "others_exec", (lua_Integer)std::filesystem::perms::others_exec);
    oluacls_enum(L, "others_read", (lua_Integer)std::filesystem::perms::others_read);
    oluacls_enum(L, "others_write", (lua_Integer)std::filesystem::perms::others_write);
    oluacls_enum(L, "owner_all", (lua_Integer)std::filesystem::perms::owner_all);
    oluacls_enum(L, "owner_exec", (lua_Integer)std::filesystem::perms::owner_exec);
    oluacls_enum(L, "owner_read", (lua_Integer)std::filesystem::perms::owner_read);
    oluacls_enum(L, "owner_write", (lua_Integer)std::filesystem::perms::owner_write);
    oluacls_enum(L, "set_gid", (lua_Integer)std::filesystem::perms::set_gid);
    oluacls_enum(L, "set_uid", (lua_Integer)std::filesystem::perms::set_uid);
    oluacls_enum(L, "sticky_bit", (lua_Integer)std::filesystem::perms::sticky_bit);
    oluacls_enum(L, "unknown", (lua_Integer)std::filesystem::perms::unknown);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_fs_perms(lua_State *L)
{
    olua_require(L, ".olua.module.fs",  _olua_module_fs);
    if (!olua_getclass(L, "fs.perms")) {
        luaL_error(L, "class not found: std::filesystem::perms");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_cls_fs_directory_options(lua_State *L)
{
    oluacls_class<std::filesystem::directory_options>(L, "fs.directory_options");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "follow_directory_symlink", (lua_Integer)std::filesystem::directory_options::follow_directory_symlink);
    oluacls_enum(L, "none", (lua_Integer)std::filesystem::directory_options::none);
    oluacls_enum(L, "skip_permission_denied", (lua_Integer)std::filesystem::directory_options::skip_permission_denied);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_fs_directory_options(lua_State *L)
{
    olua_require(L, ".olua.module.fs",  _olua_module_fs);
    if (!olua_getclass(L, "fs.directory_options")) {
        luaL_error(L, "class not found: std::filesystem::directory_options");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_std_filesystem_space_info___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (std::filesystem::space_info *)olua_toobj(L, 1, "fs.space_info");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::space_info::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_space_info_available$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::space_info *self = nullptr;

        olua_to_object(L, 1, &self, "fs.space_info");

        // uintmax_t available
        uintmax_t ret = self->available;
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::space_info::available(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_space_info_available$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::space_info *self = nullptr;
        uintmax_t arg1 = 0;       /** available */

        olua_to_object(L, 1, &self, "fs.space_info");
        olua_check_integer(L, 2, &arg1);

        // uintmax_t available
        self->available = arg1;

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::space_info::available(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_space_info_available(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // uintmax_t available
        return _olua_fun_std_filesystem_space_info_available$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.space_info")) && (olua_is_integer(L, 2))) {
            // uintmax_t available
            return _olua_fun_std_filesystem_space_info_available$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::space_info::available' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_space_info_capacity$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::space_info *self = nullptr;

        olua_to_object(L, 1, &self, "fs.space_info");

        // uintmax_t capacity
        uintmax_t ret = self->capacity;
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::space_info::capacity(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_space_info_capacity$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::space_info *self = nullptr;
        uintmax_t arg1 = 0;       /** capacity */

        olua_to_object(L, 1, &self, "fs.space_info");
        olua_check_integer(L, 2, &arg1);

        // uintmax_t capacity
        self->capacity = arg1;

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::space_info::capacity(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_space_info_capacity(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // uintmax_t capacity
        return _olua_fun_std_filesystem_space_info_capacity$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.space_info")) && (olua_is_integer(L, 2))) {
            // uintmax_t capacity
            return _olua_fun_std_filesystem_space_info_capacity$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::space_info::capacity' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_space_info_free$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::space_info *self = nullptr;

        olua_to_object(L, 1, &self, "fs.space_info");

        // uintmax_t free
        uintmax_t ret = self->free;
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::space_info::free(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_space_info_free$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::space_info *self = nullptr;
        uintmax_t arg1 = 0;       /** free */

        olua_to_object(L, 1, &self, "fs.space_info");
        olua_check_integer(L, 2, &arg1);

        // uintmax_t free
        self->free = arg1;

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::space_info::free(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_space_info_free(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // uintmax_t free
        return _olua_fun_std_filesystem_space_info_free$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.space_info")) && (olua_is_integer(L, 2))) {
            // uintmax_t free
            return _olua_fun_std_filesystem_space_info_free$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::space_info::free' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_cls_fs_space_info(lua_State *L)
{
    oluacls_class<std::filesystem::space_info>(L, "fs.space_info");
    oluacls_func(L, "__gc", _olua_fun_std_filesystem_space_info___gc);
    oluacls_prop(L, "capacity", _olua_fun_std_filesystem_space_info_capacity, _olua_fun_std_filesystem_space_info_capacity);
    oluacls_prop(L, "free", _olua_fun_std_filesystem_space_info_free, _olua_fun_std_filesystem_space_info_free);
    oluacls_prop(L, "available", _olua_fun_std_filesystem_space_info_available, _olua_fun_std_filesystem_space_info_available);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_fs_space_info(lua_State *L)
{
    olua_require(L, ".olua.module.fs",  _olua_module_fs);
    if (!olua_getclass(L, "fs.space_info")) {
        luaL_error(L, "class not found: std::filesystem::space_info");
    }
    return 1;
}
OLUA_END_DECLS

template <> inline
std::filesystem::directory_iterator olua_iterator_begin<std::filesystem::directory_iterator, std::filesystem::directory_iterator>(std::filesystem::directory_iterator *obj) {
    return std::filesystem::begin(*obj);
}

template <> inline
std::filesystem::directory_iterator olua_iterator_end<std::filesystem::directory_iterator, std::filesystem::directory_iterator>(std::filesystem::directory_iterator *obj) {
    return std::filesystem::end(*obj);
}

static int _olua_fun_std_filesystem_directory_iterator___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (std::filesystem::directory_iterator *)olua_toobj(L, 1, "fs.directory_iterator");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_iterator::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_iterator___pairs(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = olua_toobj<std::filesystem::directory_iterator>(L, 1);
        int ret = olua_pairs<std::filesystem::directory_iterator, std::filesystem::directory_iterator>(L, self, true);
        olua_endinvoke(L);
        return ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_iterator::__pairs(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_iterator_new$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // std::filesystem::directory_iterator()
        std::filesystem::directory_iterator *ret = new std::filesystem::directory_iterator();
        int num_ret = olua_push_object(L, ret, "fs.directory_iterator");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_iterator::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_iterator_new$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // std::filesystem::directory_iterator(const std::filesystem::path &p)
        std::filesystem::directory_iterator *ret = new std::filesystem::directory_iterator(*arg1);
        int num_ret = olua_push_object(L, ret, "fs.directory_iterator");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_iterator::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_iterator_new$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::filesystem::directory_options arg2 = (std::filesystem::directory_options)0;       /** opts */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_enum(L, 2, &arg2);

        // std::filesystem::directory_iterator(const std::filesystem::path &p, std::filesystem::directory_options opts)
        std::filesystem::directory_iterator *ret = new std::filesystem::directory_iterator(*arg1, arg2);
        int num_ret = olua_push_object(L, ret, "fs.directory_iterator");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_iterator::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_iterator_new$4(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // std::filesystem::directory_iterator(const std::filesystem::path &p, std::error_code &ec)
        std::filesystem::directory_iterator *ret = new std::filesystem::directory_iterator(*arg1, *arg2);
        int num_ret = olua_push_object(L, ret, "fs.directory_iterator");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_iterator::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_iterator_new$5(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::filesystem::directory_options arg2 = (std::filesystem::directory_options)0;       /** opts */
        std::error_code *arg3 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_enum(L, 2, &arg2);
        olua_check_object(L, 3, &arg3, "fs.error_code");

        // std::filesystem::directory_iterator(const std::filesystem::path &p, std::filesystem::directory_options opts, std::error_code &ec)
        std::filesystem::directory_iterator *ret = new std::filesystem::directory_iterator(*arg1, arg2, *arg3);
        int num_ret = olua_push_object(L, ret, "fs.directory_iterator");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_iterator::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_iterator_new(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // std::filesystem::directory_iterator()
        return _olua_fun_std_filesystem_directory_iterator_new$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // std::filesystem::directory_iterator(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_directory_iterator_new$2(L);
        // }
    }

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_enum(L, 2))) {
            // std::filesystem::directory_iterator(const std::filesystem::path &p, std::filesystem::directory_options opts)
            return _olua_fun_std_filesystem_directory_iterator_new$3(L);
        }

        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // std::filesystem::directory_iterator(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_directory_iterator_new$4(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_enum(L, 2)) && (olua_is_object(L, 3, "fs.error_code"))) {
            // std::filesystem::directory_iterator(const std::filesystem::path &p, std::filesystem::directory_options opts, std::error_code &ec)
            return _olua_fun_std_filesystem_directory_iterator_new$5(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::directory_iterator::new' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_cls_fs_directory_iterator(lua_State *L)
{
    oluacls_class<std::filesystem::directory_iterator>(L, "fs.directory_iterator");
    oluacls_func(L, "__gc", _olua_fun_std_filesystem_directory_iterator___gc);
    oluacls_func(L, "__pairs", _olua_fun_std_filesystem_directory_iterator___pairs);
    oluacls_func(L, "new", _olua_fun_std_filesystem_directory_iterator_new);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_fs_directory_iterator(lua_State *L)
{
    olua_require(L, ".olua.module.fs",  _olua_module_fs);
    if (!olua_getclass(L, "fs.directory_iterator")) {
        luaL_error(L, "class not found: std::filesystem::directory_iterator");
    }
    return 1;
}
OLUA_END_DECLS

template <> inline
std::filesystem::recursive_directory_iterator olua_iterator_begin<std::filesystem::recursive_directory_iterator, std::filesystem::recursive_directory_iterator>(std::filesystem::recursive_directory_iterator *obj) {
    return std::filesystem::begin(*obj);
}

template <> inline
std::filesystem::recursive_directory_iterator olua_iterator_end<std::filesystem::recursive_directory_iterator, std::filesystem::recursive_directory_iterator>(std::filesystem::recursive_directory_iterator *obj) {
    return std::filesystem::end(*obj);
}

static int _olua_fun_std_filesystem_recursive_directory_iterator___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (std::filesystem::recursive_directory_iterator *)olua_toobj(L, 1, "fs.recursive_directory_iterator");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::recursive_directory_iterator::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_recursive_directory_iterator___pairs(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = olua_toobj<std::filesystem::recursive_directory_iterator>(L, 1);
        int ret = olua_pairs<std::filesystem::recursive_directory_iterator, std::filesystem::recursive_directory_iterator>(L, self, true);
        olua_endinvoke(L);
        return ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::recursive_directory_iterator::__pairs(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_recursive_directory_iterator_new$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // std::filesystem::recursive_directory_iterator()
        std::filesystem::recursive_directory_iterator *ret = new std::filesystem::recursive_directory_iterator();
        int num_ret = olua_push_object(L, ret, "fs.recursive_directory_iterator");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::recursive_directory_iterator::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_recursive_directory_iterator_new$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::filesystem::directory_options arg2 = (std::filesystem::directory_options)0;       /** xoptions */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_enum(L, 2, &arg2);

        // std::filesystem::recursive_directory_iterator(const std::filesystem::path &p, @optional std::filesystem::directory_options xoptions)
        std::filesystem::recursive_directory_iterator *ret = new std::filesystem::recursive_directory_iterator(*arg1, arg2);
        int num_ret = olua_push_object(L, ret, "fs.recursive_directory_iterator");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::recursive_directory_iterator::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_recursive_directory_iterator_new$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // std::filesystem::recursive_directory_iterator(const std::filesystem::path &p)
        std::filesystem::recursive_directory_iterator *ret = new std::filesystem::recursive_directory_iterator(*arg1);
        int num_ret = olua_push_object(L, ret, "fs.recursive_directory_iterator");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::recursive_directory_iterator::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_recursive_directory_iterator_new$4(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::filesystem::directory_options arg2 = (std::filesystem::directory_options)0;       /** xoptions */
        std::error_code *arg3 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_enum(L, 2, &arg2);
        olua_check_object(L, 3, &arg3, "fs.error_code");

        // std::filesystem::recursive_directory_iterator(const std::filesystem::path &p, std::filesystem::directory_options xoptions, std::error_code &ec)
        std::filesystem::recursive_directory_iterator *ret = new std::filesystem::recursive_directory_iterator(*arg1, arg2, *arg3);
        int num_ret = olua_push_object(L, ret, "fs.recursive_directory_iterator");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::recursive_directory_iterator::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_recursive_directory_iterator_new$5(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // std::filesystem::recursive_directory_iterator(const std::filesystem::path &p, std::error_code &ec)
        std::filesystem::recursive_directory_iterator *ret = new std::filesystem::recursive_directory_iterator(*arg1, *arg2);
        int num_ret = olua_push_object(L, ret, "fs.recursive_directory_iterator");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::recursive_directory_iterator::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_recursive_directory_iterator_new(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // std::filesystem::recursive_directory_iterator()
        return _olua_fun_std_filesystem_recursive_directory_iterator_new$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // std::filesystem::recursive_directory_iterator(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_recursive_directory_iterator_new$3(L);
        // }
    }

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_enum(L, 2))) {
            // std::filesystem::recursive_directory_iterator(const std::filesystem::path &p, @optional std::filesystem::directory_options xoptions)
            return _olua_fun_std_filesystem_recursive_directory_iterator_new$2(L);
        }

        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // std::filesystem::recursive_directory_iterator(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_recursive_directory_iterator_new$5(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_enum(L, 2)) && (olua_is_object(L, 3, "fs.error_code"))) {
            // std::filesystem::recursive_directory_iterator(const std::filesystem::path &p, std::filesystem::directory_options xoptions, std::error_code &ec)
            return _olua_fun_std_filesystem_recursive_directory_iterator_new$4(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::recursive_directory_iterator::new' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_cls_fs_recursive_directory_iterator(lua_State *L)
{
    oluacls_class<std::filesystem::recursive_directory_iterator>(L, "fs.recursive_directory_iterator");
    oluacls_func(L, "__gc", _olua_fun_std_filesystem_recursive_directory_iterator___gc);
    oluacls_func(L, "__pairs", _olua_fun_std_filesystem_recursive_directory_iterator___pairs);
    oluacls_func(L, "new", _olua_fun_std_filesystem_recursive_directory_iterator_new);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_fs_recursive_directory_iterator(lua_State *L)
{
    olua_require(L, ".olua.module.fs",  _olua_module_fs);
    if (!olua_getclass(L, "fs.recursive_directory_iterator")) {
        luaL_error(L, "class not found: std::filesystem::recursive_directory_iterator");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_std_filesystem_directory_entry___eq(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;
        std::filesystem::directory_entry *arg1;       /** rhs */

        olua_to_object(L, 1, &self, "fs.directory_entry");
        olua_check_object(L, 2, &arg1, "fs.directory_entry");

        // @operator(operator==) bool operator==(const std::filesystem::directory_entry &rhs)
        bool ret = (*self) == (*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::__eq(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (std::filesystem::directory_entry *)olua_toobj(L, 1, "fs.directory_entry");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry___le(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;
        std::filesystem::directory_entry *arg1;       /** rhs */

        olua_to_object(L, 1, &self, "fs.directory_entry");
        olua_check_object(L, 2, &arg1, "fs.directory_entry");

        // @operator(operator<=) bool operator<=(const std::filesystem::directory_entry &rhs)
        bool ret = (*self) <= (*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::__le(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry___lt(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;
        std::filesystem::directory_entry *arg1;       /** rhs */

        olua_to_object(L, 1, &self, "fs.directory_entry");
        olua_check_object(L, 2, &arg1, "fs.directory_entry");

        // @operator(operator<) bool operator<(const std::filesystem::directory_entry &rhs)
        bool ret = (*self) < (*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::__lt(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_assign$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;
        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        olua_to_object(L, 1, &self, "fs.directory_entry");
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 2, &arg1, "fs.path");
        }

        // void assign(const std::filesystem::path &p)
        self->assign(*arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::assign(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_assign$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;
        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        olua_to_object(L, 1, &self, "fs.directory_entry");
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 2, &arg1, "fs.path");
        }
        olua_check_object(L, 3, &arg2, "fs.error_code");

        // void assign(const std::filesystem::path &p, std::error_code &ec)
        self->assign(*arg1, *arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::assign(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_assign(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.directory_entry")) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2))) {
            // void assign(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_directory_entry_assign$1(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "fs.directory_entry")) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2)) && (olua_is_object(L, 3, "fs.error_code"))) {
            // void assign(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_directory_entry_assign$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::directory_entry::assign' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_directory_entry_exists$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;

        olua_to_object(L, 1, &self, "fs.directory_entry");

        // bool exists()
        bool ret = self->exists();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::exists(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_exists$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;
        std::error_code *arg1 = nullptr;       /** ec */

        olua_to_object(L, 1, &self, "fs.directory_entry");
        olua_check_object(L, 2, &arg1, "fs.error_code");

        // bool exists(std::error_code &ec)
        bool ret = self->exists(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::exists(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_exists(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool exists()
        return _olua_fun_std_filesystem_directory_entry_exists$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.directory_entry")) && (olua_is_object(L, 2, "fs.error_code"))) {
            // bool exists(std::error_code &ec)
            return _olua_fun_std_filesystem_directory_entry_exists$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::directory_entry::exists' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_directory_entry_file_size$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;

        olua_to_object(L, 1, &self, "fs.directory_entry");

        // uintmax_t file_size()
        uintmax_t ret = self->file_size();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::file_size(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_file_size$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;
        std::error_code *arg1 = nullptr;       /** ec */

        olua_to_object(L, 1, &self, "fs.directory_entry");
        olua_check_object(L, 2, &arg1, "fs.error_code");

        // uintmax_t file_size(std::error_code &ec)
        uintmax_t ret = self->file_size(*arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::file_size(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_file_size(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // uintmax_t file_size()
        return _olua_fun_std_filesystem_directory_entry_file_size$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.directory_entry")) && (olua_is_object(L, 2, "fs.error_code"))) {
            // uintmax_t file_size(std::error_code &ec)
            return _olua_fun_std_filesystem_directory_entry_file_size$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::directory_entry::file_size' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_directory_entry_hard_link_count$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;

        olua_to_object(L, 1, &self, "fs.directory_entry");

        // uintmax_t hard_link_count()
        uintmax_t ret = self->hard_link_count();
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::hard_link_count(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_hard_link_count$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;
        std::error_code *arg1 = nullptr;       /** ec */

        olua_to_object(L, 1, &self, "fs.directory_entry");
        olua_check_object(L, 2, &arg1, "fs.error_code");

        // uintmax_t hard_link_count(std::error_code &ec)
        uintmax_t ret = self->hard_link_count(*arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::hard_link_count(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_hard_link_count(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // uintmax_t hard_link_count()
        return _olua_fun_std_filesystem_directory_entry_hard_link_count$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.directory_entry")) && (olua_is_object(L, 2, "fs.error_code"))) {
            // uintmax_t hard_link_count(std::error_code &ec)
            return _olua_fun_std_filesystem_directory_entry_hard_link_count$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::directory_entry::hard_link_count' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_directory_entry_is_block_file$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;

        olua_to_object(L, 1, &self, "fs.directory_entry");

        // bool is_block_file()
        bool ret = self->is_block_file();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::is_block_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_is_block_file$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;
        std::error_code *arg1 = nullptr;       /** ec */

        olua_to_object(L, 1, &self, "fs.directory_entry");
        olua_check_object(L, 2, &arg1, "fs.error_code");

        // bool is_block_file(std::error_code &ec)
        bool ret = self->is_block_file(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::is_block_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_is_block_file(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool is_block_file()
        return _olua_fun_std_filesystem_directory_entry_is_block_file$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.directory_entry")) && (olua_is_object(L, 2, "fs.error_code"))) {
            // bool is_block_file(std::error_code &ec)
            return _olua_fun_std_filesystem_directory_entry_is_block_file$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::directory_entry::is_block_file' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_directory_entry_is_character_file$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;

        olua_to_object(L, 1, &self, "fs.directory_entry");

        // bool is_character_file()
        bool ret = self->is_character_file();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::is_character_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_is_character_file$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;
        std::error_code *arg1 = nullptr;       /** ec */

        olua_to_object(L, 1, &self, "fs.directory_entry");
        olua_check_object(L, 2, &arg1, "fs.error_code");

        // bool is_character_file(std::error_code &ec)
        bool ret = self->is_character_file(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::is_character_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_is_character_file(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool is_character_file()
        return _olua_fun_std_filesystem_directory_entry_is_character_file$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.directory_entry")) && (olua_is_object(L, 2, "fs.error_code"))) {
            // bool is_character_file(std::error_code &ec)
            return _olua_fun_std_filesystem_directory_entry_is_character_file$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::directory_entry::is_character_file' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_directory_entry_is_directory$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;

        olua_to_object(L, 1, &self, "fs.directory_entry");

        // bool is_directory()
        bool ret = self->is_directory();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::is_directory(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_is_directory$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;
        std::error_code *arg1 = nullptr;       /** ec */

        olua_to_object(L, 1, &self, "fs.directory_entry");
        olua_check_object(L, 2, &arg1, "fs.error_code");

        // bool is_directory(std::error_code &ec)
        bool ret = self->is_directory(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::is_directory(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_is_directory(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool is_directory()
        return _olua_fun_std_filesystem_directory_entry_is_directory$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.directory_entry")) && (olua_is_object(L, 2, "fs.error_code"))) {
            // bool is_directory(std::error_code &ec)
            return _olua_fun_std_filesystem_directory_entry_is_directory$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::directory_entry::is_directory' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_directory_entry_is_fifo$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;

        olua_to_object(L, 1, &self, "fs.directory_entry");

        // bool is_fifo()
        bool ret = self->is_fifo();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::is_fifo(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_is_fifo$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;
        std::error_code *arg1 = nullptr;       /** ec */

        olua_to_object(L, 1, &self, "fs.directory_entry");
        olua_check_object(L, 2, &arg1, "fs.error_code");

        // bool is_fifo(std::error_code &ec)
        bool ret = self->is_fifo(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::is_fifo(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_is_fifo(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool is_fifo()
        return _olua_fun_std_filesystem_directory_entry_is_fifo$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.directory_entry")) && (olua_is_object(L, 2, "fs.error_code"))) {
            // bool is_fifo(std::error_code &ec)
            return _olua_fun_std_filesystem_directory_entry_is_fifo$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::directory_entry::is_fifo' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_directory_entry_is_other$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;

        olua_to_object(L, 1, &self, "fs.directory_entry");

        // bool is_other()
        bool ret = self->is_other();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::is_other(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_is_other$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;
        std::error_code *arg1 = nullptr;       /** ec */

        olua_to_object(L, 1, &self, "fs.directory_entry");
        olua_check_object(L, 2, &arg1, "fs.error_code");

        // bool is_other(std::error_code &ec)
        bool ret = self->is_other(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::is_other(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_is_other(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool is_other()
        return _olua_fun_std_filesystem_directory_entry_is_other$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.directory_entry")) && (olua_is_object(L, 2, "fs.error_code"))) {
            // bool is_other(std::error_code &ec)
            return _olua_fun_std_filesystem_directory_entry_is_other$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::directory_entry::is_other' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_directory_entry_is_regular_file$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;

        olua_to_object(L, 1, &self, "fs.directory_entry");

        // bool is_regular_file()
        bool ret = self->is_regular_file();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::is_regular_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_is_regular_file$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;
        std::error_code *arg1 = nullptr;       /** ec */

        olua_to_object(L, 1, &self, "fs.directory_entry");
        olua_check_object(L, 2, &arg1, "fs.error_code");

        // bool is_regular_file(std::error_code &ec)
        bool ret = self->is_regular_file(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::is_regular_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_is_regular_file(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool is_regular_file()
        return _olua_fun_std_filesystem_directory_entry_is_regular_file$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.directory_entry")) && (olua_is_object(L, 2, "fs.error_code"))) {
            // bool is_regular_file(std::error_code &ec)
            return _olua_fun_std_filesystem_directory_entry_is_regular_file$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::directory_entry::is_regular_file' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_directory_entry_is_socket$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;

        olua_to_object(L, 1, &self, "fs.directory_entry");

        // bool is_socket()
        bool ret = self->is_socket();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::is_socket(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_is_socket$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;
        std::error_code *arg1 = nullptr;       /** ec */

        olua_to_object(L, 1, &self, "fs.directory_entry");
        olua_check_object(L, 2, &arg1, "fs.error_code");

        // bool is_socket(std::error_code &ec)
        bool ret = self->is_socket(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::is_socket(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_is_socket(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool is_socket()
        return _olua_fun_std_filesystem_directory_entry_is_socket$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.directory_entry")) && (olua_is_object(L, 2, "fs.error_code"))) {
            // bool is_socket(std::error_code &ec)
            return _olua_fun_std_filesystem_directory_entry_is_socket$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::directory_entry::is_socket' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_directory_entry_is_symlink$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;

        olua_to_object(L, 1, &self, "fs.directory_entry");

        // bool is_symlink()
        bool ret = self->is_symlink();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::is_symlink(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_is_symlink$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;
        std::error_code *arg1 = nullptr;       /** ec */

        olua_to_object(L, 1, &self, "fs.directory_entry");
        olua_check_object(L, 2, &arg1, "fs.error_code");

        // bool is_symlink(std::error_code &ec)
        bool ret = self->is_symlink(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::is_symlink(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_is_symlink(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // bool is_symlink()
        return _olua_fun_std_filesystem_directory_entry_is_symlink$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.directory_entry")) && (olua_is_object(L, 2, "fs.error_code"))) {
            // bool is_symlink(std::error_code &ec)
            return _olua_fun_std_filesystem_directory_entry_is_symlink$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::directory_entry::is_symlink' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_directory_entry_last_write_time$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;

        olua_to_object(L, 1, &self, "fs.directory_entry");

        // std::filesystem::file_time_type last_write_time()
        std::filesystem::file_time_type ret = self->last_write_time();
        int num_ret = olua_copy_object(L, ret, "fs.file_time_type");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::last_write_time(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_last_write_time$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;
        std::error_code *arg1 = nullptr;       /** ec */

        olua_to_object(L, 1, &self, "fs.directory_entry");
        olua_check_object(L, 2, &arg1, "fs.error_code");

        // std::filesystem::file_time_type last_write_time(std::error_code &ec)
        std::filesystem::file_time_type ret = self->last_write_time(*arg1);
        int num_ret = olua_copy_object(L, ret, "fs.file_time_type");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::last_write_time(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_last_write_time(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // std::filesystem::file_time_type last_write_time()
        return _olua_fun_std_filesystem_directory_entry_last_write_time$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.directory_entry")) && (olua_is_object(L, 2, "fs.error_code"))) {
            // std::filesystem::file_time_type last_write_time(std::error_code &ec)
            return _olua_fun_std_filesystem_directory_entry_last_write_time$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::directory_entry::last_write_time' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_directory_entry_new$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // std::filesystem::directory_entry()
        std::filesystem::directory_entry *ret = new std::filesystem::directory_entry();
        int num_ret = olua_push_object(L, ret, "fs.directory_entry");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_new$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // std::filesystem::directory_entry(const std::filesystem::path &p)
        std::filesystem::directory_entry *ret = new std::filesystem::directory_entry(*arg1);
        int num_ret = olua_push_object(L, ret, "fs.directory_entry");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_new$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // std::filesystem::directory_entry(const std::filesystem::path &p, std::error_code &ec)
        std::filesystem::directory_entry *ret = new std::filesystem::directory_entry(*arg1, *arg2);
        int num_ret = olua_push_object(L, ret, "fs.directory_entry");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_new(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // std::filesystem::directory_entry()
        return _olua_fun_std_filesystem_directory_entry_new$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // std::filesystem::directory_entry(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_directory_entry_new$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // std::filesystem::directory_entry(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_directory_entry_new$3(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::directory_entry::new' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_directory_entry_path(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;

        olua_to_object(L, 1, &self, "fs.directory_entry");

        // const std::filesystem::path &path()
        const std::filesystem::path &ret = self->path();
        int num_ret = olua_push_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::path(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_refresh$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;

        olua_to_object(L, 1, &self, "fs.directory_entry");

        // void refresh()
        self->refresh();

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::refresh(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_refresh$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;
        std::error_code *arg1 = nullptr;       /** ec */

        olua_to_object(L, 1, &self, "fs.directory_entry");
        olua_check_object(L, 2, &arg1, "fs.error_code");

        // void refresh(std::error_code &ec)
        self->refresh(*arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::refresh(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_refresh(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // void refresh()
        return _olua_fun_std_filesystem_directory_entry_refresh$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.directory_entry")) && (olua_is_object(L, 2, "fs.error_code"))) {
            // void refresh(std::error_code &ec)
            return _olua_fun_std_filesystem_directory_entry_refresh$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::directory_entry::refresh' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_directory_entry_replace_filename$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;
        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        olua_to_object(L, 1, &self, "fs.directory_entry");
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 2, &arg1, "fs.path");
        }

        // void replace_filename(const std::filesystem::path &p)
        self->replace_filename(*arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::replace_filename(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_replace_filename$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;
        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        olua_to_object(L, 1, &self, "fs.directory_entry");
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 2, &arg1, "fs.path");
        }
        olua_check_object(L, 3, &arg2, "fs.error_code");

        // void replace_filename(const std::filesystem::path &p, std::error_code &ec)
        self->replace_filename(*arg1, *arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::replace_filename(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_replace_filename(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.directory_entry")) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2))) {
            // void replace_filename(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_directory_entry_replace_filename$1(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "fs.directory_entry")) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2)) && (olua_is_object(L, 3, "fs.error_code"))) {
            // void replace_filename(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_directory_entry_replace_filename$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::directory_entry::replace_filename' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_directory_entry_status$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;

        olua_to_object(L, 1, &self, "fs.directory_entry");

        // std::filesystem::file_status status()
        std::filesystem::file_status ret = self->status();
        int num_ret = olua_copy_object(L, ret, "fs.file_status");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::status(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_status$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;
        std::error_code *arg1 = nullptr;       /** ec */

        olua_to_object(L, 1, &self, "fs.directory_entry");
        olua_check_object(L, 2, &arg1, "fs.error_code");

        // std::filesystem::file_status status(std::error_code &ec)
        std::filesystem::file_status ret = self->status(*arg1);
        int num_ret = olua_copy_object(L, ret, "fs.file_status");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::status(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_status(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // std::filesystem::file_status status()
        return _olua_fun_std_filesystem_directory_entry_status$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.directory_entry")) && (olua_is_object(L, 2, "fs.error_code"))) {
            // std::filesystem::file_status status(std::error_code &ec)
            return _olua_fun_std_filesystem_directory_entry_status$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::directory_entry::status' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_directory_entry_symlink_status$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;

        olua_to_object(L, 1, &self, "fs.directory_entry");

        // std::filesystem::file_status symlink_status()
        std::filesystem::file_status ret = self->symlink_status();
        int num_ret = olua_copy_object(L, ret, "fs.file_status");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::symlink_status(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_symlink_status$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::directory_entry *self = nullptr;
        std::error_code *arg1 = nullptr;       /** ec */

        olua_to_object(L, 1, &self, "fs.directory_entry");
        olua_check_object(L, 2, &arg1, "fs.error_code");

        // std::filesystem::file_status symlink_status(std::error_code &ec)
        std::filesystem::file_status ret = self->symlink_status(*arg1);
        int num_ret = olua_copy_object(L, ret, "fs.file_status");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::directory_entry::symlink_status(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_directory_entry_symlink_status(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // std::filesystem::file_status symlink_status()
        return _olua_fun_std_filesystem_directory_entry_symlink_status$1(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.directory_entry")) && (olua_is_object(L, 2, "fs.error_code"))) {
            // std::filesystem::file_status symlink_status(std::error_code &ec)
            return _olua_fun_std_filesystem_directory_entry_symlink_status$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::directory_entry::symlink_status' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_cls_fs_directory_entry(lua_State *L)
{
    oluacls_class<std::filesystem::directory_entry>(L, "fs.directory_entry");
    oluacls_func(L, "__eq", _olua_fun_std_filesystem_directory_entry___eq);
    oluacls_func(L, "__gc", _olua_fun_std_filesystem_directory_entry___gc);
    oluacls_func(L, "__le", _olua_fun_std_filesystem_directory_entry___le);
    oluacls_func(L, "__lt", _olua_fun_std_filesystem_directory_entry___lt);
    oluacls_func(L, "assign", _olua_fun_std_filesystem_directory_entry_assign);
    oluacls_func(L, "exists", _olua_fun_std_filesystem_directory_entry_exists);
    oluacls_func(L, "file_size", _olua_fun_std_filesystem_directory_entry_file_size);
    oluacls_func(L, "hard_link_count", _olua_fun_std_filesystem_directory_entry_hard_link_count);
    oluacls_func(L, "is_block_file", _olua_fun_std_filesystem_directory_entry_is_block_file);
    oluacls_func(L, "is_character_file", _olua_fun_std_filesystem_directory_entry_is_character_file);
    oluacls_func(L, "is_directory", _olua_fun_std_filesystem_directory_entry_is_directory);
    oluacls_func(L, "is_fifo", _olua_fun_std_filesystem_directory_entry_is_fifo);
    oluacls_func(L, "is_other", _olua_fun_std_filesystem_directory_entry_is_other);
    oluacls_func(L, "is_regular_file", _olua_fun_std_filesystem_directory_entry_is_regular_file);
    oluacls_func(L, "is_socket", _olua_fun_std_filesystem_directory_entry_is_socket);
    oluacls_func(L, "is_symlink", _olua_fun_std_filesystem_directory_entry_is_symlink);
    oluacls_func(L, "last_write_time", _olua_fun_std_filesystem_directory_entry_last_write_time);
    oluacls_func(L, "new", _olua_fun_std_filesystem_directory_entry_new);
    oluacls_func(L, "path", _olua_fun_std_filesystem_directory_entry_path);
    oluacls_func(L, "refresh", _olua_fun_std_filesystem_directory_entry_refresh);
    oluacls_func(L, "replace_filename", _olua_fun_std_filesystem_directory_entry_replace_filename);
    oluacls_func(L, "status", _olua_fun_std_filesystem_directory_entry_status);
    oluacls_func(L, "symlink_status", _olua_fun_std_filesystem_directory_entry_symlink_status);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_fs_directory_entry(lua_State *L)
{
    olua_require(L, ".olua.module.fs",  _olua_module_fs);
    if (!olua_getclass(L, "fs.directory_entry")) {
        luaL_error(L, "class not found: std::filesystem::directory_entry");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_std_filesystem_path___div(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** lhs */
        std::filesystem::path arg1_fromstring;       /** lhs */
        std::filesystem::path *arg2;       /** rhs */
        std::filesystem::path arg2_fromstring;       /** rhs */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }

        // @operator(operator/) static std::filesystem::path operator/(const std::filesystem::path &lhs, const std::filesystem::path &rhs)
        std::filesystem::path ret = (*arg1) / (*arg2);
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::__div(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path___eq(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** lhs */
        std::filesystem::path arg1_fromstring;       /** lhs */
        std::filesystem::path *arg2;       /** rhs */
        std::filesystem::path arg2_fromstring;       /** rhs */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }

        // @operator(operator==) static bool operator==(const std::filesystem::path &lhs, const std::filesystem::path &rhs)
        bool ret = (*arg1) == (*arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::__eq(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (std::filesystem::path *)olua_toobj(L, 1, "fs.path");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path___le(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** lhs */
        std::filesystem::path arg1_fromstring;       /** lhs */
        std::filesystem::path *arg2;       /** rhs */
        std::filesystem::path arg2_fromstring;       /** rhs */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }

        // @operator(operator<=) static bool operator<=(const std::filesystem::path &lhs, const std::filesystem::path &rhs)
        bool ret = (*arg1) <= (*arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::__le(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path___lt(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** lhs */
        std::filesystem::path arg1_fromstring;       /** lhs */
        std::filesystem::path *arg2;       /** rhs */
        std::filesystem::path arg2_fromstring;       /** rhs */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }

        // @operator(operator<) static bool operator<(const std::filesystem::path &lhs, const std::filesystem::path &rhs)
        bool ret = (*arg1) < (*arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::__lt(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path___pairs(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = olua_toobj<std::filesystem::path>(L, 1);
        int ret = olua_pairs<std::filesystem::path, std::filesystem::path::iterator>(L, self, false);
        olua_endinvoke(L);
        return ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::__pairs(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_assign(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;
        std::filesystem::path::string_type arg1;       /** s */

        olua_to_object(L, 1, &self, "fs.path");
        olua_check_string(L, 2, &arg1);

        // std::filesystem::path &assign(std::filesystem::path::string_type &&s)
        std::filesystem::path &ret = self->assign(arg1);
        int num_ret = olua_push_object(L, &ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::assign(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_c_str(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // const std::filesystem::path::value_type *c_str()
        const std::filesystem::path::value_type *ret = self->c_str();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::c_str(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_clear(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // void clear()
        self->clear();

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::clear(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_compare$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;
        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        olua_to_object(L, 1, &self, "fs.path");
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 2, &arg1, "fs.path");
        }

        // int compare(const std::filesystem::path &p)
        int ret = self->compare(*arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::compare(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_compare$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;
        std::filesystem::path::string_type arg1;       /** s */

        olua_to_object(L, 1, &self, "fs.path");
        olua_check_string(L, 2, &arg1);

        // int compare(const std::filesystem::path::string_type &s)
        int ret = self->compare(arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::compare(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_compare$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;
        const std::filesystem::path::value_type *arg1 = nullptr;       /** s */

        olua_to_object(L, 1, &self, "fs.path");
        olua_check_string(L, 2, &arg1);

        // int compare(const std::filesystem::path::value_type *s)
        int ret = self->compare(arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::compare(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_compare(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "fs.path")) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2))) {
            // int compare(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_path_compare$1(L);
        }

        if ((olua_is_object(L, 1, "fs.path")) && (olua_is_string(L, 2))) {
            // int compare(const std::filesystem::path::string_type &s)
            return _olua_fun_std_filesystem_path_compare$2(L);
        }

        // if ((olua_is_object(L, 1, "fs.path")) && (olua_is_string(L, 2))) {
            // int compare(const std::filesystem::path::value_type *s)
            return _olua_fun_std_filesystem_path_compare$3(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::path::compare' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_path_empty(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // bool empty()
        bool ret = self->empty();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::empty(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_extension(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // std::filesystem::path extension()
        std::filesystem::path ret = self->extension();
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::extension(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_filename(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // std::filesystem::path filename()
        std::filesystem::path ret = self->filename();
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::filename(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_generic_string(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // std::string generic_string()
        std::string ret = self->generic_string();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::generic_string(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_generic_u8string(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // std::string generic_u8string()
        std::string ret = self->generic_u8string();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::generic_u8string(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_has_extension(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // bool has_extension()
        bool ret = self->has_extension();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::has_extension(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_has_filename(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // bool has_filename()
        bool ret = self->has_filename();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::has_filename(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_has_parent_path(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // bool has_parent_path()
        bool ret = self->has_parent_path();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::has_parent_path(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_has_relative_path(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // bool has_relative_path()
        bool ret = self->has_relative_path();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::has_relative_path(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_has_root_directory(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // bool has_root_directory()
        bool ret = self->has_root_directory();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::has_root_directory(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_has_root_name(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // bool has_root_name()
        bool ret = self->has_root_name();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::has_root_name(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_has_root_path(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // bool has_root_path()
        bool ret = self->has_root_path();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::has_root_path(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_has_stem(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // bool has_stem()
        bool ret = self->has_stem();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::has_stem(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_is_absolute(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // bool is_absolute()
        bool ret = self->is_absolute();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::is_absolute(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_is_relative(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // bool is_relative()
        bool ret = self->is_relative();
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::is_relative(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_lexically_normal(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // std::filesystem::path lexically_normal()
        std::filesystem::path ret = self->lexically_normal();
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::lexically_normal(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_lexically_proximate(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;
        std::filesystem::path *arg1;       /** base */
        std::filesystem::path arg1_fromstring;       /** base */

        olua_to_object(L, 1, &self, "fs.path");
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 2, &arg1, "fs.path");
        }

        // std::filesystem::path lexically_proximate(const std::filesystem::path &base)
        std::filesystem::path ret = self->lexically_proximate(*arg1);
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::lexically_proximate(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_lexically_relative(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;
        std::filesystem::path *arg1;       /** base */
        std::filesystem::path arg1_fromstring;       /** base */

        olua_to_object(L, 1, &self, "fs.path");
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 2, &arg1, "fs.path");
        }

        // std::filesystem::path lexically_relative(const std::filesystem::path &base)
        std::filesystem::path ret = self->lexically_relative(*arg1);
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::lexically_relative(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_make_preferred(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // std::filesystem::path &make_preferred()
        std::filesystem::path &ret = self->make_preferred();
        int num_ret = olua_push_object(L, &ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::make_preferred(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_native(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // const std::filesystem::path::string_type &native()
        const std::filesystem::path::string_type &ret = self->native();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::native(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_new$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // std::filesystem::path()
        std::filesystem::path *ret = new std::filesystem::path();
        int num_ret = olua_push_object(L, ret, "fs.path");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_new$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path::string_type arg1;       /** s */
        std::filesystem::path::format arg2 = (std::filesystem::path::format)0;       /** arg2 */

        olua_check_string(L, 1, &arg1);
        olua_check_enum(L, 2, &arg2);

        // std::filesystem::path(std::filesystem::path::string_type &&s, @optional std::filesystem::path::format arg2)
        std::filesystem::path *ret = new std::filesystem::path(arg1, arg2);
        int num_ret = olua_push_object(L, ret, "fs.path");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_new$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path::string_type arg1;       /** s */

        olua_check_string(L, 1, &arg1);

        // std::filesystem::path(std::filesystem::path::string_type &&s)
        std::filesystem::path *ret = new std::filesystem::path(arg1);
        int num_ret = olua_push_object(L, ret, "fs.path");
        olua_postnew(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::new(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_new(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // std::filesystem::path()
        return _olua_fun_std_filesystem_path_new$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_string(L, 1))) {
            // std::filesystem::path(std::filesystem::path::string_type &&s)
            return _olua_fun_std_filesystem_path_new$3(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_string(L, 1)) && (olua_is_enum(L, 2))) {
            // std::filesystem::path(std::filesystem::path::string_type &&s, @optional std::filesystem::path::format arg2)
            return _olua_fun_std_filesystem_path_new$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::path::new' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_path_parent_path(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // std::filesystem::path parent_path()
        std::filesystem::path ret = self->parent_path();
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::parent_path(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_posix_path(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1 = nullptr;       /** self */

        olua_check_object(L, 1, &arg1, "fs.path");

        // @extend(fs::path_extend) static std::filesystem::path posix_path(std::filesystem::path *self)
        std::filesystem::path ret = fs::path_extend::posix_path(arg1);
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::posix_path(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_relative_path(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // std::filesystem::path relative_path()
        std::filesystem::path ret = self->relative_path();
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::relative_path(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_remove_filename(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // std::filesystem::path &remove_filename()
        std::filesystem::path &ret = self->remove_filename();
        int num_ret = olua_push_object(L, &ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::remove_filename(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_replace_extension$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;
        std::filesystem::path *arg1;       /** replacement */
        std::filesystem::path arg1_fromstring;       /** replacement */

        olua_to_object(L, 1, &self, "fs.path");
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 2, &arg1, "fs.path");
        }

        // std::filesystem::path &replace_extension(@optional const std::filesystem::path &replacement)
        std::filesystem::path &ret = self->replace_extension(*arg1);
        int num_ret = olua_push_object(L, &ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::replace_extension(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_replace_extension$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // std::filesystem::path &replace_extension()
        std::filesystem::path &ret = self->replace_extension();
        int num_ret = olua_push_object(L, &ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::replace_extension(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_replace_extension(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // std::filesystem::path &replace_extension()
        return _olua_fun_std_filesystem_path_replace_extension$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path")) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2))) {
            // std::filesystem::path &replace_extension(@optional const std::filesystem::path &replacement)
            return _olua_fun_std_filesystem_path_replace_extension$1(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::path::replace_extension' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_path_replace_filename(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;
        std::filesystem::path *arg1;       /** replacement */
        std::filesystem::path arg1_fromstring;       /** replacement */

        olua_to_object(L, 1, &self, "fs.path");
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 2, &arg1, "fs.path");
        }

        // std::filesystem::path &replace_filename(const std::filesystem::path &replacement)
        std::filesystem::path &ret = self->replace_filename(*arg1);
        int num_ret = olua_push_object(L, &ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::replace_filename(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_root_directory(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // std::filesystem::path root_directory()
        std::filesystem::path ret = self->root_directory();
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::root_directory(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_root_name(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // std::filesystem::path root_name()
        std::filesystem::path ret = self->root_name();
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::root_name(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_root_path(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // std::filesystem::path root_path()
        std::filesystem::path ret = self->root_path();
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::root_path(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_stem(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // std::filesystem::path stem()
        std::filesystem::path ret = self->stem();
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::stem(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_string(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // std::string string()
        std::string ret = self->string();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::string(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_swap(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;
        std::filesystem::path *arg1 = nullptr;       /** rhs */

        olua_to_object(L, 1, &self, "fs.path");
        olua_check_object(L, 2, &arg1, "fs.path");

        // void swap(std::filesystem::path &rhs)
        self->swap(*arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::swap(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_path_u8string(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *self = nullptr;

        olua_to_object(L, 1, &self, "fs.path");

        // std::string u8string()
        std::string ret = self->u8string();
        int num_ret = olua_push_string(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::u8string(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_fs_path(lua_State *L)
{
    oluacls_class<std::filesystem::path>(L, "fs.path");
    oluacls_func(L, "__div", _olua_fun_std_filesystem_path___div);
    oluacls_func(L, "__eq", _olua_fun_std_filesystem_path___eq);
    oluacls_func(L, "__gc", _olua_fun_std_filesystem_path___gc);
    oluacls_func(L, "__le", _olua_fun_std_filesystem_path___le);
    oluacls_func(L, "__lt", _olua_fun_std_filesystem_path___lt);
    oluacls_func(L, "__pairs", _olua_fun_std_filesystem_path___pairs);
    oluacls_func(L, "assign", _olua_fun_std_filesystem_path_assign);
    oluacls_func(L, "c_str", _olua_fun_std_filesystem_path_c_str);
    oluacls_func(L, "clear", _olua_fun_std_filesystem_path_clear);
    oluacls_func(L, "compare", _olua_fun_std_filesystem_path_compare);
    oluacls_func(L, "empty", _olua_fun_std_filesystem_path_empty);
    oluacls_func(L, "extension", _olua_fun_std_filesystem_path_extension);
    oluacls_func(L, "filename", _olua_fun_std_filesystem_path_filename);
    oluacls_func(L, "generic_string", _olua_fun_std_filesystem_path_generic_string);
    oluacls_func(L, "generic_u8string", _olua_fun_std_filesystem_path_generic_u8string);
    oluacls_func(L, "has_extension", _olua_fun_std_filesystem_path_has_extension);
    oluacls_func(L, "has_filename", _olua_fun_std_filesystem_path_has_filename);
    oluacls_func(L, "has_parent_path", _olua_fun_std_filesystem_path_has_parent_path);
    oluacls_func(L, "has_relative_path", _olua_fun_std_filesystem_path_has_relative_path);
    oluacls_func(L, "has_root_directory", _olua_fun_std_filesystem_path_has_root_directory);
    oluacls_func(L, "has_root_name", _olua_fun_std_filesystem_path_has_root_name);
    oluacls_func(L, "has_root_path", _olua_fun_std_filesystem_path_has_root_path);
    oluacls_func(L, "has_stem", _olua_fun_std_filesystem_path_has_stem);
    oluacls_func(L, "is_absolute", _olua_fun_std_filesystem_path_is_absolute);
    oluacls_func(L, "is_relative", _olua_fun_std_filesystem_path_is_relative);
    oluacls_func(L, "lexically_normal", _olua_fun_std_filesystem_path_lexically_normal);
    oluacls_func(L, "lexically_proximate", _olua_fun_std_filesystem_path_lexically_proximate);
    oluacls_func(L, "lexically_relative", _olua_fun_std_filesystem_path_lexically_relative);
    oluacls_func(L, "make_preferred", _olua_fun_std_filesystem_path_make_preferred);
    oluacls_func(L, "native", _olua_fun_std_filesystem_path_native);
    oluacls_func(L, "new", _olua_fun_std_filesystem_path_new);
    oluacls_func(L, "parent_path", _olua_fun_std_filesystem_path_parent_path);
    oluacls_func(L, "posix_path", _olua_fun_std_filesystem_path_posix_path);
    oluacls_func(L, "relative_path", _olua_fun_std_filesystem_path_relative_path);
    oluacls_func(L, "remove_filename", _olua_fun_std_filesystem_path_remove_filename);
    oluacls_func(L, "replace_extension", _olua_fun_std_filesystem_path_replace_extension);
    oluacls_func(L, "replace_filename", _olua_fun_std_filesystem_path_replace_filename);
    oluacls_func(L, "root_directory", _olua_fun_std_filesystem_path_root_directory);
    oluacls_func(L, "root_name", _olua_fun_std_filesystem_path_root_name);
    oluacls_func(L, "root_path", _olua_fun_std_filesystem_path_root_path);
    oluacls_func(L, "stem", _olua_fun_std_filesystem_path_stem);
    oluacls_func(L, "string", _olua_fun_std_filesystem_path_string);
    oluacls_func(L, "swap", _olua_fun_std_filesystem_path_swap);
    oluacls_func(L, "u8string", _olua_fun_std_filesystem_path_u8string);
    oluacls_const(L, "preferred_separator", std::filesystem::path::preferred_separator);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_fs_path(lua_State *L)
{
    olua_require(L, ".olua.module.fs",  _olua_module_fs);
    if (!olua_getclass(L, "fs.path")) {
        luaL_error(L, "class not found: std::filesystem::path");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_std_filesystem_path_iterator___gc(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = (std::filesystem::path::iterator *)olua_toobj(L, 1, "fs.path.iterator");
        olua_postgc(L, self);
        olua_endinvoke(L);
        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::iterator::__gc(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_cls_fs_path_iterator(lua_State *L)
{
    oluacls_class<std::filesystem::path::iterator>(L, "fs.path.iterator");
    oluacls_func(L, "__gc", _olua_fun_std_filesystem_path_iterator___gc);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_fs_path_iterator(lua_State *L)
{
    olua_require(L, ".olua.module.fs",  _olua_module_fs);
    if (!olua_getclass(L, "fs.path.iterator")) {
        luaL_error(L, "class not found: std::filesystem::path::iterator");
    }
    return 1;
}
OLUA_END_DECLS

static int _olua_fun_std_filesystem_absolute$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static std::filesystem::path absolute(const std::filesystem::path &p)
        std::filesystem::path ret = std::filesystem::absolute(*arg1);
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::absolute(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_absolute$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static std::filesystem::path absolute(const std::filesystem::path &p, std::error_code &ec)
        std::filesystem::path ret = std::filesystem::absolute(*arg1, *arg2);
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::absolute(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_absolute(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static std::filesystem::path absolute(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_absolute$1(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static std::filesystem::path absolute(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_absolute$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::absolute' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_canonical$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static std::filesystem::path canonical(const std::filesystem::path &p)
        std::filesystem::path ret = std::filesystem::canonical(*arg1);
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::canonical(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_canonical$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static std::filesystem::path canonical(const std::filesystem::path &p, std::error_code &ec)
        std::filesystem::path ret = std::filesystem::canonical(*arg1, *arg2);
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::canonical(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_canonical(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static std::filesystem::path canonical(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_canonical$1(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static std::filesystem::path canonical(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_canonical$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::canonical' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_copy$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** from */
        std::filesystem::path arg1_fromstring;       /** from */
        std::filesystem::path *arg2;       /** to */
        std::filesystem::path arg2_fromstring;       /** to */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }

        // static void copy(const std::filesystem::path &from, const std::filesystem::path &to)
        std::filesystem::copy(*arg1, *arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::copy(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_copy$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** from */
        std::filesystem::path arg1_fromstring;       /** from */
        std::filesystem::path *arg2;       /** to */
        std::filesystem::path arg2_fromstring;       /** to */
        std::error_code *arg3 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }
        olua_check_object(L, 3, &arg3, "fs.error_code");

        // static void copy(const std::filesystem::path &from, const std::filesystem::path &to, std::error_code &ec)
        std::filesystem::copy(*arg1, *arg2, *arg3);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::copy(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_copy$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** from */
        std::filesystem::path arg1_fromstring;       /** from */
        std::filesystem::path *arg2;       /** to */
        std::filesystem::path arg2_fromstring;       /** to */
        std::filesystem::copy_options arg3 = (std::filesystem::copy_options)0;       /** opt */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }
        olua_check_enum(L, 3, &arg3);

        // static void copy(const std::filesystem::path &from, const std::filesystem::path &to, std::filesystem::copy_options opt)
        std::filesystem::copy(*arg1, *arg2, arg3);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::copy(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_copy$4(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** from */
        std::filesystem::path arg1_fromstring;       /** from */
        std::filesystem::path *arg2;       /** to */
        std::filesystem::path arg2_fromstring;       /** to */
        std::filesystem::copy_options arg3 = (std::filesystem::copy_options)0;       /** opt */
        std::error_code *arg4 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }
        olua_check_enum(L, 3, &arg3);
        olua_check_object(L, 4, &arg4, "fs.error_code");

        // static void copy(const std::filesystem::path &from, const std::filesystem::path &to, std::filesystem::copy_options opt, std::error_code &ec)
        std::filesystem::copy(*arg1, *arg2, arg3, *arg4);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::copy(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_copy(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2))) {
            // static void copy(const std::filesystem::path &from, const std::filesystem::path &to)
            return _olua_fun_std_filesystem_copy$1(L);
        // }
    }

    if (num_args == 3) {
        if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2)) && (olua_is_object(L, 3, "fs.error_code"))) {
            // static void copy(const std::filesystem::path &from, const std::filesystem::path &to, std::error_code &ec)
            return _olua_fun_std_filesystem_copy$2(L);
        }

        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2)) && (olua_is_enum(L, 3))) {
            // static void copy(const std::filesystem::path &from, const std::filesystem::path &to, std::filesystem::copy_options opt)
            return _olua_fun_std_filesystem_copy$3(L);
        // }
    }

    if (num_args == 4) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2)) && (olua_is_enum(L, 3)) && (olua_is_object(L, 4, "fs.error_code"))) {
            // static void copy(const std::filesystem::path &from, const std::filesystem::path &to, std::filesystem::copy_options opt, std::error_code &ec)
            return _olua_fun_std_filesystem_copy$4(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::copy' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_copy_file$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** from */
        std::filesystem::path arg1_fromstring;       /** from */
        std::filesystem::path *arg2;       /** to */
        std::filesystem::path arg2_fromstring;       /** to */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }

        // static bool copy_file(const std::filesystem::path &from, const std::filesystem::path &to)
        bool ret = std::filesystem::copy_file(*arg1, *arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::copy_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_copy_file$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** from */
        std::filesystem::path arg1_fromstring;       /** from */
        std::filesystem::path *arg2;       /** to */
        std::filesystem::path arg2_fromstring;       /** to */
        std::error_code *arg3 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }
        olua_check_object(L, 3, &arg3, "fs.error_code");

        // static bool copy_file(const std::filesystem::path &from, const std::filesystem::path &to, std::error_code &ec)
        bool ret = std::filesystem::copy_file(*arg1, *arg2, *arg3);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::copy_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_copy_file$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** from */
        std::filesystem::path arg1_fromstring;       /** from */
        std::filesystem::path *arg2;       /** to */
        std::filesystem::path arg2_fromstring;       /** to */
        std::filesystem::copy_options arg3 = (std::filesystem::copy_options)0;       /** opt */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }
        olua_check_enum(L, 3, &arg3);

        // static bool copy_file(const std::filesystem::path &from, const std::filesystem::path &to, std::filesystem::copy_options opt)
        bool ret = std::filesystem::copy_file(*arg1, *arg2, arg3);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::copy_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_copy_file$4(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** from */
        std::filesystem::path arg1_fromstring;       /** from */
        std::filesystem::path *arg2;       /** to */
        std::filesystem::path arg2_fromstring;       /** to */
        std::filesystem::copy_options arg3 = (std::filesystem::copy_options)0;       /** opt */
        std::error_code *arg4 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }
        olua_check_enum(L, 3, &arg3);
        olua_check_object(L, 4, &arg4, "fs.error_code");

        // static bool copy_file(const std::filesystem::path &from, const std::filesystem::path &to, std::filesystem::copy_options opt, std::error_code &ec)
        bool ret = std::filesystem::copy_file(*arg1, *arg2, arg3, *arg4);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::copy_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_copy_file(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2))) {
            // static bool copy_file(const std::filesystem::path &from, const std::filesystem::path &to)
            return _olua_fun_std_filesystem_copy_file$1(L);
        // }
    }

    if (num_args == 3) {
        if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2)) && (olua_is_object(L, 3, "fs.error_code"))) {
            // static bool copy_file(const std::filesystem::path &from, const std::filesystem::path &to, std::error_code &ec)
            return _olua_fun_std_filesystem_copy_file$2(L);
        }

        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2)) && (olua_is_enum(L, 3))) {
            // static bool copy_file(const std::filesystem::path &from, const std::filesystem::path &to, std::filesystem::copy_options opt)
            return _olua_fun_std_filesystem_copy_file$3(L);
        // }
    }

    if (num_args == 4) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2)) && (olua_is_enum(L, 3)) && (olua_is_object(L, 4, "fs.error_code"))) {
            // static bool copy_file(const std::filesystem::path &from, const std::filesystem::path &to, std::filesystem::copy_options opt, std::error_code &ec)
            return _olua_fun_std_filesystem_copy_file$4(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::copy_file' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_copy_symlink$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** existing */
        std::filesystem::path arg1_fromstring;       /** existing */
        std::filesystem::path *arg2;       /** new */
        std::filesystem::path arg2_fromstring;       /** new */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }

        // static void copy_symlink(const std::filesystem::path &existing, const std::filesystem::path &new)
        std::filesystem::copy_symlink(*arg1, *arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::copy_symlink(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_copy_symlink$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** ext */
        std::filesystem::path arg1_fromstring;       /** ext */
        std::filesystem::path *arg2;       /** new */
        std::filesystem::path arg2_fromstring;       /** new */
        std::error_code *arg3 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }
        olua_check_object(L, 3, &arg3, "fs.error_code");

        // static void copy_symlink(const std::filesystem::path &ext, const std::filesystem::path &new, std::error_code &ec)
        std::filesystem::copy_symlink(*arg1, *arg2, *arg3);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::copy_symlink(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_copy_symlink(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2))) {
            // static void copy_symlink(const std::filesystem::path &existing, const std::filesystem::path &new)
            return _olua_fun_std_filesystem_copy_symlink$1(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2)) && (olua_is_object(L, 3, "fs.error_code"))) {
            // static void copy_symlink(const std::filesystem::path &ext, const std::filesystem::path &new, std::error_code &ec)
            return _olua_fun_std_filesystem_copy_symlink$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::copy_symlink' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_create_directories$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static bool create_directories(const std::filesystem::path &p)
        bool ret = std::filesystem::create_directories(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::create_directories(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_create_directories$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static bool create_directories(const std::filesystem::path &p, std::error_code &ec)
        bool ret = std::filesystem::create_directories(*arg1, *arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::create_directories(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_create_directories(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static bool create_directories(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_create_directories$1(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static bool create_directories(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_create_directories$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::create_directories' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_create_directory$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static bool create_directory(const std::filesystem::path &p)
        bool ret = std::filesystem::create_directory(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::create_directory(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_create_directory$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static bool create_directory(const std::filesystem::path &p, std::error_code &ec)
        bool ret = std::filesystem::create_directory(*arg1, *arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::create_directory(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_create_directory$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::filesystem::path *arg2;       /** attrs */
        std::filesystem::path arg2_fromstring;       /** attrs */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }

        // static bool create_directory(const std::filesystem::path &p, const std::filesystem::path &attrs)
        bool ret = std::filesystem::create_directory(*arg1, *arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::create_directory(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_create_directory$4(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::filesystem::path *arg2;       /** attrs */
        std::filesystem::path arg2_fromstring;       /** attrs */
        std::error_code *arg3 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }
        olua_check_object(L, 3, &arg3, "fs.error_code");

        // static bool create_directory(const std::filesystem::path &p, const std::filesystem::path &attrs, std::error_code &ec)
        bool ret = std::filesystem::create_directory(*arg1, *arg2, *arg3);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::create_directory(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_create_directory(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static bool create_directory(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_create_directory$1(L);
        // }
    }

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static bool create_directory(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_create_directory$2(L);
        }

        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2))) {
            // static bool create_directory(const std::filesystem::path &p, const std::filesystem::path &attrs)
            return _olua_fun_std_filesystem_create_directory$3(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2)) && (olua_is_object(L, 3, "fs.error_code"))) {
            // static bool create_directory(const std::filesystem::path &p, const std::filesystem::path &attrs, std::error_code &ec)
            return _olua_fun_std_filesystem_create_directory$4(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::create_directory' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_create_directory_symlink$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** to */
        std::filesystem::path arg1_fromstring;       /** to */
        std::filesystem::path *arg2;       /** new */
        std::filesystem::path arg2_fromstring;       /** new */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }

        // static void create_directory_symlink(const std::filesystem::path &to, const std::filesystem::path &new)
        std::filesystem::create_directory_symlink(*arg1, *arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::create_directory_symlink(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_create_directory_symlink$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** to */
        std::filesystem::path arg1_fromstring;       /** to */
        std::filesystem::path *arg2;       /** new */
        std::filesystem::path arg2_fromstring;       /** new */
        std::error_code *arg3 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }
        olua_check_object(L, 3, &arg3, "fs.error_code");

        // static void create_directory_symlink(const std::filesystem::path &to, const std::filesystem::path &new, std::error_code &ec)
        std::filesystem::create_directory_symlink(*arg1, *arg2, *arg3);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::create_directory_symlink(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_create_directory_symlink(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2))) {
            // static void create_directory_symlink(const std::filesystem::path &to, const std::filesystem::path &new)
            return _olua_fun_std_filesystem_create_directory_symlink$1(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2)) && (olua_is_object(L, 3, "fs.error_code"))) {
            // static void create_directory_symlink(const std::filesystem::path &to, const std::filesystem::path &new, std::error_code &ec)
            return _olua_fun_std_filesystem_create_directory_symlink$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::create_directory_symlink' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_create_hard_link$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** to */
        std::filesystem::path arg1_fromstring;       /** to */
        std::filesystem::path *arg2;       /** new */
        std::filesystem::path arg2_fromstring;       /** new */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }

        // static void create_hard_link(const std::filesystem::path &to, const std::filesystem::path &new)
        std::filesystem::create_hard_link(*arg1, *arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::create_hard_link(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_create_hard_link$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** to */
        std::filesystem::path arg1_fromstring;       /** to */
        std::filesystem::path *arg2;       /** new */
        std::filesystem::path arg2_fromstring;       /** new */
        std::error_code *arg3 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }
        olua_check_object(L, 3, &arg3, "fs.error_code");

        // static void create_hard_link(const std::filesystem::path &to, const std::filesystem::path &new, std::error_code &ec)
        std::filesystem::create_hard_link(*arg1, *arg2, *arg3);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::create_hard_link(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_create_hard_link(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2))) {
            // static void create_hard_link(const std::filesystem::path &to, const std::filesystem::path &new)
            return _olua_fun_std_filesystem_create_hard_link$1(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2)) && (olua_is_object(L, 3, "fs.error_code"))) {
            // static void create_hard_link(const std::filesystem::path &to, const std::filesystem::path &new, std::error_code &ec)
            return _olua_fun_std_filesystem_create_hard_link$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::create_hard_link' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_create_symlink$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** to */
        std::filesystem::path arg1_fromstring;       /** to */
        std::filesystem::path *arg2;       /** new */
        std::filesystem::path arg2_fromstring;       /** new */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }

        // static void create_symlink(const std::filesystem::path &to, const std::filesystem::path &new)
        std::filesystem::create_symlink(*arg1, *arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::create_symlink(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_create_symlink$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** to */
        std::filesystem::path arg1_fromstring;       /** to */
        std::filesystem::path *arg2;       /** new */
        std::filesystem::path arg2_fromstring;       /** new */
        std::error_code *arg3 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }
        olua_check_object(L, 3, &arg3, "fs.error_code");

        // static void create_symlink(const std::filesystem::path &to, const std::filesystem::path &new, std::error_code &ec)
        std::filesystem::create_symlink(*arg1, *arg2, *arg3);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::create_symlink(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_create_symlink(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2))) {
            // static void create_symlink(const std::filesystem::path &to, const std::filesystem::path &new)
            return _olua_fun_std_filesystem_create_symlink$1(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2)) && (olua_is_object(L, 3, "fs.error_code"))) {
            // static void create_symlink(const std::filesystem::path &to, const std::filesystem::path &new, std::error_code &ec)
            return _olua_fun_std_filesystem_create_symlink$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::create_symlink' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_current_path$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // static std::filesystem::path current_path()
        std::filesystem::path ret = std::filesystem::current_path();
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::current_path(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_current_path$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::error_code *arg1 = nullptr;       /** ec */

        olua_check_object(L, 1, &arg1, "fs.error_code");

        // static std::filesystem::path current_path(std::error_code &ec)
        std::filesystem::path ret = std::filesystem::current_path(*arg1);
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::current_path(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_current_path$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static void current_path(const std::filesystem::path &p)
        std::filesystem::current_path(*arg1);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::current_path(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_current_path$4(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static void current_path(const std::filesystem::path &p, std::error_code &ec)
        std::filesystem::current_path(*arg1, *arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::current_path(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_current_path(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // static std::filesystem::path current_path()
        return _olua_fun_std_filesystem_current_path$1(L);
    }

    if (num_args == 1) {
        if ((olua_is_object(L, 1, "fs.error_code"))) {
            // static std::filesystem::path current_path(std::error_code &ec)
            return _olua_fun_std_filesystem_current_path$2(L);
        }

        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static void current_path(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_current_path$3(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static void current_path(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_current_path$4(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::current_path' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_equivalent$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p1 */
        std::filesystem::path arg1_fromstring;       /** p1 */
        std::filesystem::path *arg2;       /** p2 */
        std::filesystem::path arg2_fromstring;       /** p2 */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }

        // static bool equivalent(const std::filesystem::path &p1, const std::filesystem::path &p2)
        bool ret = std::filesystem::equivalent(*arg1, *arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::equivalent(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_equivalent$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p1 */
        std::filesystem::path arg1_fromstring;       /** p1 */
        std::filesystem::path *arg2;       /** p2 */
        std::filesystem::path arg2_fromstring;       /** p2 */
        std::error_code *arg3 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }
        olua_check_object(L, 3, &arg3, "fs.error_code");

        // static bool equivalent(const std::filesystem::path &p1, const std::filesystem::path &p2, std::error_code &ec)
        bool ret = std::filesystem::equivalent(*arg1, *arg2, *arg3);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::equivalent(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_equivalent(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2))) {
            // static bool equivalent(const std::filesystem::path &p1, const std::filesystem::path &p2)
            return _olua_fun_std_filesystem_equivalent$1(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2)) && (olua_is_object(L, 3, "fs.error_code"))) {
            // static bool equivalent(const std::filesystem::path &p1, const std::filesystem::path &p2, std::error_code &ec)
            return _olua_fun_std_filesystem_equivalent$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::equivalent' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_exists$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::file_status *arg1;       /** s */

        olua_check_object(L, 1, &arg1, "fs.file_status");

        // static bool exists(std::filesystem::file_status s)
        bool ret = std::filesystem::exists(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::exists(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_exists$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static bool exists(const std::filesystem::path &p)
        bool ret = std::filesystem::exists(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::exists(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_exists$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static bool exists(const std::filesystem::path &p, std::error_code &ec)
        bool ret = std::filesystem::exists(*arg1, *arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::exists(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_exists(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        if ((olua_is_object(L, 1, "fs.file_status"))) {
            // static bool exists(std::filesystem::file_status s)
            return _olua_fun_std_filesystem_exists$1(L);
        }

        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static bool exists(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_exists$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static bool exists(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_exists$3(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::exists' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_file_size$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static uintmax_t file_size(const std::filesystem::path &p)
        uintmax_t ret = std::filesystem::file_size(*arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::file_size(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_file_size$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static uintmax_t file_size(const std::filesystem::path &p, std::error_code &ec)
        uintmax_t ret = std::filesystem::file_size(*arg1, *arg2);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::file_size(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_file_size(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static uintmax_t file_size(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_file_size$1(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static uintmax_t file_size(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_file_size$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::file_size' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_hard_link_count$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static uintmax_t hard_link_count(const std::filesystem::path &p)
        uintmax_t ret = std::filesystem::hard_link_count(*arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::hard_link_count(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_hard_link_count$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static uintmax_t hard_link_count(const std::filesystem::path &p, std::error_code &ec)
        uintmax_t ret = std::filesystem::hard_link_count(*arg1, *arg2);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::hard_link_count(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_hard_link_count(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static uintmax_t hard_link_count(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_hard_link_count$1(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static uintmax_t hard_link_count(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_hard_link_count$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::hard_link_count' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_hash_value(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static size_t hash_value(const std::filesystem::path &p)
        size_t ret = std::filesystem::hash_value(*arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::hash_value(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_block_file$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::file_status *arg1;       /** s */

        olua_check_object(L, 1, &arg1, "fs.file_status");

        // static bool is_block_file(std::filesystem::file_status s)
        bool ret = std::filesystem::is_block_file(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::is_block_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_block_file$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static bool is_block_file(const std::filesystem::path &p)
        bool ret = std::filesystem::is_block_file(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::is_block_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_block_file$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static bool is_block_file(const std::filesystem::path &p, std::error_code &ec)
        bool ret = std::filesystem::is_block_file(*arg1, *arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::is_block_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_block_file(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        if ((olua_is_object(L, 1, "fs.file_status"))) {
            // static bool is_block_file(std::filesystem::file_status s)
            return _olua_fun_std_filesystem_is_block_file$1(L);
        }

        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static bool is_block_file(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_is_block_file$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static bool is_block_file(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_is_block_file$3(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::is_block_file' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_is_character_file$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::file_status *arg1;       /** s */

        olua_check_object(L, 1, &arg1, "fs.file_status");

        // static bool is_character_file(std::filesystem::file_status s)
        bool ret = std::filesystem::is_character_file(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::is_character_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_character_file$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static bool is_character_file(const std::filesystem::path &p)
        bool ret = std::filesystem::is_character_file(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::is_character_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_character_file$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static bool is_character_file(const std::filesystem::path &p, std::error_code &ec)
        bool ret = std::filesystem::is_character_file(*arg1, *arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::is_character_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_character_file(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        if ((olua_is_object(L, 1, "fs.file_status"))) {
            // static bool is_character_file(std::filesystem::file_status s)
            return _olua_fun_std_filesystem_is_character_file$1(L);
        }

        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static bool is_character_file(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_is_character_file$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static bool is_character_file(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_is_character_file$3(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::is_character_file' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_is_directory$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::file_status *arg1;       /** s */

        olua_check_object(L, 1, &arg1, "fs.file_status");

        // static bool is_directory(std::filesystem::file_status s)
        bool ret = std::filesystem::is_directory(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::is_directory(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_directory$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static bool is_directory(const std::filesystem::path &p)
        bool ret = std::filesystem::is_directory(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::is_directory(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_directory$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static bool is_directory(const std::filesystem::path &p, std::error_code &ec)
        bool ret = std::filesystem::is_directory(*arg1, *arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::is_directory(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_directory(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        if ((olua_is_object(L, 1, "fs.file_status"))) {
            // static bool is_directory(std::filesystem::file_status s)
            return _olua_fun_std_filesystem_is_directory$1(L);
        }

        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static bool is_directory(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_is_directory$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static bool is_directory(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_is_directory$3(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::is_directory' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_is_empty$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static bool is_empty(const std::filesystem::path &p)
        bool ret = std::filesystem::is_empty(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::is_empty(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_empty$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static bool is_empty(const std::filesystem::path &p, std::error_code &ec)
        bool ret = std::filesystem::is_empty(*arg1, *arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::is_empty(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_empty(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static bool is_empty(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_is_empty$1(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static bool is_empty(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_is_empty$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::is_empty' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_is_fifo$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::file_status *arg1;       /** s */

        olua_check_object(L, 1, &arg1, "fs.file_status");

        // static bool is_fifo(std::filesystem::file_status s)
        bool ret = std::filesystem::is_fifo(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::is_fifo(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_fifo$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static bool is_fifo(const std::filesystem::path &p)
        bool ret = std::filesystem::is_fifo(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::is_fifo(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_fifo$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static bool is_fifo(const std::filesystem::path &p, std::error_code &ec)
        bool ret = std::filesystem::is_fifo(*arg1, *arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::is_fifo(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_fifo(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        if ((olua_is_object(L, 1, "fs.file_status"))) {
            // static bool is_fifo(std::filesystem::file_status s)
            return _olua_fun_std_filesystem_is_fifo$1(L);
        }

        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static bool is_fifo(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_is_fifo$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static bool is_fifo(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_is_fifo$3(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::is_fifo' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_is_other$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::file_status *arg1;       /** s */

        olua_check_object(L, 1, &arg1, "fs.file_status");

        // static bool is_other(std::filesystem::file_status s)
        bool ret = std::filesystem::is_other(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::is_other(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_other$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static bool is_other(const std::filesystem::path &p)
        bool ret = std::filesystem::is_other(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::is_other(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_other$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static bool is_other(const std::filesystem::path &p, std::error_code &ec)
        bool ret = std::filesystem::is_other(*arg1, *arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::is_other(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_other(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        if ((olua_is_object(L, 1, "fs.file_status"))) {
            // static bool is_other(std::filesystem::file_status s)
            return _olua_fun_std_filesystem_is_other$1(L);
        }

        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static bool is_other(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_is_other$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static bool is_other(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_is_other$3(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::is_other' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_is_regular_file$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::file_status *arg1;       /** s */

        olua_check_object(L, 1, &arg1, "fs.file_status");

        // static bool is_regular_file(std::filesystem::file_status s)
        bool ret = std::filesystem::is_regular_file(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::is_regular_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_regular_file$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static bool is_regular_file(const std::filesystem::path &p)
        bool ret = std::filesystem::is_regular_file(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::is_regular_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_regular_file$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static bool is_regular_file(const std::filesystem::path &p, std::error_code &ec)
        bool ret = std::filesystem::is_regular_file(*arg1, *arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::is_regular_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_regular_file(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        if ((olua_is_object(L, 1, "fs.file_status"))) {
            // static bool is_regular_file(std::filesystem::file_status s)
            return _olua_fun_std_filesystem_is_regular_file$1(L);
        }

        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static bool is_regular_file(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_is_regular_file$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static bool is_regular_file(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_is_regular_file$3(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::is_regular_file' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_is_socket$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::file_status *arg1;       /** s */

        olua_check_object(L, 1, &arg1, "fs.file_status");

        // static bool is_socket(std::filesystem::file_status s)
        bool ret = std::filesystem::is_socket(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::is_socket(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_socket$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static bool is_socket(const std::filesystem::path &p)
        bool ret = std::filesystem::is_socket(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::is_socket(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_socket$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static bool is_socket(const std::filesystem::path &p, std::error_code &ec)
        bool ret = std::filesystem::is_socket(*arg1, *arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::is_socket(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_socket(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        if ((olua_is_object(L, 1, "fs.file_status"))) {
            // static bool is_socket(std::filesystem::file_status s)
            return _olua_fun_std_filesystem_is_socket$1(L);
        }

        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static bool is_socket(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_is_socket$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static bool is_socket(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_is_socket$3(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::is_socket' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_is_symlink$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::file_status *arg1;       /** s */

        olua_check_object(L, 1, &arg1, "fs.file_status");

        // static bool is_symlink(std::filesystem::file_status s)
        bool ret = std::filesystem::is_symlink(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::is_symlink(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_symlink$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static bool is_symlink(const std::filesystem::path &p)
        bool ret = std::filesystem::is_symlink(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::is_symlink(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_symlink$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static bool is_symlink(const std::filesystem::path &p, std::error_code &ec)
        bool ret = std::filesystem::is_symlink(*arg1, *arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::is_symlink(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_is_symlink(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        if ((olua_is_object(L, 1, "fs.file_status"))) {
            // static bool is_symlink(std::filesystem::file_status s)
            return _olua_fun_std_filesystem_is_symlink$1(L);
        }

        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static bool is_symlink(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_is_symlink$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static bool is_symlink(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_is_symlink$3(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::is_symlink' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_last_write_time$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static std::filesystem::file_time_type last_write_time(const std::filesystem::path &p)
        std::filesystem::file_time_type ret = std::filesystem::last_write_time(*arg1);
        int num_ret = olua_copy_object(L, ret, "fs.file_time_type");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::last_write_time(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_last_write_time$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static std::filesystem::file_time_type last_write_time(const std::filesystem::path &p, std::error_code &ec)
        std::filesystem::file_time_type ret = std::filesystem::last_write_time(*arg1, *arg2);
        int num_ret = olua_copy_object(L, ret, "fs.file_time_type");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::last_write_time(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_last_write_time$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::filesystem::file_time_type *arg2;       /** t */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.file_time_type");

        // static void last_write_time(const std::filesystem::path &p, std::filesystem::file_time_type t)
        std::filesystem::last_write_time(*arg1, *arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::last_write_time(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_last_write_time$4(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::filesystem::file_time_type *arg2;       /** t */
        std::error_code *arg3 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.file_time_type");
        olua_check_object(L, 3, &arg3, "fs.error_code");

        // static void last_write_time(const std::filesystem::path &p, std::filesystem::file_time_type t, std::error_code &ec)
        std::filesystem::last_write_time(*arg1, *arg2, *arg3);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::last_write_time(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_last_write_time(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static std::filesystem::file_time_type last_write_time(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_last_write_time$1(L);
        // }
    }

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static std::filesystem::file_time_type last_write_time(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_last_write_time$2(L);
        }

        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.file_time_type"))) {
            // static void last_write_time(const std::filesystem::path &p, std::filesystem::file_time_type t)
            return _olua_fun_std_filesystem_last_write_time$3(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.file_time_type")) && (olua_is_object(L, 3, "fs.error_code"))) {
            // static void last_write_time(const std::filesystem::path &p, std::filesystem::file_time_type t, std::error_code &ec)
            return _olua_fun_std_filesystem_last_write_time$4(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::last_write_time' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_ls$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** dir */
        std::filesystem::path arg1_fromstring;       /** dir */
        bool arg2 = false;       /** recursive */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_bool(L, 2, &arg2);

        // @extend(fs::fs_extend) static olua_Return ls(lua_State *L, std::filesystem::path dir, @optional bool recursive)
        olua_Return ret = fs::fs_extend::ls(L, *arg1, arg2);

        olua_endinvoke(L);

        return (int)ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::ls(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_ls$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** dir */
        std::filesystem::path arg1_fromstring;       /** dir */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // @extend(fs::fs_extend) static olua_Return ls(lua_State *L, std::filesystem::path dir)
        olua_Return ret = fs::fs_extend::ls(L, *arg1);

        olua_endinvoke(L);

        return (int)ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::ls(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_ls(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // @extend(fs::fs_extend) static olua_Return ls(lua_State *L, std::filesystem::path dir)
            return _olua_fun_std_filesystem_ls$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_bool(L, 2))) {
            // @extend(fs::fs_extend) static olua_Return ls(lua_State *L, std::filesystem::path dir, @optional bool recursive)
            return _olua_fun_std_filesystem_ls$1(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::ls' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_path(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path::string_type arg1;       /** s */

        olua_check_string(L, 1, &arg1);

        // @extend(fs::fs_extend) static std::filesystem::path path(const std::filesystem::path::string_type &s)
        std::filesystem::path ret = fs::fs_extend::path(arg1);
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_permissions$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::filesystem::perms arg2 = (std::filesystem::perms)0;       /** prms */
        std::filesystem::perm_options arg3 = (std::filesystem::perm_options)0;       /** opts */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_enum(L, 2, &arg2);
        olua_check_enum(L, 3, &arg3);

        // static void permissions(const std::filesystem::path &p, std::filesystem::perms prms, @optional std::filesystem::perm_options opts)
        std::filesystem::permissions(*arg1, arg2, arg3);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::permissions(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_permissions$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::filesystem::perms arg2 = (std::filesystem::perms)0;       /** prms */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_enum(L, 2, &arg2);

        // static void permissions(const std::filesystem::path &p, std::filesystem::perms prms)
        std::filesystem::permissions(*arg1, arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::permissions(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_permissions$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::filesystem::perms arg2 = (std::filesystem::perms)0;       /** prms */
        std::error_code *arg3 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_enum(L, 2, &arg2);
        olua_check_object(L, 3, &arg3, "fs.error_code");

        // static void permissions(const std::filesystem::path &p, std::filesystem::perms prms, std::error_code &ec)
        std::filesystem::permissions(*arg1, arg2, *arg3);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::permissions(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_permissions$4(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::filesystem::perms arg2 = (std::filesystem::perms)0;       /** prms */
        std::filesystem::perm_options arg3 = (std::filesystem::perm_options)0;       /** opts */
        std::error_code *arg4 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_enum(L, 2, &arg2);
        olua_check_enum(L, 3, &arg3);
        olua_check_object(L, 4, &arg4, "fs.error_code");

        // static void permissions(const std::filesystem::path &p, std::filesystem::perms prms, std::filesystem::perm_options opts, std::error_code &ec)
        std::filesystem::permissions(*arg1, arg2, arg3, *arg4);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::permissions(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_permissions(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_enum(L, 2))) {
            // static void permissions(const std::filesystem::path &p, std::filesystem::perms prms)
            return _olua_fun_std_filesystem_permissions$2(L);
        // }
    }

    if (num_args == 3) {
        if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_enum(L, 2)) && (olua_is_enum(L, 3))) {
            // static void permissions(const std::filesystem::path &p, std::filesystem::perms prms, @optional std::filesystem::perm_options opts)
            return _olua_fun_std_filesystem_permissions$1(L);
        }

        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_enum(L, 2)) && (olua_is_object(L, 3, "fs.error_code"))) {
            // static void permissions(const std::filesystem::path &p, std::filesystem::perms prms, std::error_code &ec)
            return _olua_fun_std_filesystem_permissions$3(L);
        // }
    }

    if (num_args == 4) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_enum(L, 2)) && (olua_is_enum(L, 3)) && (olua_is_object(L, 4, "fs.error_code"))) {
            // static void permissions(const std::filesystem::path &p, std::filesystem::perms prms, std::filesystem::perm_options opts, std::error_code &ec)
            return _olua_fun_std_filesystem_permissions$4(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::permissions' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_proximate$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::filesystem::path *arg2;       /** base */
        std::filesystem::path arg2_fromstring;       /** base */
        std::error_code *arg3 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }
        olua_check_object(L, 3, &arg3, "fs.error_code");

        // static std::filesystem::path proximate(const std::filesystem::path &p, const std::filesystem::path &base, std::error_code &ec)
        std::filesystem::path ret = std::filesystem::proximate(*arg1, *arg2, *arg3);
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::proximate(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_proximate$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static std::filesystem::path proximate(const std::filesystem::path &p, std::error_code &ec)
        std::filesystem::path ret = std::filesystem::proximate(*arg1, *arg2);
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::proximate(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_proximate$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::filesystem::path *arg2;       /** base */
        std::filesystem::path arg2_fromstring;       /** base */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }

        // static std::filesystem::path proximate(const std::filesystem::path &p, @optional const std::filesystem::path &base)
        std::filesystem::path ret = std::filesystem::proximate(*arg1, *arg2);
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::proximate(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_proximate$4(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static std::filesystem::path proximate(const std::filesystem::path &p)
        std::filesystem::path ret = std::filesystem::proximate(*arg1);
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::proximate(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_proximate(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static std::filesystem::path proximate(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_proximate$4(L);
        // }
    }

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static std::filesystem::path proximate(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_proximate$2(L);
        }

        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2))) {
            // static std::filesystem::path proximate(const std::filesystem::path &p, @optional const std::filesystem::path &base)
            return _olua_fun_std_filesystem_proximate$3(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2)) && (olua_is_object(L, 3, "fs.error_code"))) {
            // static std::filesystem::path proximate(const std::filesystem::path &p, const std::filesystem::path &base, std::error_code &ec)
            return _olua_fun_std_filesystem_proximate$1(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::proximate' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_read_symlink$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static std::filesystem::path read_symlink(const std::filesystem::path &p)
        std::filesystem::path ret = std::filesystem::read_symlink(*arg1);
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::read_symlink(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_read_symlink$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static std::filesystem::path read_symlink(const std::filesystem::path &p, std::error_code &ec)
        std::filesystem::path ret = std::filesystem::read_symlink(*arg1, *arg2);
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::read_symlink(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_read_symlink(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static std::filesystem::path read_symlink(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_read_symlink$1(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static std::filesystem::path read_symlink(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_read_symlink$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::read_symlink' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_relative$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::filesystem::path *arg2;       /** base */
        std::filesystem::path arg2_fromstring;       /** base */
        std::error_code *arg3 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }
        olua_check_object(L, 3, &arg3, "fs.error_code");

        // static std::filesystem::path relative(const std::filesystem::path &p, const std::filesystem::path &base, std::error_code &ec)
        std::filesystem::path ret = std::filesystem::relative(*arg1, *arg2, *arg3);
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::relative(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_relative$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static std::filesystem::path relative(const std::filesystem::path &p, std::error_code &ec)
        std::filesystem::path ret = std::filesystem::relative(*arg1, *arg2);
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::relative(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_relative$3(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::filesystem::path *arg2;       /** base */
        std::filesystem::path arg2_fromstring;       /** base */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }

        // static std::filesystem::path relative(const std::filesystem::path &p, @optional const std::filesystem::path &base)
        std::filesystem::path ret = std::filesystem::relative(*arg1, *arg2);
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::relative(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_relative$4(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static std::filesystem::path relative(const std::filesystem::path &p)
        std::filesystem::path ret = std::filesystem::relative(*arg1);
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::relative(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_relative(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static std::filesystem::path relative(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_relative$4(L);
        // }
    }

    if (num_args == 2) {
        if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static std::filesystem::path relative(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_relative$2(L);
        }

        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2))) {
            // static std::filesystem::path relative(const std::filesystem::path &p, @optional const std::filesystem::path &base)
            return _olua_fun_std_filesystem_relative$3(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2)) && (olua_is_object(L, 3, "fs.error_code"))) {
            // static std::filesystem::path relative(const std::filesystem::path &p, const std::filesystem::path &base, std::error_code &ec)
            return _olua_fun_std_filesystem_relative$1(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::relative' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_remove$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static bool remove(const std::filesystem::path &p)
        bool ret = std::filesystem::remove(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::remove(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_remove$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static bool remove(const std::filesystem::path &p, std::error_code &ec)
        bool ret = std::filesystem::remove(*arg1, *arg2);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::remove(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_remove(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static bool remove(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_remove$1(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static bool remove(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_remove$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::remove' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_remove_all$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static uintmax_t remove_all(const std::filesystem::path &p)
        uintmax_t ret = std::filesystem::remove_all(*arg1);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::remove_all(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_remove_all$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static uintmax_t remove_all(const std::filesystem::path &p, std::error_code &ec)
        uintmax_t ret = std::filesystem::remove_all(*arg1, *arg2);
        int num_ret = olua_push_integer(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::remove_all(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_remove_all(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static uintmax_t remove_all(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_remove_all$1(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static uintmax_t remove_all(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_remove_all$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::remove_all' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_rename$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** from */
        std::filesystem::path arg1_fromstring;       /** from */
        std::filesystem::path *arg2;       /** to */
        std::filesystem::path arg2_fromstring;       /** to */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }

        // static void rename(const std::filesystem::path &from, const std::filesystem::path &to)
        std::filesystem::rename(*arg1, *arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::rename(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_rename$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** from */
        std::filesystem::path arg1_fromstring;       /** from */
        std::filesystem::path *arg2;       /** to */
        std::filesystem::path arg2_fromstring;       /** to */
        std::error_code *arg3 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        if (olua_isstring(L, 2)) {
            olua_check_string(L, 2, &arg2_fromstring);
            arg2 = &arg2_fromstring;
        } else {
            olua_check_object(L, 2, &arg2, "fs.path");
        }
        olua_check_object(L, 3, &arg3, "fs.error_code");

        // static void rename(const std::filesystem::path &from, const std::filesystem::path &to, std::error_code &ec)
        std::filesystem::rename(*arg1, *arg2, *arg3);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::rename(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_rename(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2))) {
            // static void rename(const std::filesystem::path &from, const std::filesystem::path &to)
            return _olua_fun_std_filesystem_rename$1(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.path") || olua_is_string(L, 2)) && (olua_is_object(L, 3, "fs.error_code"))) {
            // static void rename(const std::filesystem::path &from, const std::filesystem::path &to, std::error_code &ec)
            return _olua_fun_std_filesystem_rename$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::rename' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_resize_file$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        uintmax_t arg2 = 0;       /** ns */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_integer(L, 2, &arg2);

        // static void resize_file(const std::filesystem::path &p, uintmax_t ns)
        std::filesystem::resize_file(*arg1, arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::resize_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_resize_file$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        uintmax_t arg2 = 0;       /** ns */
        std::error_code *arg3 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_integer(L, 2, &arg2);
        olua_check_object(L, 3, &arg3, "fs.error_code");

        // static void resize_file(const std::filesystem::path &p, uintmax_t ns, std::error_code &ec)
        std::filesystem::resize_file(*arg1, arg2, *arg3);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::resize_file(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_resize_file(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_integer(L, 2))) {
            // static void resize_file(const std::filesystem::path &p, uintmax_t ns)
            return _olua_fun_std_filesystem_resize_file$1(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_integer(L, 2)) && (olua_is_object(L, 3, "fs.error_code"))) {
            // static void resize_file(const std::filesystem::path &p, uintmax_t ns, std::error_code &ec)
            return _olua_fun_std_filesystem_resize_file$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::resize_file' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_space$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static std::filesystem::space_info space(const std::filesystem::path &p)
        std::filesystem::space_info ret = std::filesystem::space(*arg1);
        int num_ret = olua_copy_object(L, ret, "fs.space_info");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::space(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_space$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static std::filesystem::space_info space(const std::filesystem::path &p, std::error_code &ec)
        std::filesystem::space_info ret = std::filesystem::space(*arg1, *arg2);
        int num_ret = olua_copy_object(L, ret, "fs.space_info");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::space(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_space(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static std::filesystem::space_info space(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_space$1(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static std::filesystem::space_info space(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_space$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::space' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_status$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static std::filesystem::file_status status(const std::filesystem::path &p)
        std::filesystem::file_status ret = std::filesystem::status(*arg1);
        int num_ret = olua_copy_object(L, ret, "fs.file_status");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::status(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_status$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static std::filesystem::file_status status(const std::filesystem::path &p, std::error_code &ec)
        std::filesystem::file_status ret = std::filesystem::status(*arg1, *arg2);
        int num_ret = olua_copy_object(L, ret, "fs.file_status");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::status(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_status(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static std::filesystem::file_status status(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_status$1(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static std::filesystem::file_status status(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_status$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::status' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_status_known(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::file_status *arg1;       /** s */

        olua_check_object(L, 1, &arg1, "fs.file_status");

        // static bool status_known(std::filesystem::file_status s)
        bool ret = std::filesystem::status_known(*arg1);
        int num_ret = olua_push_bool(L, ret);

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::status_known(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_swap(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1 = nullptr;       /** lhs */
        std::filesystem::path *arg2 = nullptr;       /** rhs */

        olua_check_object(L, 1, &arg1, "fs.path");
        olua_check_object(L, 2, &arg2, "fs.path");

        // static void swap(std::filesystem::path &lhs, std::filesystem::path &rhs)
        std::filesystem::swap(*arg1, *arg2);

        olua_endinvoke(L);

        return 0;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::swap(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_symlink_status$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static std::filesystem::file_status symlink_status(const std::filesystem::path &p)
        std::filesystem::file_status ret = std::filesystem::symlink_status(*arg1);
        int num_ret = olua_copy_object(L, ret, "fs.file_status");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::symlink_status(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_symlink_status$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static std::filesystem::file_status symlink_status(const std::filesystem::path &p, std::error_code &ec)
        std::filesystem::file_status ret = std::filesystem::symlink_status(*arg1, *arg2);
        int num_ret = olua_copy_object(L, ret, "fs.file_status");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::symlink_status(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_symlink_status(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static std::filesystem::file_status symlink_status(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_symlink_status$1(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static std::filesystem::file_status symlink_status(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_symlink_status$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::symlink_status' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_temp_directory_path$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        // static std::filesystem::path temp_directory_path()
        std::filesystem::path ret = std::filesystem::temp_directory_path();
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::temp_directory_path(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_temp_directory_path$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::error_code *arg1 = nullptr;       /** ec */

        olua_check_object(L, 1, &arg1, "fs.error_code");

        // static std::filesystem::path temp_directory_path(std::error_code &ec)
        std::filesystem::path ret = std::filesystem::temp_directory_path(*arg1);
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::temp_directory_path(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_temp_directory_path(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // static std::filesystem::path temp_directory_path()
        return _olua_fun_std_filesystem_temp_directory_path$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "fs.error_code"))) {
            // static std::filesystem::path temp_directory_path(std::error_code &ec)
            return _olua_fun_std_filesystem_temp_directory_path$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::temp_directory_path' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_fun_std_filesystem_weakly_canonical$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }

        // static std::filesystem::path weakly_canonical(const std::filesystem::path &p)
        std::filesystem::path ret = std::filesystem::weakly_canonical(*arg1);
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::weakly_canonical(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_weakly_canonical$2(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** p */
        std::filesystem::path arg1_fromstring;       /** p */
        std::error_code *arg2 = nullptr;       /** ec */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_fromstring);
            arg1 = &arg1_fromstring;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_object(L, 2, &arg2, "fs.error_code");

        // static std::filesystem::path weakly_canonical(const std::filesystem::path &p, std::error_code &ec)
        std::filesystem::path ret = std::filesystem::weakly_canonical(*arg1, *arg2);
        int num_ret = olua_copy_object(L, ret, "fs.path");

        olua_endinvoke(L);

        return num_ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::weakly_canonical(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}

static int _olua_fun_std_filesystem_weakly_canonical(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1))) {
            // static std::filesystem::path weakly_canonical(const std::filesystem::path &p)
            return _olua_fun_std_filesystem_weakly_canonical$1(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "fs.path") || olua_is_string(L, 1)) && (olua_is_object(L, 2, "fs.error_code"))) {
            // static std::filesystem::path weakly_canonical(const std::filesystem::path &p, std::error_code &ec)
            return _olua_fun_std_filesystem_weakly_canonical$2(L);
        // }
    }

    luaL_error(L, "method 'std::filesystem::weakly_canonical' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_cls_fs_filesystem(lua_State *L)
{
    oluacls_class(L, "fs.filesystem", nullptr);
    oluacls_func(L, "absolute", _olua_fun_std_filesystem_absolute);
    oluacls_func(L, "canonical", _olua_fun_std_filesystem_canonical);
    oluacls_func(L, "copy", _olua_fun_std_filesystem_copy);
    oluacls_func(L, "copy_file", _olua_fun_std_filesystem_copy_file);
    oluacls_func(L, "copy_symlink", _olua_fun_std_filesystem_copy_symlink);
    oluacls_func(L, "create_directories", _olua_fun_std_filesystem_create_directories);
    oluacls_func(L, "create_directory", _olua_fun_std_filesystem_create_directory);
    oluacls_func(L, "create_directory_symlink", _olua_fun_std_filesystem_create_directory_symlink);
    oluacls_func(L, "create_hard_link", _olua_fun_std_filesystem_create_hard_link);
    oluacls_func(L, "create_symlink", _olua_fun_std_filesystem_create_symlink);
    oluacls_func(L, "current_path", _olua_fun_std_filesystem_current_path);
    oluacls_func(L, "equivalent", _olua_fun_std_filesystem_equivalent);
    oluacls_func(L, "exists", _olua_fun_std_filesystem_exists);
    oluacls_func(L, "file_size", _olua_fun_std_filesystem_file_size);
    oluacls_func(L, "hard_link_count", _olua_fun_std_filesystem_hard_link_count);
    oluacls_func(L, "hash_value", _olua_fun_std_filesystem_hash_value);
    oluacls_func(L, "is_block_file", _olua_fun_std_filesystem_is_block_file);
    oluacls_func(L, "is_character_file", _olua_fun_std_filesystem_is_character_file);
    oluacls_func(L, "is_directory", _olua_fun_std_filesystem_is_directory);
    oluacls_func(L, "is_empty", _olua_fun_std_filesystem_is_empty);
    oluacls_func(L, "is_fifo", _olua_fun_std_filesystem_is_fifo);
    oluacls_func(L, "is_other", _olua_fun_std_filesystem_is_other);
    oluacls_func(L, "is_regular_file", _olua_fun_std_filesystem_is_regular_file);
    oluacls_func(L, "is_socket", _olua_fun_std_filesystem_is_socket);
    oluacls_func(L, "is_symlink", _olua_fun_std_filesystem_is_symlink);
    oluacls_func(L, "last_write_time", _olua_fun_std_filesystem_last_write_time);
    oluacls_func(L, "ls", _olua_fun_std_filesystem_ls);
    oluacls_func(L, "path", _olua_fun_std_filesystem_path);
    oluacls_func(L, "permissions", _olua_fun_std_filesystem_permissions);
    oluacls_func(L, "proximate", _olua_fun_std_filesystem_proximate);
    oluacls_func(L, "read_symlink", _olua_fun_std_filesystem_read_symlink);
    oluacls_func(L, "relative", _olua_fun_std_filesystem_relative);
    oluacls_func(L, "remove", _olua_fun_std_filesystem_remove);
    oluacls_func(L, "remove_all", _olua_fun_std_filesystem_remove_all);
    oluacls_func(L, "rename", _olua_fun_std_filesystem_rename);
    oluacls_func(L, "resize_file", _olua_fun_std_filesystem_resize_file);
    oluacls_func(L, "space", _olua_fun_std_filesystem_space);
    oluacls_func(L, "status", _olua_fun_std_filesystem_status);
    oluacls_func(L, "status_known", _olua_fun_std_filesystem_status_known);
    oluacls_func(L, "swap", _olua_fun_std_filesystem_swap);
    oluacls_func(L, "symlink_status", _olua_fun_std_filesystem_symlink_status);
    oluacls_func(L, "temp_directory_path", _olua_fun_std_filesystem_temp_directory_path);
    oluacls_func(L, "weakly_canonical", _olua_fun_std_filesystem_weakly_canonical);

    return 1;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_fs_filesystem(lua_State *L)
{
    olua_require(L, ".olua.module.fs",  _olua_module_fs);
    if (!olua_getclass(L, "fs.filesystem")) {
        luaL_error(L, "class not found: std::filesystem");
    }
    return 1;
}
OLUA_END_DECLS

int _olua_module_fs(lua_State *L)
{
    olua_require(L, "fs.file_time_type", _olua_cls_fs_file_time_type);
    olua_require(L, "fs.error_code", _olua_cls_fs_error_code);
    olua_require(L, "fs.error_category", _olua_cls_fs_error_category);
    olua_require(L, "fs.error_condition", _olua_cls_fs_error_condition);
    olua_require(L, "fs.path.format", _olua_cls_fs_path_format);
    olua_require(L, "fs.copy_options", _olua_cls_fs_copy_options);
    olua_require(L, "fs.file_status", _olua_cls_fs_file_status);
    olua_require(L, "fs.file_type", _olua_cls_fs_file_type);
    olua_require(L, "fs.perm_options", _olua_cls_fs_perm_options);
    olua_require(L, "fs.perms", _olua_cls_fs_perms);
    olua_require(L, "fs.directory_options", _olua_cls_fs_directory_options);
    olua_require(L, "fs.space_info", _olua_cls_fs_space_info);
    olua_require(L, "fs.directory_iterator", _olua_cls_fs_directory_iterator);
    olua_require(L, "fs.recursive_directory_iterator", _olua_cls_fs_recursive_directory_iterator);
    olua_require(L, "fs.directory_entry", _olua_cls_fs_directory_entry);
    olua_require(L, "fs.path", _olua_cls_fs_path);
    olua_require(L, "fs.path.iterator", _olua_cls_fs_path_iterator);
    olua_require(L, "fs.filesystem", _olua_cls_fs_filesystem);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_fs(lua_State *L)
{
    olua_require(L, ".olua.module.fs",  _olua_module_fs);

    if (olua_getclass(L, "fs.filesystem")) {
        return 1;
    }

    return 0;
}
OLUA_END_DECLS
