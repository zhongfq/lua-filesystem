---AUTO GENERATED, DO NOT MODIFY!
---@meta fs.directory_iterator

---
---@class fs.directory_iterator 
local directory_iterator = {}

---@return any
function directory_iterator:__gc() end

---@return any
function directory_iterator:__olua_move() end

---@param self fs.directory_iterator
---@return any
function directory_iterator.__pairs(self) end

---@return fs.directory_iterator
---@overload fun(p: fs.path): fs.directory_iterator
---@overload fun(p: fs.path, opts: fs.directory_options): fs.directory_iterator
---@overload fun(p: fs.path, ec: fs.error_code): fs.directory_iterator
---@overload fun(p: fs.path, opts: fs.directory_options, ec: fs.error_code): fs.directory_iterator
---@overload fun(p: string): fs.directory_iterator
---@overload fun(p: fs.path): fs.directory_iterator
---@overload fun(p: string, opts: fs.directory_options): fs.directory_iterator
---@overload fun(p: fs.path, opts: fs.directory_options): fs.directory_iterator
---@overload fun(p: string, ec: fs.error_code): fs.directory_iterator
---@overload fun(p: fs.path, ec: fs.error_code): fs.directory_iterator
---@overload fun(p: string, opts: fs.directory_options, ec: fs.error_code): fs.directory_iterator
---@overload fun(p: fs.path, opts: fs.directory_options, ec: fs.error_code): fs.directory_iterator
function directory_iterator.new() end

return directory_iterator