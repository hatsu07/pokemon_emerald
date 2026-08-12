.include "asm/macros/semantic_raw_structs.inc"
	@ analyzed canonical ROM range 0x0845E998-0x0845F317
	@ pass3: gMapGroups + MapConnections; byte-verified
	@ pret/pokeemerald-jp direct xref for 0x0845E998: overworld.s: Overworld_GetMapHeaderByGroupAndId
	.globl gMapGroups
gMapGroups: @ 0x0845E998
	.4byte MapGroup_JP_00, MapGroup_JP_01, MapGroup_JP_02, MapGroup_JP_03, MapGroup_JP_04, MapGroup_JP_05
	.4byte MapGroup_JP_06, MapGroup_JP_07, MapGroup_JP_08, MapGroup_JP_09, MapGroup_JP_10, MapGroup_JP_11
	.4byte MapGroup_JP_12, MapGroup_JP_13, MapGroup_JP_14, MapGroup_JP_15, MapGroup_JP_16, MapGroup_JP_17
	.4byte MapGroup_JP_18, MapGroup_JP_19, MapGroup_JP_20, MapGroup_JP_21, MapGroup_JP_22, MapGroup_JP_23
	.4byte MapGroup_JP_24, MapGroup_JP_25, MapGroup_JP_26, MapGroup_JP_27, MapGroup_JP_28, MapGroup_JP_29
	.4byte MapGroup_JP_30, MapGroup_JP_31, MapGroup_JP_32, MapGroup_JP_33

MapConnection_JP_0845EA20: @ 0x0845EA20
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 16
MapConnections_JP_0845EA2C: @ 0x0845EA2C
	@ struct MapConnections
	semantic_map_connections 1, MapConnection_JP_0845EA20

MapConnection_JP_0845EA34: @ 0x0845EA34
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 18
MapConnection_JP_0845EA40: @ 0x0845EA40
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 16
MapConnection_JP_0845EA4C: @ 0x0845EA4C
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 17
MapConnections_JP_0845EA58: @ 0x0845EA58
	@ struct MapConnections
	semantic_map_connections 3, MapConnection_JP_0845EA34

MapConnection_JP_0845EA60: @ 0x0845EA60
	@ struct MapConnection
	semantic_map_connection 2, -60, 0, 21
MapConnection_JP_0845EA6C: @ 0x0845EA6C
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 22
MapConnections_JP_0845EA78: @ 0x0845EA78
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845EA60

MapConnection_JP_0845EA80: @ 0x0845EA80
	@ struct MapConnection
	semantic_map_connection 4, -40, 0, 27
MapConnections_JP_0845EA8C: @ 0x0845EA8C
	@ struct MapConnections
	semantic_map_connections 1, MapConnection_JP_0845EA80

MapConnection_JP_0845EA94: @ 0x0845EA94
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 29
MapConnection_JP_0845EAA0: @ 0x0845EAA0
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 28
MapConnections_JP_0845EAAC: @ 0x0845EAAC
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845EA94

MapConnection_JP_0845EAB4: @ 0x0845EAB4
	@ struct MapConnection
	semantic_map_connection 2, -80, 0, 31
MapConnection_JP_0845EAC0: @ 0x0845EAC0
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 32
MapConnections_JP_0845EACC: @ 0x0845EACC
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845EAB4

MapConnection_JP_0845EAD4: @ 0x0845EAD4
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 47
MapConnection_JP_0845EAE0: @ 0x0845EAE0
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 46
MapConnections_JP_0845EAEC: @ 0x0845EAEC
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845EAD4

MapConnection_JP_0845EAF4: @ 0x0845EAF4
	@ struct MapConnection
	semantic_map_connection 3, -50, 0, 19
MapConnection_JP_0845EB00: @ 0x0845EB00
	@ struct MapConnection
	semantic_map_connection 4, 10, 0, 17
MapConnections_JP_0845EB0C: @ 0x0845EB0C
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845EAF4

MapConnection_JP_0845EB14: @ 0x0845EB14
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 25
MapConnection_JP_0845EB20: @ 0x0845EB20
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 24
MapConnection_JP_0845EB2C: @ 0x0845EB2C
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 49
MapConnections_JP_0845EB38: @ 0x0845EB38
	@ struct MapConnections
	semantic_map_connections 3, MapConnection_JP_0845EB14

