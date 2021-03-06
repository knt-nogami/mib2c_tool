-- file: rfc1382.inc - RFC1382-MIB

-- Modules referenced by module RFC1382-MIB
#condInclude "rfc1155.inc" -- RFC1155-SMI
#condInclude "rfc1212.inc" -- RFC-1212
#condInclude "rfc1213.inc" -- RFC1213-MIB
#condInclude "rfc1215.inc" -- RFC-1215
--#condInclude "rfc1271.inc"  RFC1271-MIB
#condInclude "rfc1757.inc" -- RMON-MIB
#aliasModule RMON-MIB RFC1271-MIB
#condInclude "rfc1381.inc" -- RFC1381-MIB

-- MIB module
#pushOpt
-- Remove strict checking
-- Options:
--   C - check size/range present
--   W - don't allow size/range for items in a sequence
--   7 - restrict INTEGER values below 2G-1
--   R - check (in V1) that INDEX objs are read-only
--   S - require (in V2) that IMPORTS be specified for items in compliances
--   B - strong checking for size/range of items in index clause
#removeOpt "C W 7 R S B"

-- Loosen checking
-- Options:
--   4 - allow non-standard access for objects
--   K - allow (in v1) zero valued enums
--   O - allow (in v2) hyphens in labels for enumerated values
--   P - allow (in v2) hyphens in descriptors(identifiers)
--   T - no check (in v2) of proper access for items in groups
--   M - no check (in v2) that all NTs and accessible OTs are in a group
--   F - allow integer/integer32 index items without a range
--   G - allow unused IMPORTS and textual conventions
--   N - no check (in v2) of access of objects in notifications
--   I - use (in v1) the v2 rules for checking ACCESS of index items
--#addOpt "4 K O P T M F G N I"

#condInclude "rfc1382.mib" -- RFC1382-MIB
#condExcludeModule RFC1382-MIB 0
#popOpt
