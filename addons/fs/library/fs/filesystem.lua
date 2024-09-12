---AUTO GENERATED, DO NOT MODIFY!
---@meta fs.filesystem

---
---@class fs.filesystem 
local filesystem = {}

---@param p fs.path
---@return fs.path
---@overload fun(p: fs.path, ec: fs.error_code): fs.path
---@overload fun(p: string): fs.path
---@overload fun(p: fs.path): fs.path
---@overload fun(p: string, ec: fs.error_code): fs.path
---@overload fun(p: fs.path, ec: fs.error_code): fs.path
function filesystem.absolute(p) end

---@param p fs.path
---@return fs.path
---@overload fun(p: fs.path, ec: fs.error_code): fs.path
---@overload fun(p: string): fs.path
---@overload fun(p: fs.path): fs.path
---@overload fun(p: string, ec: fs.error_code): fs.path
---@overload fun(p: fs.path, ec: fs.error_code): fs.path
function filesystem.canonical(p) end

---@param from fs.path
---@param to fs.path
---@overload fun(from: fs.path, to: fs.path, ec: fs.error_code)
---@overload fun(from: fs.path, to: fs.path, opt: fs.copy_options)
---@overload fun(from: fs.path, to: fs.path, opt: fs.copy_options, ec: fs.error_code)
---@overload fun(from: string, to: string)
---@overload fun(from: fs.path, to: string)
---@overload fun(from: string, to: fs.path)
---@overload fun(from: fs.path, to: fs.path)
---@overload fun(from: string, to: string, ec: fs.error_code)
---@overload fun(from: fs.path, to: string, ec: fs.error_code)
---@overload fun(from: string, to: fs.path, ec: fs.error_code)
---@overload fun(from: fs.path, to: fs.path, ec: fs.error_code)
---@overload fun(from: string, to: string, opt: fs.copy_options)
---@overload fun(from: fs.path, to: string, opt: fs.copy_options)
---@overload fun(from: string, to: fs.path, opt: fs.copy_options)
---@overload fun(from: fs.path, to: fs.path, opt: fs.copy_options)
---@overload fun(from: string, to: string, opt: fs.copy_options, ec: fs.error_code)
---@overload fun(from: fs.path, to: string, opt: fs.copy_options, ec: fs.error_code)
---@overload fun(from: string, to: fs.path, opt: fs.copy_options, ec: fs.error_code)
---@overload fun(from: fs.path, to: fs.path, opt: fs.copy_options, ec: fs.error_code)
function filesystem.copy(from, to) end

---@param from fs.path
---@param to fs.path
---@return boolean
---@overload fun(from: fs.path, to: fs.path, ec: fs.error_code): boolean
---@overload fun(from: fs.path, to: fs.path, opt: fs.copy_options): boolean
---@overload fun(from: fs.path, to: fs.path, opt: fs.copy_options, ec: fs.error_code): boolean
---@overload fun(from: string, to: string): boolean
---@overload fun(from: fs.path, to: string): boolean
---@overload fun(from: string, to: fs.path): boolean
---@overload fun(from: fs.path, to: fs.path): boolean
---@overload fun(from: string, to: string, ec: fs.error_code): boolean
---@overload fun(from: fs.path, to: string, ec: fs.error_code): boolean
---@overload fun(from: string, to: fs.path, ec: fs.error_code): boolean
---@overload fun(from: fs.path, to: fs.path, ec: fs.error_code): boolean
---@overload fun(from: string, to: string, opt: fs.copy_options): boolean
---@overload fun(from: fs.path, to: string, opt: fs.copy_options): boolean
---@overload fun(from: string, to: fs.path, opt: fs.copy_options): boolean
---@overload fun(from: fs.path, to: fs.path, opt: fs.copy_options): boolean
---@overload fun(from: string, to: string, opt: fs.copy_options, ec: fs.error_code): boolean
---@overload fun(from: fs.path, to: string, opt: fs.copy_options, ec: fs.error_code): boolean
---@overload fun(from: string, to: fs.path, opt: fs.copy_options, ec: fs.error_code): boolean
---@overload fun(from: fs.path, to: fs.path, opt: fs.copy_options, ec: fs.error_code): boolean
function filesystem.copy_file(from, to) end