MapConnection_JP_0845EB40: @ 0x0845EB40
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 26
MapConnection_JP_0845EB4C: @ 0x0845EB4C
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 25
MapConnection_JP_0845EB58: @ 0x0845EB58
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 32
MapConnection_JP_0845EB64: @ 0x0845EB64
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 33
MapConnections_JP_0845EB70: @ 0x0845EB70
	@ struct MapConnections
	semantic_map_connections 4, MapConnection_JP_0845EB40

MapConnection_JP_0845EB78: @ 0x0845EB78
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 30
MapConnection_JP_0845EB84: @ 0x0845EB84
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 19
MapConnection_JP_0845EB90: @ 0x0845EB90
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 31
MapConnections_JP_0845EB9C: @ 0x0845EB9C
	@ struct MapConnections
	semantic_map_connections 3, MapConnection_JP_0845EB78

MapConnection_JP_0845EBA4: @ 0x0845EBA4
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 34
MapConnection_JP_0845EBB0: @ 0x0845EBB0
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 35
MapConnections_JP_0845EBBC: @ 0x0845EBBC
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845EBA4

MapConnection_JP_0845EBC4: @ 0x0845EBC4
	@ struct MapConnection
	semantic_map_connection 3, 10, 0, 36
MapConnection_JP_0845EBD0: @ 0x0845EBD0
	@ struct MapConnection
	semantic_map_connection 4, -10, 0, 39
MapConnections_JP_0845EBDC: @ 0x0845EBDC
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845EBC4

MapConnection_JP_0845EBE4: @ 0x0845EBE4
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 40
MapConnection_JP_0845EBF0: @ 0x0845EBF0
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 42
MapConnection_JP_0845EBFC: @ 0x0845EBFC
	@ struct MapConnection
	semantic_map_connection 3, -40, 0, 39
MapConnections_JP_0845EC08: @ 0x0845EC08
	@ struct MapConnections
	semantic_map_connections 3, MapConnection_JP_0845EBE4

UnusedMapConnections_JP_0845EC10: @ 0x0845EC10
	@ unreferenced zero-count MapConnections placeholder
	.4byte 0
	.4byte UnusedMapConnections_JP_0845EC10

MapConnection_JP_0845EC18: @ 0x0845EC18
	@ struct MapConnection
	semantic_map_connection 3, 40, 0, 43
MapConnections_JP_0845EC24: @ 0x0845EC24
	@ struct MapConnections
	semantic_map_connections 1, MapConnection_JP_0845EC18

MapConnection_JP_0845EC2C: @ 0x0845EC2C
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 10
MapConnection_JP_0845EC38: @ 0x0845EC38
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 9
MapConnections_JP_0845EC44: @ 0x0845EC44
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845EC2C

MapConnection_JP_0845EC4C: @ 0x0845EC4C
	@ struct MapConnection
	semantic_map_connection 3, -10, 0, 0
MapConnection_JP_0845EC58: @ 0x0845EC58
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 10
MapConnections_JP_0845EC64: @ 0x0845EC64
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845EC4C

MapConnection_JP_0845EC6C: @ 0x0845EC6C
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 10
MapConnection_JP_0845EC78: @ 0x0845EC78
	@ struct MapConnection
	semantic_map_connection 4, -60, 0, 25
MapConnections_JP_0845EC84: @ 0x0845EC84
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845EC6C

MapConnection_JP_0845EC8C: @ 0x0845EC8C
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 3
MapConnection_JP_0845EC98: @ 0x0845EC98
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 20
MapConnection_JP_0845ECA4: @ 0x0845ECA4
	@ struct MapConnection
	semantic_map_connection 4, 50, 0, 0
MapConnections_JP_0845ECB0: @ 0x0845ECB0
	@ struct MapConnections
	semantic_map_connections 3, MapConnection_JP_0845EC8C

MapConnection_JP_0845ECB8: @ 0x0845ECB8
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 19
MapConnection_JP_0845ECC4: @ 0x0845ECC4
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 21
MapConnection_JP_0845ECD0: @ 0x0845ECD0
	@ struct MapConnection
	semantic_map_connection 5, 0, 0, 55
MapConnections_JP_0845ECDC: @ 0x0845ECDC
	@ struct MapConnections
	semantic_map_connections 3, MapConnection_JP_0845ECB8

