-- file: rfc2214.inc - INTEGRATED-SERVICES-GUARANTEED-MIB

-- Modules referenced by module INTEGRATED-SERVICES-GUARANTEED-MIB
#condInclude "rfc1902.inc" -- SNMPv2-SMI
#condInclude "rfc1903.inc" -- SNMPv2-TC
#condInclude "rfc1904.inc" -- SNMPv2-CONF
#condInclude "rfc2213.inc" -- INTEGRATED-SERVICES-MIB
#condInclude "rfc2233.inc" -- IF-MIB

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
--   Z - allow bad table modelling practices
--#addOpt "4 K O P T M F G N I Z"

#condInclude "rfc2214.mi2" -- INTEGRATED-SERVICES-GUARANTEED-MIB
#condExcludeModule INTEGRATED-SERVICES-GUARANTEED-MIB 0
#popOpt
