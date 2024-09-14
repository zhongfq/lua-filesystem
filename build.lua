---@format disable

package.path = "./?.lua;./?/init.lua;" .. package.path

require "olua"

olua.AUTO_GEN_PROP = false
olua.ENABLE_EXCEPTION = true

-------------------------------------------------------------------------------
--- clang compile options
-------------------------------------------------------------------------------
clang {
    "-DOLUA_DEBUG",
    "-std=c++17",
    "-I./olua",
    "-I./lua",
    "-I./src",
}

module "fs"

output_dir "src"

api_dir "addons/fs"

headers [[
#include "olua.hpp"
#include "fs_lua.h"

#include <filesystem>
]]

entry "std::filesystem"

luacls(function (cxxcls)
    return cxxcls:gsub("std::filesystem::", "fs.")
        :gsub("std::", "fs.")
        :gsub("::", ".")
end)

exclude_type "std::filesystem::path::iterator"
exclude_type "std::filesystem::path::__string_view"
exclude_type "std::u16string"
exclude_type "std::u32string"
exclude_type "std::wstring"
exclude_type "time_point"

typedef "std::filesystem::path::string_type"
    .luatype "string"
    .conv "olua_$$_string"

typedef "std::chrono::time_point::duration"
    .conv "olua_$$_integer"

typeonly "std::filesystem::file_time_type"

typeconf "std::error_code"
typeconf "std::error_category"
typeconf "std::error_condition"
typeconf "std::filesystem::path::format"
typeconf "std::filesystem::copy_options"
typeconf "std::filesystem::file_status"
typeconf "std::filesystem::file_type"
typeconf "std::filesystem::perm_options"
typeconf "std::filesystem::perms"
typeconf "std::filesystem::directory_options"

typeconf "std::filesystem::space_info"
typeconf "std::filesystem::directory_iterator"
    .extend "fs::directory_iterator_extend"
    .include "new"
typeconf "std::filesystem::recursive_directory_iterator"
    .extend "fs::recursive_directory_iterator_extend"
    .include "new"
typeconf "std::filesystem::directory_entry"
typeconf "std::filesystem::path"
    .fromstring "true"
typeconf "std::filesystem"
    .exclude "begin"
    .exclude "end"