MapConnection_JP_0845ECE4: @ 0x0845ECE4
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 20
MapConnection_JP_0845ECF0: @ 0x0845ECF0
	@ struct MapConnection
	semantic_map_connection 1, 60, 0, 11
MapConnections_JP_0845ECFC: @ 0x0845ECFC
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845ECE4

MapConnection_JP_0845ED04: @ 0x0845ED04
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 11
MapConnection_JP_0845ED10: @ 0x0845ED10
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 23
MapConnections_JP_0845ED1C: @ 0x0845ED1C
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845ED04

MapConnection_JP_0845ED24: @ 0x0845ED24
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 22
MapConnection_JP_0845ED30: @ 0x0845ED30
	@ struct MapConnection
	semantic_map_connection 4, -40, 0, 24
MapConnections_JP_0845ED3C: @ 0x0845ED3C
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845ED24

MapConnection_JP_0845ED44: @ 0x0845ED44
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 1
MapConnection_JP_0845ED50: @ 0x0845ED50
	@ struct MapConnection
	semantic_map_connection 3, 40, 0, 23
MapConnections_JP_0845ED5C: @ 0x0845ED5C
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845ED44

MapConnection_JP_0845ED64: @ 0x0845ED64
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 2
MapConnection_JP_0845ED70: @ 0x0845ED70
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 1
MapConnection_JP_0845ED7C: @ 0x0845ED7C
	@ struct MapConnection
	semantic_map_connection 3, 60, 0, 18
MapConnections_JP_0845ED88: @ 0x0845ED88
	@ struct MapConnections
	semantic_map_connections 3, MapConnection_JP_0845ED64

MapConnection_JP_0845ED90: @ 0x0845ED90
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 2
MapConnection_JP_0845ED9C: @ 0x0845ED9C
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 28
MapConnection_JP_0845EDA8: @ 0x0845EDA8
	@ struct MapConnection
	semantic_map_connection 3, 20, 0, 27
MapConnections_JP_0845EDB4: @ 0x0845EDB4
	@ struct MapConnections
	semantic_map_connections 3, MapConnection_JP_0845ED90

MapConnection_JP_0845EDBC: @ 0x0845EDBC
	@ struct MapConnection
	semantic_map_connection 2, -60, 0, 28
MapConnection_JP_0845EDC8: @ 0x0845EDC8
	@ struct MapConnection
	semantic_map_connection 3, 40, 0, 12
MapConnection_JP_0845EDD4: @ 0x0845EDD4
	@ struct MapConnection
	semantic_map_connection 4, -20, 0, 26
MapConnections_JP_0845EDE0: @ 0x0845EDE0
	@ struct MapConnections
	semantic_map_connections 3, MapConnection_JP_0845EDBC

MapConnection_JP_0845EDE8: @ 0x0845EDE8
	@ struct MapConnection
	semantic_map_connection 1, 60, 0, 27
MapConnection_JP_0845EDF4: @ 0x0845EDF4
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 13
MapConnection_JP_0845EE00: @ 0x0845EE00
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 26
MapConnections_JP_0845EE0C: @ 0x0845EE0C
	@ struct MapConnections
	semantic_map_connections 3, MapConnection_JP_0845EDE8

MapConnection_JP_0845EE14: @ 0x0845EE14
	@ struct MapConnection
	semantic_map_connection 3, 40, 0, 30
MapConnection_JP_0845EE20: @ 0x0845EE20
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 13
MapConnections_JP_0845EE2C: @ 0x0845EE2C
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845EE14

MapConnection_JP_0845EE34: @ 0x0845EE34
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 3
MapConnection_JP_0845EE40: @ 0x0845EE40
	@ struct MapConnection
	semantic_map_connection 4, -40, 0, 29
MapConnections_JP_0845EE4C: @ 0x0845EE4C
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845EE34

MapConnection_JP_0845EE54: @ 0x0845EE54
	@ struct MapConnection
	semantic_map_connection 1, 80, 0, 14
MapConnection_JP_0845EE60: @ 0x0845EE60
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 3
MapConnections_JP_0845EE6C: @ 0x0845EE6C
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845EE54