---@param existing fs.path
---@param new fs.path
---@overload fun(ext: fs.path, new: fs.path, ec: fs.error_code)
---@overload fun(existing: string, new: string)
---@overload fun(existing: fs.path, new: string)
---@overload fun(existing: string, new: fs.path)
---@overload fun(existing: fs.path, new: fs.path)
---@overload fun(ext: string, new: string, ec: fs.error_code)
---@overload fun(ext: fs.path, new: string, ec: fs.error_code)
---@overload fun(ext: string, new: fs.path, ec: fs.error_code)
---@overload fun(ext: fs.path, new: fs.path, ec: fs.error_code)
function filesystem.copy_symlink(existing, new) end

---@param p fs.path
---@return boolean
---@overload fun(p: fs.path, ec: fs.error_code): boolean
---@overload fun(p: string): boolean
---@overload fun(p: fs.path): boolean
---@overload fun(p: string, ec: fs.error_code): boolean
---@overload fun(p: fs.path, ec: fs.error_code): boolean
function filesystem.create_directories(p) end

---@param p fs.path
---@return boolean
---@overload fun(p: fs.path, ec: fs.error_code): boolean
---@overload fun(p: fs.path, attrs: fs.path): boolean
---@overload fun(p: fs.path, attrs: fs.path, ec: fs.error_code): boolean
---@overload fun(p: string): boolean
---@overload fun(p: fs.path): boolean
---@overload fun(p: string, ec: fs.error_code): boolean
---@overload fun(p: fs.path, ec: fs.error_code): boolean
---@overload fun(p: string, attrs: string): boolean
---@overload fun(p: fs.path, attrs: string): boolean
---@overload fun(p: string, attrs: fs.path): boolean
---@overload fun(p: fs.path, attrs: fs.path): boolean
---@overload fun(p: string, attrs: string, ec: fs.error_code): boolean
---@overload fun(p: fs.path, attrs: string, ec: fs.error_code): boolean
---@overload fun(p: string, attrs: fs.path, ec: fs.error_code): boolean
---@overload fun(p: fs.path, attrs: fs.path, ec: fs.error_code): boolean
function filesystem.create_directory(p) end

---@param to fs.path
---@param new fs.path
---@overload fun(to: fs.path, new: fs.path, ec: fs.error_code)
---@overload fun(to: string, new: string)
---@overload fun(to: fs.path, new: string)
---@overload fun(to: string, new: fs.path)
---@overload fun(to: fs.path, new: fs.path)
---@overload fun(to: string, new: string, ec: fs.error_code)
---@overload fun(to: fs.path, new: string, ec: fs.error_code)
---@overload fun(to: string, new: fs.path, ec: fs.error_code)
---@overload fun(to: fs.path, new: fs.path, ec: fs.error_code)
function filesystem.create_directory_symlink(to, new) end

---@param to fs.path
---@param new fs.path
---@overload fun(to: fs.path, new: fs.path, ec: fs.error_code)
---@overload fun(to: string, new: string)
---@overload fun(to: fs.path, new: string)
---@overload fun(to: string, new: fs.path)
---@overload fun(to: fs.path, new: fs.path)
---@overload fun(to: string, new: string, ec: fs.error_code)
---@overload fun(to: fs.path, new: string, ec: fs.error_code)
---@overload fun(to: string, new: fs.path, ec: fs.error_code)
---@overload fun(to: fs.path, new: fs.path, ec: fs.error_code)
function filesystem.create_hard_link(to, new) end

---@param to fs.path
---@param new fs.path
---@overload fun(to: fs.path, new: fs.path, ec: fs.error_code)
---@overload fun(to: string, new: string)
---@overload fun(to: fs.path, new: string)
---@overload fun(to: string, new: fs.path)
---@overload fun(to: fs.path, new: fs.path)
---@overload fun(to: string, new: string, ec: fs.error_code)
---@overload fun(to: fs.path, new: string, ec: fs.error_code)
---@overload fun(to: string, new: fs.path, ec: fs.error_code)
---@overload fun(to: fs.path, new: fs.path, ec: fs.error_code)
function filesystem.create_symlink(to, new) end

---@return fs.path
---@overload fun(ec: fs.error_code): fs.path
---@overload fun(p: fs.path)
---@overload fun(p: fs.path, ec: fs.error_code)
---@overload fun(p: string)
---@overload fun(p: fs.path)
---@overload fun(p: string, ec: fs.error_code)
---@overload fun(p: fs.path, ec: fs.error_code)
function filesystem.current_path() end

