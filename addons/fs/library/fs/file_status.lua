---AUTO GENERATED, DO NOT MODIFY!
---@meta fs.file_status

---
---@class fs.file_status 
local file_status = {}

---@return any
function file_status:__gc() end

---@return any
function file_status:__olua_move() end

---@return fs.file_status
---@overload fun(ft: fs.file_type, prms: fs.perms): fs.file_status
---@overload fun(ft: fs.file_type): fs.file_status
function file_status.new() end

---@return fs.perms
---@overload fun(self: fs.file_status, p: fs.perms)
function file_status:permissions() end

---@return fs.file_type
---@overload fun(self: fs.file_status, ft: fs.file_type)
function file_status:type() end

return file_status