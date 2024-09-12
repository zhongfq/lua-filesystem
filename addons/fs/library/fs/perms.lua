---AUTO GENERATED, DO NOT MODIFY!
---@meta fs.perms

---@type fs.perms
local VALUE

---
---@enum fs.perms
local perms = {
    all = 511,
    group_all = 56,
    group_exec = 8,
    group_read = 32,
    group_write = 16,
    mask = 4095,
    none = 0,
    others_all = 7,
    others_exec = 1,
    others_read = 4,
    others_write = 2,
    owner_all = 448,
    owner_exec = 64,
    owner_read = 256,
    owner_write = 128,
    set_gid = 1024,
    set_uid = 2048,
    sticky_bit = 512,
    unknown = 65535,
}

return perms