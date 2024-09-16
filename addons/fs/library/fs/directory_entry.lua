---AUTO GENERATED, DO NOT MODIFY!
---@meta fs.directory_entry

---
---@class fs.directory_entry 
local directory_entry = {}

---@return any
function directory_entry:__gc() end

---@param p fs.path|string
---@overload fun(self: fs.directory_entry, p: fs.path|string, ec: fs.error_code)
function directory_entry:assign(p) end

---@return boolean
---@overload fun(self: fs.directory_entry, ec: fs.error_code): boolean
function directory_entry:exists() end

---@return integer
---@overload fun(self: fs.directory_entry, ec: fs.error_code): integer
function directory_entry:file_size() end

---@return integer
---@overload fun(self: fs.directory_entry, ec: fs.error_code): integer
function directory_entry:hard_link_count() end

---@return boolean
---@overload fun(self: fs.directory_entry, ec: fs.error_code): boolean
function directory_entry:is_block_file() end

---@return boolean
---@overload fun(self: fs.directory_entry, ec: fs.error_code): boolean
function directory_entry:is_character_file() end

---@return boolean
---@overload fun(self: fs.directory_entry, ec: fs.error_code): boolean
function directory_entry:is_directory() end

---@return boolean
---@overload fun(self: fs.directory_entry, ec: fs.error_code): boolean
function directory_entry:is_fifo() end

---@return boolean
---@overload fun(self: fs.directory_entry, ec: fs.error_code): boolean
function directory_entry:is_other() end

---@return boolean
---@overload fun(self: fs.directory_entry, ec: fs.error_code): boolean
function directory_entry:is_regular_file() end

---@return boolean
---@overload fun(self: fs.directory_entry, ec: fs.error_code): boolean
function directory_entry:is_socket() end

---@return boolean
---@overload fun(self: fs.directory_entry, ec: fs.error_code): boolean
function directory_entry:is_symlink() end

---@return fs.file_time_type
---@overload fun(self: fs.directory_entry, ec: fs.error_code): fs.file_time_type
function directory_entry:last_write_time() end

---@return fs.directory_entry
---@overload fun(p: fs.path|string): fs.directory_entry
---@overload fun(p: fs.path|string, ec: fs.error_code): fs.directory_entry
function directory_entry.new() end

---@return fs.path
function directory_entry:path() end

---@overload fun(self: fs.directory_entry, ec: fs.error_code)
function directory_entry:refresh() end

---@param p fs.path|string
---@overload fun(self: fs.directory_entry, p: fs.path|string, ec: fs.error_code)
function directory_entry:replace_filename(p) end

---@return fs.file_status
---@overload fun(self: fs.directory_entry, ec: fs.error_code): fs.file_status
function directory_entry:status() end

---@return fs.file_status
---@overload fun(self: fs.directory_entry, ec: fs.error_code): fs.file_status
function directory_entry:symlink_status() end

return directory_entry