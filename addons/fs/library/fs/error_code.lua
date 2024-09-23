---AUTO GENERATED, DO NOT MODIFY!
---@meta fs.error_code

---
---@class fs.error_code 
local error_code = {}

---@param x fs.error_code
---@param y fs.error_code
---@return boolean
---@overload fun(x: fs.error_code, y: fs.error_condition): boolean
function error_code.__eq(x, y) end

---@return any
function error_code:__gc() end

---@param x fs.error_code
---@param y fs.error_code
---@return boolean
function error_code.__lt(x, y) end

---@param val integer
---@param cat fs.error_category
function error_code:assign(val, cat) end

---@return fs.error_category
function error_code:category() end

function error_code:clear() end

---@return fs.error_condition
function error_code:default_error_condition() end

---@return string
function error_code:message() end

---@return fs.error_code
---@overload fun(val: integer, cat: fs.error_category): fs.error_code
function error_code.new() end

---@return integer
function error_code:value() end

return error_code