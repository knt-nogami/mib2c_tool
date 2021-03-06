-- file: rfc2013.inc - UDP-MIB

-- Modules referenced by module UDP-MIB
#condInclude "rfc1902.inc" -- SNMPv2-SMI
#condInclude "rfc1904.inc" -- SNMPv2-CONF

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

#condInclude "rfc1213.inc" -- RFC1213-MIB

-- the following, defined in RFC1213-MIB, are redefined in UDP-MIB
#unregister RFC1213-MIB udpInDatagrams
#unregister RFC1213-MIB udpNoPorts
#unregister RFC1213-MIB udpInErrors
#unregister RFC1213-MIB udpOutDatagrams
#unregister RFC1213-MIB udpTable
#unregister RFC1213-MIB udpEntry
#unregister RFC1213-MIB udpLocalAddress
#unregister RFC1213-MIB udpLocalPort

#condInclude "rfc2013.mi2" -- UDP-MIB
#condExcludeModule UDP-MIB 0
#popOpt
