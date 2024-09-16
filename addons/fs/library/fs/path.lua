---AUTO GENERATED, DO NOT MODIFY!
---@meta fs.path

---
---@class fs.path 
---@field preferred_separator integer
local path = {}

---@return any
function path:__gc() end

---@param s string
---@return fs.path
function path:assign(s) end

---@return string
function path:c_str() end

function path:clear() end

---@param p fs.path|string
---@return integer
---@overload fun(self: fs.path, s: string): integer
---@overload fun(self: fs.path, s: string): integer
function path:compare(p) end

---@return boolean
function path:empty() end

---@return fs.path
function path:extension() end

---@return fs.path
function path:filename() end

---@return string
function path:generic_string() end

---@return string
function path:generic_u8string() end

---@return boolean
function path:has_extension() end

---@return boolean
function path:has_filename() end

---@return boolean
function path:has_parent_path() end

---@return boolean
function path:has_relative_path() end

---@return boolean
function path:has_root_directory() end

---@return boolean
function path:has_root_name() end

---@return boolean
function path:has_root_path() end

---@return boolean
function path:has_stem() end

---@return boolean
function path:is_absolute() end

---@return boolean
function path:is_relative() end

---@return fs.path
function path:lexically_normal() end

---@param base fs.path|string
---@return fs.path
function path:lexically_proximate(base) end

---@param base fs.path|string
---@return fs.path
function path:lexically_relative(base) end

---@return fs.path
function path:make_preferred() end

---@return string
function path:native() end

---@return fs.path
---@overload fun(s: string, arg2: fs.path.format): fs.path
---@overload fun(s: string): fs.path
function path.new() end

---@return fs.path
function path:parent_path() end

---@return fs.path
function path:relative_path() end

---@return fs.path
function path:remove_filename() end

---@param replacement fs.path|string
---@return fs.path
---@overload fun(self: fs.path): fs.path
function path:replace_extension(replacement) end

---@param replacement fs.path|string
---@return fs.path
function path:replace_filename(replacement) end

---@return fs.path
function path:root_directory() end

---@return fs.path
function path:root_name() end

---@return fs.path
function path:root_path() end

---@return fs.path
function path:stem() end

---@return string
function path:string() end

---@param rhs fs.path
function path:swap(rhs) end

---@return string
function path:u8string() end

return path