---AUTO GENERATED, DO NOT MODIFY!
---@meta fs.directory_iterator

---
---@class fs.directory_iterator 
local directory_iterator = {}

---@return any
function directory_iterator:__gc() end

---@return any
function directory_iterator:__pairs() end

---@return fs.directory_iterator
---@overload fun(p: fs.path|string): fs.directory_iterator
---@overload fun(p: fs.path|string, opts: fs.directory_options): fs.directory_iterator
---@overload fun(p: fs.path|string, ec: fs.error_code): fs.directory_iterator
---@overload fun(p: fs.path|string, opts: fs.directory_options, ec: fs.error_code): fs.directory_iterator
function directory_iterator.new() end

return directory_iterator