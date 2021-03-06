-- file: TCP-MIB.inc (RFC 2012)

-- Modules referenced by module TCP-MIB
#condInclude "SNMPv2-SMI.inc"
#condInclude "SNMPv2-CONF.inc"

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

#condInclude "RFC1213-MIB.inc"

-- the following, defined in RFC1213-MIB, are redefined in TCP-MIB
#unregister RFC1213-MIB tcpRtoAlgorithm
#unregister RFC1213-MIB tcpRtoMin
#unregister RFC1213-MIB tcpRtoMax
#unregister RFC1213-MIB tcpMaxConn
#unregister RFC1213-MIB tcpActiveOpens
#unregister RFC1213-MIB tcpPassiveOpens
#unregister RFC1213-MIB tcpAttemptFails
#unregister RFC1213-MIB tcpEstabResets
#unregister RFC1213-MIB tcpCurrEstab
#unregister RFC1213-MIB tcpInSegs
#unregister RFC1213-MIB tcpOutSegs
#unregister RFC1213-MIB tcpRetransSegs
#unregister RFC1213-MIB tcpConnTable
#unregister RFC1213-MIB tcpConnEntry
#unregister RFC1213-MIB tcpConnState
#unregister RFC1213-MIB tcpConnLocalAddress
#unregister RFC1213-MIB tcpConnLocalPort
#unregister RFC1213-MIB tcpConnRemAddress
#unregister RFC1213-MIB tcpConnRemPort
#unregister RFC1213-MIB tcpInErrs
#unregister RFC1213-MIB tcpOutRsts

#condInclude "TCP-MIB.my"
#condExcludeModule TCP-MIB 0
#popOpt

