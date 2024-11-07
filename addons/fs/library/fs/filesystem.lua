---AUTO GENERATED, DO NOT MODIFY!
---@meta fs.filesystem

---
---@class fs.filesystem 
local filesystem = {}

---@param p fs.path|string
---@return fs.path
---@overload fun(p: fs.path|string, ec: fs.error_code): fs.path
function filesystem.absolute(p) end

---@param p fs.path|string
---@return fs.path
---@overload fun(p: fs.path|string, ec: fs.error_code): fs.path
function filesystem.canonical(p) end

---@param from fs.path|string
---@param to fs.path|string
---@overload fun(from: fs.path|string, to: fs.path|string, ec: fs.error_code)
---@overload fun(from: fs.path|string, to: fs.path|string, opt: fs.copy_options)
---@overload fun(from: fs.path|string, to: fs.path|string, opt: fs.copy_options, ec: fs.error_code)
function filesystem.copy(from, to) end

---@param from fs.path|string
---@param to fs.path|string
---@return boolean
---@overload fun(from: fs.path|string, to: fs.path|string, ec: fs.error_code): boolean
---@overload fun(from: fs.path|string, to: fs.path|string, opt: fs.copy_options): boolean
---@overload fun(from: fs.path|string, to: fs.path|string, opt: fs.copy_options, ec: fs.error_code): boolean
function filesystem.copy_file(from, to) end

---@param existing fs.path|string
---@param new fs.path|string
---@overload fun(ext: fs.path|string, new: fs.path|string, ec: fs.error_code)
function filesystem.copy_symlink(existing, new) end

---@param p fs.path|string
---@return boolean
---@overload fun(p: fs.path|string, ec: fs.error_code): boolean
function filesystem.create_directories(p) end

---@param p fs.path|string
---@return boolean
---@overload fun(p: fs.path|string, ec: fs.error_code): boolean
---@overload fun(p: fs.path|string, attrs: fs.path|string): boolean
---@overload fun(p: fs.path|string, attrs: fs.path|string, ec: fs.error_code): boolean
function filesystem.create_directory(p) end

---@param to fs.path|string
---@param new fs.path|string
---@overload fun(to: fs.path|string, new: fs.path|string, ec: fs.error_code)
function filesystem.create_directory_symlink(to, new) end

---@param to fs.path|string
---@param new fs.path|string
---@overload fun(to: fs.path|string, new: fs.path|string, ec: fs.error_code)
function filesystem.create_hard_link(to, new) end

---@param to fs.path|string
---@param new fs.path|string
---@overload fun(to: fs.path|string, new: fs.path|string, ec: fs.error_code)
function filesystem.create_symlink(to, new) end

---@return fs.path
---@overload fun(ec: fs.error_code): fs.path
---@overload fun(p: fs.path|string)
---@overload fun(p: fs.path|string, ec: fs.error_code)
function filesystem.current_path() end

---@param p1 fs.path|string
---@param p2 fs.path|string
---@return boolean
---@overload fun(p1: fs.path|string, p2: fs.path|string, ec: fs.error_code): boolean
function filesystem.equivalent(p1, p2) end

---@param s fs.file_status
---@return boolean
---@overload fun(p: fs.path|string): boolean
---@overload fun(p: fs.path|string, ec: fs.error_code): boolean
function filesystem.exists(s) end

---@param p fs.path|string
---@return integer
---@overload fun(p: fs.path|string, ec: fs.error_code): integer
function filesystem.file_size(p) end

---@param p fs.path|string
---@return integer
---@overload fun(p: fs.path|string, ec: fs.error_code): integer
function filesystem.hard_link_count(p) end

---@param p fs.path|string
---@return integer
function filesystem.hash_value(p) end

---@param s fs.file_status
---@return boolean
---@overload fun(p: fs.path|string): boolean
---@overload fun(p: fs.path|string, ec: fs.error_code): boolean
function filesystem.is_block_file(s) end

---@param s fs.file_status
---@return boolean
---@overload fun(p: fs.path|string): boolean
---@overload fun(p: fs.path|string, ec: fs.error_code): boolean
function filesystem.is_character_file(s) end

---@param s fs.file_status
---@return boolean
---@overload fun(p: fs.path|string): boolean
---@overload fun(p: fs.path|string, ec: fs.error_code): boolean
function filesystem.is_directory(s) end

---@param p fs.path|string
---@return boolean
---@overload fun(p: fs.path|string, ec: fs.error_code): boolean
function filesystem.is_empty(p) end