MapConnection_JP_0845EE74: @ 0x0845EE74
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 14
MapConnection_JP_0845EE80: @ 0x0845EE80
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 2
MapConnections_JP_0845EE8C: @ 0x0845EE8C
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845EE74

MapConnection_JP_0845EE94: @ 0x0845EE94
	@ struct MapConnection
	semantic_map_connection 2, 40, 0, 34
MapConnection_JP_0845EEA0: @ 0x0845EEA0
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 2
MapConnection_JP_0845EEAC: @ 0x0845EEAC
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 38
MapConnections_JP_0845EEB8: @ 0x0845EEB8
	@ struct MapConnections
	semantic_map_connections 3, MapConnection_JP_0845EE94

MapConnection_JP_0845EEC0: @ 0x0845EEC0
	@ struct MapConnection
	semantic_map_connection 1, -40, 0, 33
MapConnection_JP_0845EECC: @ 0x0845EECC
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 4
MapConnections_JP_0845EED8: @ 0x0845EED8
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845EEC0

MapConnection_JP_0845EEE0: @ 0x0845EEE0
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 4
MapConnection_JP_0845EEEC: @ 0x0845EEEC
	@ struct MapConnection
	semantic_map_connection 4, 80, 0, 36
MapConnections_JP_0845EEF8: @ 0x0845EEF8
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845EEE0

MapConnection_JP_0845EF00: @ 0x0845EF00
	@ struct MapConnection
	semantic_map_connection 1, 20, 0, 37
MapConnection_JP_0845EF0C: @ 0x0845EF0C
	@ struct MapConnection
	semantic_map_connection 3, -80, 0, 35
MapConnection_JP_0845EF18: @ 0x0845EF18
	@ struct MapConnection
	semantic_map_connection 4, -10, 0, 5
MapConnections_JP_0845EF24: @ 0x0845EF24
	@ struct MapConnections
	semantic_map_connections 3, MapConnection_JP_0845EF00

MapConnection_JP_0845EF2C: @ 0x0845EF2C
	@ struct MapConnection
	semantic_map_connection 2, -20, 0, 36
MapConnection_JP_0845EF38: @ 0x0845EF38
	@ struct MapConnection
	semantic_map_connection 1, -100, 0, 38
MapConnections_JP_0845EF44: @ 0x0845EF44
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845EF2C

MapConnection_JP_0845EF4C: @ 0x0845EF4C
	@ struct MapConnection
	semantic_map_connection 2, 100, 0, 37
MapConnection_JP_0845EF58: @ 0x0845EF58
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 33
MapConnections_JP_0845EF64: @ 0x0845EF64
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845EF4C

MapConnection_JP_0845EF6C: @ 0x0845EF6C
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 41
MapConnection_JP_0845EF78: @ 0x0845EF78
	@ struct MapConnection
	semantic_map_connection 3, 10, 0, 5
MapConnection_JP_0845EF84: @ 0x0845EF84
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 40
MapConnection_JP_0845EF90: @ 0x0845EF90
	@ struct MapConnection
	semantic_map_connection 4, 40, 0, 6
MapConnection_JP_0845EF9C: @ 0x0845EF9C
	@ struct MapConnection
	semantic_map_connection 5, 0, 0, 50
MapConnections_JP_0845EFA8: @ 0x0845EFA8
	@ struct MapConnections
	semantic_map_connections 5, MapConnection_JP_0845EF6C

MapConnection_JP_0845EFB0: @ 0x0845EFB0
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 6
MapConnection_JP_0845EFBC: @ 0x0845EFBC
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 39
MapConnection_JP_0845EFC8: @ 0x0845EFC8
	@ struct MapConnection
	semantic_map_connection 5, 0, 0, 56
MapConnections_JP_0845EFD4: @ 0x0845EFD4
	@ struct MapConnections
	semantic_map_connections 3, MapConnection_JP_0845EFB0

MapConnection_JP_0845EFDC: @ 0x0845EFDC
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 39
MapConnection_JP_0845EFE8: @ 0x0845EFE8
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 42
MapConnection_JP_0845EFF4: @ 0x0845EFF4
	@ struct MapConnection
	semantic_map_connection 5, 0, 0, 51
MapConnections_JP_0845F000: @ 0x0845F000
	@ struct MapConnections
	semantic_map_connections 3, MapConnection_JP_0845EFDC