---@param p1 fs.path
---@param p2 fs.path
---@return boolean
---@overload fun(p1: fs.path, p2: fs.path, ec: fs.error_code): boolean
---@overload fun(p1: string, p2: string): boolean
---@overload fun(p1: fs.path, p2: string): boolean
---@overload fun(p1: string, p2: fs.path): boolean
---@overload fun(p1: fs.path, p2: fs.path): boolean
---@overload fun(p1: string, p2: string, ec: fs.error_code): boolean
---@overload fun(p1: fs.path, p2: string, ec: fs.error_code): boolean
---@overload fun(p1: string, p2: fs.path, ec: fs.error_code): boolean
---@overload fun(p1: fs.path, p2: fs.path, ec: fs.error_code): boolean
function filesystem.equivalent(p1, p2) end

---@param s fs.file_status
---@return boolean
---@overload fun(p: fs.path): boolean
---@overload fun(p: fs.path, ec: fs.error_code): boolean
---@overload fun(p: string): boolean
---@overload fun(p: fs.path): boolean
---@overload fun(p: string, ec: fs.error_code): boolean
---@overload fun(p: fs.path, ec: fs.error_code): boolean
function filesystem.exists(s) end

---@param p fs.path
---@return integer
---@overload fun(p: fs.path, ec: fs.error_code): integer
---@overload fun(p: string): integer
---@overload fun(p: fs.path): integer
---@overload fun(p: string, ec: fs.error_code): integer
---@overload fun(p: fs.path, ec: fs.error_code): integer
function filesystem.file_size(p) end

---@param p fs.path
---@return integer
---@overload fun(p: fs.path, ec: fs.error_code): integer
---@overload fun(p: string): integer
---@overload fun(p: fs.path): integer
---@overload fun(p: string, ec: fs.error_code): integer
---@overload fun(p: fs.path, ec: fs.error_code): integer
function filesystem.hard_link_count(p) end

---@param p fs.path
---@return integer
---@overload fun(p: string): integer
---@overload fun(p: fs.path): integer
function filesystem.hash_value(p) end

---@param s fs.file_status
---@return boolean
---@overload fun(p: fs.path): boolean
---@overload fun(p: fs.path, ec: fs.error_code): boolean
---@overload fun(p: string): boolean
---@overload fun(p: fs.path): boolean
---@overload fun(p: string, ec: fs.error_code): boolean
---@overload fun(p: fs.path, ec: fs.error_code): boolean
function filesystem.is_block_file(s) end

---@param s fs.file_status
---@return boolean
---@overload fun(p: fs.path): boolean
---@overload fun(p: fs.path, ec: fs.error_code): boolean
---@overload fun(p: string): boolean
---@overload fun(p: fs.path): boolean
---@overload fun(p: string, ec: fs.error_code): boolean
---@overload fun(p: fs.path, ec: fs.error_code): boolean
function filesystem.is_character_file(s) end

---@param s fs.file_status
---@return boolean
---@overload fun(p: fs.path): boolean
---@overload fun(p: fs.path, ec: fs.error_code): boolean
---@overload fun(p: string): boolean
---@overload fun(p: fs.path): boolean
---@overload fun(p: string, ec: fs.error_code): boolean
---@overload fun(p: fs.path, ec: fs.error_code): boolean
function filesystem.is_directory(s) end

---@param p fs.path
---@return boolean
---@overload fun(p: fs.path, ec: fs.error_code): boolean
---@overload fun(p: string): boolean
---@overload fun(p: fs.path): boolean
---@overload fun(p: string, ec: fs.error_code): boolean
---@overload fun(p: fs.path, ec: fs.error_code): boolean
function filesystem.is_empty(p) end

---@param s fs.file_status
---@return boolean
---@overload fun(p: fs.path): boolean
---@overload fun(p: fs.path, ec: fs.error_code): boolean
---@overload fun(p: string): boolean
---@overload fun(p: fs.path): boolean
---@overload fun(p: string, ec: fs.error_code): boolean
---@overload fun(p: fs.path, ec: fs.error_code): boolean
function filesystem.is_fifo(s) end

---@param s fs.file_status
---@return boolean
---@overload fun(p: fs.path): boolean
---@overload fun(p: fs.path, ec: fs.error_code): boolean
---@overload fun(p: string): boolean
---@overload fun(p: fs.path): boolean
---@overload fun(p: string, ec: fs.error_code): boolean
---@overload fun(p: fs.path, ec: fs.error_code): boolean
function filesystem.is_other(s) end

---@param s fs.file_status
---@return boolean
---@overload fun(p: fs.path): boolean
---@overload fun(p: fs.path, ec: fs.error_code): boolean
---@overload fun(p: string): boolean
---@overload fun(p: fs.path): boolean
---@overload fun(p: string, ec: fs.error_code): boolean
---@overload fun(p: fs.path, ec: fs.error_code): boolean
function filesystem.is_regular_file(s) end