---@param s fs.file_status
---@return boolean
---@overload fun(p: fs.path|string): boolean
---@overload fun(p: fs.path|string, ec: fs.error_code): boolean
function filesystem.is_fifo(s) end

---@param s fs.file_status
---@return boolean
---@overload fun(p: fs.path|string): boolean
---@overload fun(p: fs.path|string, ec: fs.error_code): boolean
function filesystem.is_other(s) end

---@param s fs.file_status
---@return boolean
---@overload fun(p: fs.path|string): boolean
---@overload fun(p: fs.path|string, ec: fs.error_code): boolean
function filesystem.is_regular_file(s) end

---@param s fs.file_status
---@return boolean
---@overload fun(p: fs.path|string): boolean
---@overload fun(p: fs.path|string, ec: fs.error_code): boolean
function filesystem.is_socket(s) end

---@param s fs.file_status
---@return boolean
---@overload fun(p: fs.path|string): boolean
---@overload fun(p: fs.path|string, ec: fs.error_code): boolean
function filesystem.is_symlink(s) end

---@param p fs.path|string
---@return fs.file_time_type
---@overload fun(p: fs.path|string, ec: fs.error_code): fs.file_time_type
---@overload fun(p: fs.path|string, t: fs.file_time_type)
---@overload fun(p: fs.path|string, t: fs.file_time_type, ec: fs.error_code)
function filesystem.last_write_time(p) end

---@param dir fs.path|string
---@param recursive boolean
---@return any
---@overload fun(dir: fs.path|string): any
function filesystem.ls(dir, recursive) end

---@param p fs.path|string
---@param prms fs.perms
---@param opts fs.perm_options
---@overload fun(p: fs.path|string, prms: fs.perms)
---@overload fun(p: fs.path|string, prms: fs.perms, ec: fs.error_code)
---@overload fun(p: fs.path|string, prms: fs.perms, opts: fs.perm_options, ec: fs.error_code)
function filesystem.permissions(p, prms, opts) end

---@param p fs.path|string
---@param base fs.path|string
---@param ec fs.error_code
---@return fs.path
---@overload fun(p: fs.path|string, ec: fs.error_code): fs.path
---@overload fun(p: fs.path|string, base: fs.path|string): fs.path
---@overload fun(p: fs.path|string): fs.path
function filesystem.proximate(p, base, ec) end

---@param p fs.path|string
---@return fs.path
---@overload fun(p: fs.path|string, ec: fs.error_code): fs.path
function filesystem.read_symlink(p) end

---@param p fs.path|string
---@param base fs.path|string
---@param ec fs.error_code
---@return fs.path
---@overload fun(p: fs.path|string, ec: fs.error_code): fs.path
---@overload fun(p: fs.path|string, base: fs.path|string): fs.path
---@overload fun(p: fs.path|string): fs.path
function filesystem.relative(p, base, ec) end

---@param p fs.path|string
---@return boolean
---@overload fun(p: fs.path|string, ec: fs.error_code): boolean
function filesystem.remove(p) end

---@param p fs.path|string
---@return integer
---@overload fun(p: fs.path|string, ec: fs.error_code): integer
function filesystem.remove_all(p) end

---@param from fs.path|string
---@param to fs.path|string
---@overload fun(from: fs.path|string, to: fs.path|string, ec: fs.error_code)
function filesystem.rename(from, to) end

---@param p fs.path|string
---@param ns integer
---@overload fun(p: fs.path|string, ns: integer, ec: fs.error_code)
function filesystem.resize_file(p, ns) end

---@param p fs.path|string
---@return fs.space_info
---@overload fun(p: fs.path|string, ec: fs.error_code): fs.space_info
function filesystem.space(p) end

---@param p fs.path|string
---@return fs.file_status
---@overload fun(p: fs.path|string, ec: fs.error_code): fs.file_status
function filesystem.status(p) end

---@param s fs.file_status
---@return boolean
function filesystem.status_known(s) end

---@param lhs fs.path
---@param rhs fs.path
function filesystem.swap(lhs, rhs) end

---@param p fs.path|string
---@return fs.file_status
---@overload fun(p: fs.path|string, ec: fs.error_code): fs.file_status
function filesystem.symlink_status(p) end

---@return fs.path
---@overload fun(ec: fs.error_code): fs.path
function filesystem.temp_directory_path() end

---@param p fs.path|string
---@return fs.path
---@overload fun(p: fs.path|string, ec: fs.error_code): fs.path
function filesystem.weakly_canonical(p) end

return filesystem