MapConnection_JP_0845F008: @ 0x0845F008
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 6
MapConnection_JP_0845F014: @ 0x0845F014
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 43
MapConnection_JP_0845F020: @ 0x0845F020
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 41
MapConnection_JP_0845F02C: @ 0x0845F02C
	@ struct MapConnection
	semantic_map_connection 5, 0, 0, 52
MapConnections_JP_0845F038: @ 0x0845F038
	@ struct MapConnections
	semantic_map_connections 4, MapConnection_JP_0845F008

MapConnection_JP_0845F040: @ 0x0845F040
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 42
MapConnection_JP_0845F04C: @ 0x0845F04C
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 44
MapConnection_JP_0845F058: @ 0x0845F058
	@ struct MapConnection
	semantic_map_connection 4, -40, 0, 8
MapConnection_JP_0845F064: @ 0x0845F064
	@ struct MapConnection
	semantic_map_connection 5, 0, 0, 53
MapConnections_JP_0845F070: @ 0x0845F070
	@ struct MapConnections
	semantic_map_connections 4, MapConnection_JP_0845F040

MapConnection_JP_0845F078: @ 0x0845F078
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 43
MapConnection_JP_0845F084: @ 0x0845F084
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 45
MapConnection_JP_0845F090: @ 0x0845F090
	@ struct MapConnection
	semantic_map_connection 5, 0, 0, 54
MapConnections_JP_0845F09C: @ 0x0845F09C
	@ struct MapConnections
	semantic_map_connections 3, MapConnection_JP_0845F078

MapConnection_JP_0845F0A4: @ 0x0845F0A4
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 46
MapConnection_JP_0845F0B0: @ 0x0845F0B0
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 44
MapConnections_JP_0845F0BC: @ 0x0845F0BC
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845F0A4

MapConnection_JP_0845F0C4: @ 0x0845F0C4
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 15
MapConnection_JP_0845F0D0: @ 0x0845F0D0
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 45
MapConnections_JP_0845F0DC: @ 0x0845F0DC
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845F0C4

MapConnection_JP_0845F0E4: @ 0x0845F0E4
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 48
MapConnection_JP_0845F0F0: @ 0x0845F0F0
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 15
MapConnections_JP_0845F0FC: @ 0x0845F0FC
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845F0E4

MapConnection_JP_0845F104: @ 0x0845F104
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 49
MapConnection_JP_0845F110: @ 0x0845F110
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 47
MapConnections_JP_0845F11C: @ 0x0845F11C
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845F104

MapConnection_JP_0845F124: @ 0x0845F124
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 1
MapConnection_JP_0845F130: @ 0x0845F130
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 48
MapConnections_JP_0845F13C: @ 0x0845F13C
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845F124

MapConnection_JP_0845F144: @ 0x0845F144
	@ struct MapConnection
	semantic_map_connection 6, 0, 0, 20
MapConnections_JP_0845F150: @ 0x0845F150
	@ struct MapConnections
	semantic_map_connections 1, MapConnection_JP_0845F144

MapConnection_JP_0845F158: @ 0x0845F158
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 51
MapConnection_JP_0845F164: @ 0x0845F164
	@ struct MapConnection
	semantic_map_connection 6, 0, 0, 39
MapConnections_JP_0845F170: @ 0x0845F170
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845F158

MapConnection_JP_0845F178: @ 0x0845F178
	@ struct MapConnection
	semantic_map_connection 6, 0, 0, 40
MapConnections_JP_0845F184: @ 0x0845F184
	@ struct MapConnections
	semantic_map_connections 1, MapConnection_JP_0845F178

MapConnection_JP_0845F18C: @ 0x0845F18C
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 50
MapConnection_JP_0845F198: @ 0x0845F198
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 52
MapConnection_JP_0845F1A4: @ 0x0845F1A4
	@ struct MapConnection
	semantic_map_connection 6, 0, 0, 41
MapConnections_JP_0845F1B0: @ 0x0845F1B0
	@ struct MapConnections
	semantic_map_connections 3, MapConnection_JP_0845F18C

MapConnection_JP_0845F1B8: @ 0x0845F1B8
	@ struct MapConnection
	semantic_map_connection 6, 0, 0, 42