---@param s fs.file_status
---@return boolean
---@overload fun(p: fs.path): boolean
---@overload fun(p: fs.path, ec: fs.error_code): boolean
---@overload fun(p: string): boolean
---@overload fun(p: fs.path): boolean
---@overload fun(p: string, ec: fs.error_code): boolean
---@overload fun(p: fs.path, ec: fs.error_code): boolean
function filesystem.is_socket(s) end

---@param s fs.file_status
---@return boolean
---@overload fun(p: fs.path): boolean
---@overload fun(p: fs.path, ec: fs.error_code): boolean
---@overload fun(p: string): boolean
---@overload fun(p: fs.path): boolean
---@overload fun(p: string, ec: fs.error_code): boolean
---@overload fun(p: fs.path, ec: fs.error_code): boolean
function filesystem.is_symlink(s) end

---@param p fs.path
---@return fs.file_time_type
---@overload fun(p: fs.path, ec: fs.error_code): fs.file_time_type
---@overload fun(p: fs.path, t: fs.file_time_type)
---@overload fun(p: fs.path, t: fs.file_time_type, ec: fs.error_code)
---@overload fun(p: string): fs.file_time_type
---@overload fun(p: fs.path): fs.file_time_type
---@overload fun(p: string, ec: fs.error_code): fs.file_time_type
---@overload fun(p: fs.path, ec: fs.error_code): fs.file_time_type
---@overload fun(p: string, t: fs.file_time_type)
---@overload fun(p: fs.path, t: fs.file_time_type)
---@overload fun(p: string, t: fs.file_time_type, ec: fs.error_code)
---@overload fun(p: fs.path, t: fs.file_time_type, ec: fs.error_code)
function filesystem.last_write_time(p) end

---@param p fs.path
---@param prms fs.perms
---@param opts fs.perm_options
---@overload fun(p: fs.path, prms: fs.perms)
---@overload fun(p: fs.path, prms: fs.perms, ec: fs.error_code)
---@overload fun(p: fs.path, prms: fs.perms, opts: fs.perm_options, ec: fs.error_code)
---@overload fun(p: string, prms: fs.perms, opts: fs.perm_options)
---@overload fun(p: fs.path, prms: fs.perms, opts: fs.perm_options)
---@overload fun(p: string, prms: fs.perms)
---@overload fun(p: fs.path, prms: fs.perms)
---@overload fun(p: string, prms: fs.perms, ec: fs.error_code)
---@overload fun(p: fs.path, prms: fs.perms, ec: fs.error_code)
---@overload fun(p: string, prms: fs.perms, opts: fs.perm_options, ec: fs.error_code)
---@overload fun(p: fs.path, prms: fs.perms, opts: fs.perm_options, ec: fs.error_code)
function filesystem.permissions(p, prms, opts) end

---@param p fs.path
---@param base fs.path
---@param ec fs.error_code
---@return fs.path
---@overload fun(p: fs.path, ec: fs.error_code): fs.path
---@overload fun(p: fs.path, base: fs.path): fs.path
---@overload fun(p: fs.path): fs.path
---@overload fun(p: string, base: string, ec: fs.error_code): fs.path
---@overload fun(p: fs.path, base: string, ec: fs.error_code): fs.path
---@overload fun(p: string, base: fs.path, ec: fs.error_code): fs.path
---@overload fun(p: fs.path, base: fs.path, ec: fs.error_code): fs.path
---@overload fun(p: string, ec: fs.error_code): fs.path
---@overload fun(p: fs.path, ec: fs.error_code): fs.path
---@overload fun(p: string, base: string): fs.path
---@overload fun(p: fs.path, base: string): fs.path
---@overload fun(p: string, base: fs.path): fs.path
---@overload fun(p: fs.path, base: fs.path): fs.path
---@overload fun(p: string): fs.path
---@overload fun(p: fs.path): fs.path
function filesystem.proximate(p, base, ec) end

---@param p fs.path
---@return fs.path
---@overload fun(p: fs.path, ec: fs.error_code): fs.path
---@overload fun(p: string): fs.path
---@overload fun(p: fs.path): fs.path
---@overload fun(p: string, ec: fs.error_code): fs.path
---@overload fun(p: fs.path, ec: fs.error_code): fs.path
function filesystem.read_symlink(p) end

