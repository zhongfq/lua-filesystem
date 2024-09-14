---AUTO GENERATED, DO NOT MODIFY!
---@meta fs.recursive_directory_iterator

---
---@class fs.recursive_directory_iterator 
local recursive_directory_iterator = {}

---@return any
function recursive_directory_iterator:__gc() end

---@return any
function recursive_directory_iterator:__olua_move() end

---@param self fs.recursive_directory_iterator
---@return any
function recursive_directory_iterator.__pairs(self) end

---@return fs.recursive_directory_iterator
---@overload fun(p: fs.path, xoptions: fs.directory_options): fs.recursive_directory_iterator
---@overload fun(p: fs.path): fs.recursive_directory_iterator
---@overload fun(p: fs.path, xoptions: fs.directory_options, ec: fs.error_code): fs.recursive_directory_iterator
---@overload fun(p: fs.path, ec: fs.error_code): fs.recursive_directory_iterator
---@overload fun(p: string, xoptions: fs.directory_options): fs.recursive_directory_iterator
---@overload fun(p: fs.path, xoptions: fs.directory_options): fs.recursive_directory_iterator
---@overload fun(p: string): fs.recursive_directory_iterator
---@overload fun(p: fs.path): fs.recursive_directory_iterator
---@overload fun(p: string, xoptions: fs.directory_options, ec: fs.error_code): fs.recursive_directory_iterator
---@overload fun(p: fs.path, xoptions: fs.directory_options, ec: fs.error_code): fs.recursive_directory_iterator
---@overload fun(p: string, ec: fs.error_code): fs.recursive_directory_iterator
---@overload fun(p: fs.path, ec: fs.error_code): fs.recursive_directory_iterator
function recursive_directory_iterator.new() end

return recursive_directory_iterator