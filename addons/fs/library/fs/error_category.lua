---AUTO GENERATED, DO NOT MODIFY!
---@meta fs.error_category

---
---@class fs.error_category 
local error_category = {}

---@param rhs fs.error_category
---@return boolean
function error_category:__eq(rhs) end

---@return any
function error_category:__gc() end

---@param rhs fs.error_category
---@return boolean
function error_category:__lt(rhs) end

---@param ev integer
---@return fs.error_condition
function error_category:default_error_condition(ev) end

---@param code integer
---@param condition fs.error_condition
---@return boolean
---@overload fun(self: fs.error_category, code: fs.error_code, condition: integer): boolean
function error_category:equivalent(code, condition) end

---@param ev integer
---@return string
function error_category:message(ev) end

---@return string
function error_category:name() end

return error_category