---@param p fs.path
---@param base fs.path
---@param ec fs.error_code
---@return fs.path
---@overload fun(p: fs.path, ec: fs.error_code): fs.path
---@overload fun(p: fs.path, base: fs.path): fs.path
---@overload fun(p: fs.path): fs.path
---@overload fun(p: string, base: string, ec: fs.error_code): fs.path
---@overload fun(p: fs.path, base: string, ec: fs.error_code): fs.path
---@overload fun(p: string, base: fs.path, ec: fs.error_code): fs.path
---@overload fun(p: fs.path, base: fs.path, ec: fs.error_code): fs.path
---@overload fun(p: string, ec: fs.error_code): fs.path
---@overload fun(p: fs.path, ec: fs.error_code): fs.path
---@overload fun(p: string, base: string): fs.path
---@overload fun(p: fs.path, base: string): fs.path
---@overload fun(p: string, base: fs.path): fs.path
---@overload fun(p: fs.path, base: fs.path): fs.path
---@overload fun(p: string): fs.path
---@overload fun(p: fs.path): fs.path
function filesystem.relative(p, base, ec) end

---@param p fs.path
---@return boolean
---@overload fun(p: fs.path, ec: fs.error_code): boolean
---@overload fun(p: string): boolean
---@overload fun(p: fs.path): boolean
---@overload fun(p: string, ec: fs.error_code): boolean
---@overload fun(p: fs.path, ec: fs.error_code): boolean
function filesystem.remove(p) end

---@param p fs.path
---@return integer
---@overload fun(p: fs.path, ec: fs.error_code): integer
---@overload fun(p: string): integer
---@overload fun(p: fs.path): integer
---@overload fun(p: string, ec: fs.error_code): integer
---@overload fun(p: fs.path, ec: fs.error_code): integer
function filesystem.remove_all(p) end

---@param from fs.path
---@param to fs.path
---@overload fun(from: fs.path, to: fs.path, ec: fs.error_code)
---@overload fun(from: string, to: string)
---@overload fun(from: fs.path, to: string)
---@overload fun(from: string, to: fs.path)
---@overload fun(from: fs.path, to: fs.path)
---@overload fun(from: string, to: string, ec: fs.error_code)
---@overload fun(from: fs.path, to: string, ec: fs.error_code)
---@overload fun(from: string, to: fs.path, ec: fs.error_code)
---@overload fun(from: fs.path, to: fs.path, ec: fs.error_code)
function filesystem.rename(from, to) end

---@param p fs.path
---@param ns integer
---@overload fun(p: fs.path, ns: integer, ec: fs.error_code)
---@overload fun(p: string, ns: integer)
---@overload fun(p: fs.path, ns: integer)
---@overload fun(p: string, ns: integer, ec: fs.error_code)
---@overload fun(p: fs.path, ns: integer, ec: fs.error_code)
function filesystem.resize_file(p, ns) end

---@param p fs.path
---@return fs.space_info
---@overload fun(p: fs.path, ec: fs.error_code): fs.space_info
---@overload fun(p: string): fs.space_info
---@overload fun(p: fs.path): fs.space_info
---@overload fun(p: string, ec: fs.error_code): fs.space_info
---@overload fun(p: fs.path, ec: fs.error_code): fs.space_info
function filesystem.space(p) end

---@param p fs.path
---@return fs.file_status
---@overload fun(p: fs.path, ec: fs.error_code): fs.file_status
---@overload fun(p: string): fs.file_status
---@overload fun(p: fs.path): fs.file_status
---@overload fun(p: string, ec: fs.error_code): fs.file_status
---@overload fun(p: fs.path, ec: fs.error_code): fs.file_status
function filesystem.status(p) end

---@param s fs.file_status
---@return boolean
function filesystem.status_known(s) end

---@param lhs fs.path
---@param rhs fs.path
function filesystem.swap(lhs, rhs) end

---@param p fs.path
---@return fs.file_status
---@overload fun(p: fs.path, ec: fs.error_code): fs.file_status
---@overload fun(p: string): fs.file_status
---@overload fun(p: fs.path): fs.file_status
---@overload fun(p: string, ec: fs.error_code): fs.file_status
---@overload fun(p: fs.path, ec: fs.error_code): fs.file_status
function filesystem.symlink_status(p) end

---@return fs.path
---@overload fun(ec: fs.error_code): fs.path
function filesystem.temp_directory_path() end

---@param p fs.path
---@return fs.path
---@overload fun(p: fs.path, ec: fs.error_code): fs.path
---@overload fun(p: string): fs.path
---@overload fun(p: fs.path): fs.path
---@overload fun(p: string, ec: fs.error_code): fs.path
---@overload fun(p: fs.path, ec: fs.error_code): fs.path
function filesystem.weakly_canonical(p) end

return filesystem