---AUTO GENERATED, DO NOT MODIFY!
---@meta fs.error_condition

---
---@class fs.error_condition 
local error_condition = {}

---@param x fs.error_condition
---@param y fs.error_code
---@return boolean
---@overload fun(x: fs.error_condition, y: fs.error_condition): boolean
function error_condition.__eq(x, y) end

---@return any
function error_condition:__gc() end

---@param x fs.error_condition
---@param y fs.error_condition
---@return boolean
function error_condition.__lt(x, y) end

---@param val integer
---@param cat fs.error_category
function error_condition:assign(val, cat) end

---@return fs.error_category
function error_condition:category() end

function error_condition:clear() end

---@return string
function error_condition:message() end

---@return fs.error_condition
---@overload fun(val: integer, cat: fs.error_category): fs.error_condition
function error_condition.new() end

---@return integer
function error_condition:value() end

return error_condition