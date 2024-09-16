package.cpath = "build/?.so;build/Debug/?.dll;" .. package.cpath

local fs = require "fs"
local copy_options = require "fs.copy_options"
local path = require "fs.path"
local directory_iterator = require "fs.directory_iterator"
local directory_options = require "fs.directory_options"
local recursive_directory_iterator = require "fs.recursive_directory_iterator"

-- local olua = require "olua.c"
-- olua.debug(true)

local f = path.new("a/b/c/pic.jpg")

print(f:replace_extension("png"):string())
print(fs.exists(path.new "test.lua"))

fs.remove("test.lua.bak")
fs.copy("test.lua", "test.lua.bak", copy_options.overwrite_existing)
-- filesystem.copy("autobuild", "autobuild.bak")

local t = recursive_directory_iterator.new("olua/script")
print(getmetatable(t).__pairs)

print("### do now")
for _, file in pairs(t) do
    ---@cast file fs.directory_entry
    print("@1", file,  file:path():string())
end