MapConnection_JP_0845F1C4: @ 0x0845F1C4
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 51
MapConnection_JP_0845F1D0: @ 0x0845F1D0
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 53
MapConnections_JP_0845F1DC: @ 0x0845F1DC
	@ struct MapConnections
	semantic_map_connections 3, MapConnection_JP_0845F1B8

MapConnection_JP_0845F1E4: @ 0x0845F1E4
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 52
MapConnection_JP_0845F1F0: @ 0x0845F1F0
	@ struct MapConnection
	semantic_map_connection 6, 0, 0, 43
MapConnections_JP_0845F1FC: @ 0x0845F1FC
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845F1E4

MapConnection_JP_0845F204: @ 0x0845F204
	@ struct MapConnection
	semantic_map_connection 6, 0, 0, 44
MapConnections_JP_0845F210: @ 0x0845F210
	@ struct MapConnections
	semantic_map_connections 1, MapConnection_JP_0845F204

MapConnection_JP_0845F218: @ 0x0845F218
	@ struct MapConnection
	semantic_map_connection 4, 0, 26, 1
MapConnection_JP_0845F224: @ 0x0845F224
	@ struct MapConnection
	semantic_map_connection 1, 0, 26, 2
MapConnections_JP_0845F230: @ 0x0845F230
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845F218

MapConnection_JP_0845F238: @ 0x0845F238
	@ struct MapConnection
	semantic_map_connection 3, 0, 26, 0
MapConnection_JP_0845F244: @ 0x0845F244
	@ struct MapConnection
	semantic_map_connection 1, 0, 26, 3
MapConnection_JP_0845F250: @ 0x0845F250
	@ struct MapConnection
	semantic_map_connection 4, 0, 26, 12
MapConnections_JP_0845F25C: @ 0x0845F25C
	@ struct MapConnections
	semantic_map_connections 3, MapConnection_JP_0845F238

MapConnection_JP_0845F264: @ 0x0845F264
	@ struct MapConnection
	semantic_map_connection 2, 0, 26, 0
MapConnection_JP_0845F270: @ 0x0845F270
	@ struct MapConnection
	semantic_map_connection 4, 0, 26, 3
MapConnections_JP_0845F27C: @ 0x0845F27C
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845F264

MapConnection_JP_0845F284: @ 0x0845F284
	@ struct MapConnection
	semantic_map_connection 2, 0, 26, 1
MapConnection_JP_0845F290: @ 0x0845F290
	@ struct MapConnection
	semantic_map_connection 3, 0, 26, 2
MapConnection_JP_0845F29C: @ 0x0845F29C
	@ struct MapConnection
	semantic_map_connection 4, 0, 26, 13
MapConnections_JP_0845F2A8: @ 0x0845F2A8
	@ struct MapConnections
	semantic_map_connections 3, MapConnection_JP_0845F284

MapConnection_JP_0845F2B0: @ 0x0845F2B0
	@ struct MapConnection
	semantic_map_connection 3, 0, 26, 1
MapConnection_JP_0845F2BC: @ 0x0845F2BC
	@ struct MapConnection
	semantic_map_connection 1, 0, 26, 13
MapConnections_JP_0845F2C8: @ 0x0845F2C8
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845F2B0

MapConnection_JP_0845F2D0: @ 0x0845F2D0
	@ struct MapConnection
	semantic_map_connection 3, 0, 26, 3
MapConnection_JP_0845F2DC: @ 0x0845F2DC
	@ struct MapConnection
	semantic_map_connection 2, 0, 26, 12
MapConnections_JP_0845F2E8: @ 0x0845F2E8
	@ struct MapConnections
	semantic_map_connections 2, MapConnection_JP_0845F2D0

MapConnection_JP_0845F2F0: @ 0x0845F2F0
	@ struct MapConnection
	semantic_map_connection 4, 0, 26, 14
MapConnections_JP_0845F2FC: @ 0x0845F2FC
	@ struct MapConnections
	semantic_map_connections 1, MapConnection_JP_0845F2F0

MapConnection_JP_0845F304: @ 0x0845F304
	@ struct MapConnection
	semantic_map_connection 3, 0, 26, 4
MapConnections_JP_0845F310: @ 0x0845F310
	@ struct MapConnections
	semantic_map_connections 1, MapConnection_JP_0845F304

	.globl gUnknown_845F318
gUnknown_845F318: @ 0x0845F318
	.space 0x4, 0x00
