	.globl gUnknown_845E998
gUnknown_845E998: @ 0x0845E998
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
	.4byte 2
	.4byte 0
	.byte 0, 16
	.2byte 0
MapConnections_JP_0845EA2C: @ 0x0845EA2C
	@ struct MapConnections
	.4byte 1
	.4byte MapConnection_JP_0845EA20

MapConnection_JP_0845EA34: @ 0x0845EA34
	@ struct MapConnection
	.4byte 2
	.4byte 0
	.byte 0, 18
	.2byte 0
MapConnection_JP_0845EA40: @ 0x0845EA40
	@ struct MapConnection
	.4byte 1
	.4byte 0
	.byte 0, 16
	.2byte 0
MapConnection_JP_0845EA4C: @ 0x0845EA4C
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 0, 17
	.2byte 0
MapConnections_JP_0845EA58: @ 0x0845EA58
	@ struct MapConnections
	.4byte 3
	.4byte MapConnection_JP_0845EA34

MapConnection_JP_0845EA60: @ 0x0845EA60
	@ struct MapConnection
	.4byte 2
	.4byte -60
	.byte 0, 21
	.2byte 0
MapConnection_JP_0845EA6C: @ 0x0845EA6C
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 0, 22
	.2byte 0
MapConnections_JP_0845EA78: @ 0x0845EA78
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845EA60

MapConnection_JP_0845EA80: @ 0x0845EA80
	@ struct MapConnection
	.4byte 4
	.4byte -40
	.byte 0, 27
	.2byte 0
MapConnections_JP_0845EA8C: @ 0x0845EA8C
	@ struct MapConnections
	.4byte 1
	.4byte MapConnection_JP_0845EA80

MapConnection_JP_0845EA94: @ 0x0845EA94
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 0, 29
	.2byte 0
MapConnection_JP_0845EAA0: @ 0x0845EAA0
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 0, 28
	.2byte 0
MapConnections_JP_0845EAAC: @ 0x0845EAAC
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845EA94

MapConnection_JP_0845EAB4: @ 0x0845EAB4
	@ struct MapConnection
	.4byte 2
	.4byte -80
	.byte 0, 31
	.2byte 0
MapConnection_JP_0845EAC0: @ 0x0845EAC0
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 0, 32
	.2byte 0
MapConnections_JP_0845EACC: @ 0x0845EACC
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845EAB4

MapConnection_JP_0845EAD4: @ 0x0845EAD4
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 0, 47
	.2byte 0
MapConnection_JP_0845EAE0: @ 0x0845EAE0
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 0, 46
	.2byte 0
MapConnections_JP_0845EAEC: @ 0x0845EAEC
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845EAD4

MapConnection_JP_0845EAF4: @ 0x0845EAF4
	@ struct MapConnection
	.4byte 3
	.4byte -50
	.byte 0, 19
	.2byte 0
MapConnection_JP_0845EB00: @ 0x0845EB00
	@ struct MapConnection
	.4byte 4
	.4byte 10
	.byte 0, 17
	.2byte 0
MapConnections_JP_0845EB0C: @ 0x0845EB0C
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845EAF4

MapConnection_JP_0845EB14: @ 0x0845EB14
	@ struct MapConnection
	.4byte 2
	.4byte 0
	.byte 0, 25
	.2byte 0
MapConnection_JP_0845EB20: @ 0x0845EB20
	@ struct MapConnection
	.4byte 1
	.4byte 0
	.byte 0, 24
	.2byte 0
MapConnection_JP_0845EB2C: @ 0x0845EB2C
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 0, 49
	.2byte 0
MapConnections_JP_0845EB38: @ 0x0845EB38
	@ struct MapConnections
	.4byte 3
	.4byte MapConnection_JP_0845EB14

MapConnection_JP_0845EB40: @ 0x0845EB40
	@ struct MapConnection
	.4byte 2
	.4byte 0
	.byte 0, 26
	.2byte 0
MapConnection_JP_0845EB4C: @ 0x0845EB4C
	@ struct MapConnection
	.4byte 1
	.4byte 0
	.byte 0, 25
	.2byte 0
MapConnection_JP_0845EB58: @ 0x0845EB58
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 0, 32
	.2byte 0
MapConnection_JP_0845EB64: @ 0x0845EB64
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 0, 33
	.2byte 0
MapConnections_JP_0845EB70: @ 0x0845EB70
	@ struct MapConnections
	.4byte 4
	.4byte MapConnection_JP_0845EB40

MapConnection_JP_0845EB78: @ 0x0845EB78
	@ struct MapConnection
	.4byte 2
	.4byte 0
	.byte 0, 30
	.2byte 0
MapConnection_JP_0845EB84: @ 0x0845EB84
	@ struct MapConnection
	.4byte 1
	.4byte 0
	.byte 0, 19
	.2byte 0
MapConnection_JP_0845EB90: @ 0x0845EB90
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 0, 31
	.2byte 0
MapConnections_JP_0845EB9C: @ 0x0845EB9C
	@ struct MapConnections
	.4byte 3
	.4byte MapConnection_JP_0845EB78

MapConnection_JP_0845EBA4: @ 0x0845EBA4
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 0, 34
	.2byte 0
MapConnection_JP_0845EBB0: @ 0x0845EBB0
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 0, 35
	.2byte 0
MapConnections_JP_0845EBBC: @ 0x0845EBBC
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845EBA4

MapConnection_JP_0845EBC4: @ 0x0845EBC4
	@ struct MapConnection
	.4byte 3
	.4byte 10
	.byte 0, 36
	.2byte 0
MapConnection_JP_0845EBD0: @ 0x0845EBD0
	@ struct MapConnection
	.4byte 4
	.4byte -10
	.byte 0, 39
	.2byte 0
MapConnections_JP_0845EBDC: @ 0x0845EBDC
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845EBC4

MapConnection_JP_0845EBE4: @ 0x0845EBE4
	@ struct MapConnection
	.4byte 2
	.4byte 0
	.byte 0, 40
	.2byte 0
MapConnection_JP_0845EBF0: @ 0x0845EBF0
	@ struct MapConnection
	.4byte 1
	.4byte 0
	.byte 0, 42
	.2byte 0
MapConnection_JP_0845EBFC: @ 0x0845EBFC
	@ struct MapConnection
	.4byte 3
	.4byte -40
	.byte 0, 39
	.2byte 0
MapConnections_JP_0845EC08: @ 0x0845EC08
	@ struct MapConnections
	.4byte 3
	.4byte MapConnection_JP_0845EBE4

UnusedMapConnections_JP_0845EC10: @ 0x0845EC10
	@ unreferenced zero-count MapConnections placeholder
	.4byte 0
	.4byte UnusedMapConnections_JP_0845EC10

MapConnection_JP_0845EC18: @ 0x0845EC18
	@ struct MapConnection
	.4byte 3
	.4byte 40
	.byte 0, 43
	.2byte 0
MapConnections_JP_0845EC24: @ 0x0845EC24
	@ struct MapConnections
	.4byte 1
	.4byte MapConnection_JP_0845EC18

MapConnection_JP_0845EC2C: @ 0x0845EC2C
	@ struct MapConnection
	.4byte 2
	.4byte 0
	.byte 0, 10
	.2byte 0
MapConnection_JP_0845EC38: @ 0x0845EC38
	@ struct MapConnection
	.4byte 1
	.4byte 0
	.byte 0, 9
	.2byte 0
MapConnections_JP_0845EC44: @ 0x0845EC44
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845EC2C

MapConnection_JP_0845EC4C: @ 0x0845EC4C
	@ struct MapConnection
	.4byte 3
	.4byte -10
	.byte 0, 0
	.2byte 0
MapConnection_JP_0845EC58: @ 0x0845EC58
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 0, 10
	.2byte 0
MapConnections_JP_0845EC64: @ 0x0845EC64
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845EC4C

MapConnection_JP_0845EC6C: @ 0x0845EC6C
	@ struct MapConnection
	.4byte 1
	.4byte 0
	.byte 0, 10
	.2byte 0
MapConnection_JP_0845EC78: @ 0x0845EC78
	@ struct MapConnection
	.4byte 4
	.4byte -60
	.byte 0, 25
	.2byte 0
MapConnections_JP_0845EC84: @ 0x0845EC84
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845EC6C

MapConnection_JP_0845EC8C: @ 0x0845EC8C
	@ struct MapConnection
	.4byte 2
	.4byte 0
	.byte 0, 3
	.2byte 0
MapConnection_JP_0845EC98: @ 0x0845EC98
	@ struct MapConnection
	.4byte 1
	.4byte 0
	.byte 0, 20
	.2byte 0
MapConnection_JP_0845ECA4: @ 0x0845ECA4
	@ struct MapConnection
	.4byte 4
	.4byte 50
	.byte 0, 0
	.2byte 0
MapConnections_JP_0845ECB0: @ 0x0845ECB0
	@ struct MapConnections
	.4byte 3
	.4byte MapConnection_JP_0845EC8C

MapConnection_JP_0845ECB8: @ 0x0845ECB8
	@ struct MapConnection
	.4byte 2
	.4byte 0
	.byte 0, 19
	.2byte 0
MapConnection_JP_0845ECC4: @ 0x0845ECC4
	@ struct MapConnection
	.4byte 1
	.4byte 0
	.byte 0, 21
	.2byte 0
MapConnection_JP_0845ECD0: @ 0x0845ECD0
	@ struct MapConnection
	.4byte 5
	.4byte 0
	.byte 0, 55
	.2byte 0
MapConnections_JP_0845ECDC: @ 0x0845ECDC
	@ struct MapConnections
	.4byte 3
	.4byte MapConnection_JP_0845ECB8

MapConnection_JP_0845ECE4: @ 0x0845ECE4
	@ struct MapConnection
	.4byte 2
	.4byte 0
	.byte 0, 20
	.2byte 0
MapConnection_JP_0845ECF0: @ 0x0845ECF0
	@ struct MapConnection
	.4byte 1
	.4byte 60
	.byte 0, 11
	.2byte 0
MapConnections_JP_0845ECFC: @ 0x0845ECFC
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845ECE4

MapConnection_JP_0845ED04: @ 0x0845ED04
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 0, 11
	.2byte 0
MapConnection_JP_0845ED10: @ 0x0845ED10
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 0, 23
	.2byte 0
MapConnections_JP_0845ED1C: @ 0x0845ED1C
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845ED04

MapConnection_JP_0845ED24: @ 0x0845ED24
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 0, 22
	.2byte 0
MapConnection_JP_0845ED30: @ 0x0845ED30
	@ struct MapConnection
	.4byte 4
	.4byte -40
	.byte 0, 24
	.2byte 0
MapConnections_JP_0845ED3C: @ 0x0845ED3C
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845ED24

MapConnection_JP_0845ED44: @ 0x0845ED44
	@ struct MapConnection
	.4byte 2
	.4byte 0
	.byte 0, 1
	.2byte 0
MapConnection_JP_0845ED50: @ 0x0845ED50
	@ struct MapConnection
	.4byte 3
	.4byte 40
	.byte 0, 23
	.2byte 0
MapConnections_JP_0845ED5C: @ 0x0845ED5C
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845ED44

MapConnection_JP_0845ED64: @ 0x0845ED64
	@ struct MapConnection
	.4byte 2
	.4byte 0
	.byte 0, 2
	.2byte 0
MapConnection_JP_0845ED70: @ 0x0845ED70
	@ struct MapConnection
	.4byte 1
	.4byte 0
	.byte 0, 1
	.2byte 0
MapConnection_JP_0845ED7C: @ 0x0845ED7C
	@ struct MapConnection
	.4byte 3
	.4byte 60
	.byte 0, 18
	.2byte 0
MapConnections_JP_0845ED88: @ 0x0845ED88
	@ struct MapConnections
	.4byte 3
	.4byte MapConnection_JP_0845ED64

MapConnection_JP_0845ED90: @ 0x0845ED90
	@ struct MapConnection
	.4byte 1
	.4byte 0
	.byte 0, 2
	.2byte 0
MapConnection_JP_0845ED9C: @ 0x0845ED9C
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 0, 28
	.2byte 0
MapConnection_JP_0845EDA8: @ 0x0845EDA8
	@ struct MapConnection
	.4byte 3
	.4byte 20
	.byte 0, 27
	.2byte 0
MapConnections_JP_0845EDB4: @ 0x0845EDB4
	@ struct MapConnections
	.4byte 3
	.4byte MapConnection_JP_0845ED90

MapConnection_JP_0845EDBC: @ 0x0845EDBC
	@ struct MapConnection
	.4byte 2
	.4byte -60
	.byte 0, 28
	.2byte 0
MapConnection_JP_0845EDC8: @ 0x0845EDC8
	@ struct MapConnection
	.4byte 3
	.4byte 40
	.byte 0, 12
	.2byte 0
MapConnection_JP_0845EDD4: @ 0x0845EDD4
	@ struct MapConnection
	.4byte 4
	.4byte -20
	.byte 0, 26
	.2byte 0
MapConnections_JP_0845EDE0: @ 0x0845EDE0
	@ struct MapConnections
	.4byte 3
	.4byte MapConnection_JP_0845EDBC

MapConnection_JP_0845EDE8: @ 0x0845EDE8
	@ struct MapConnection
	.4byte 1
	.4byte 60
	.byte 0, 27
	.2byte 0
MapConnection_JP_0845EDF4: @ 0x0845EDF4
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 0, 13
	.2byte 0
MapConnection_JP_0845EE00: @ 0x0845EE00
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 0, 26
	.2byte 0
MapConnections_JP_0845EE0C: @ 0x0845EE0C
	@ struct MapConnections
	.4byte 3
	.4byte MapConnection_JP_0845EDE8

MapConnection_JP_0845EE14: @ 0x0845EE14
	@ struct MapConnection
	.4byte 3
	.4byte 40
	.byte 0, 30
	.2byte 0
MapConnection_JP_0845EE20: @ 0x0845EE20
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 0, 13
	.2byte 0
MapConnections_JP_0845EE2C: @ 0x0845EE2C
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845EE14

MapConnection_JP_0845EE34: @ 0x0845EE34
	@ struct MapConnection
	.4byte 1
	.4byte 0
	.byte 0, 3
	.2byte 0
MapConnection_JP_0845EE40: @ 0x0845EE40
	@ struct MapConnection
	.4byte 4
	.4byte -40
	.byte 0, 29
	.2byte 0
MapConnections_JP_0845EE4C: @ 0x0845EE4C
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845EE34

MapConnection_JP_0845EE54: @ 0x0845EE54
	@ struct MapConnection
	.4byte 1
	.4byte 80
	.byte 0, 14
	.2byte 0
MapConnection_JP_0845EE60: @ 0x0845EE60
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 0, 3
	.2byte 0
MapConnections_JP_0845EE6C: @ 0x0845EE6C
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845EE54

MapConnection_JP_0845EE74: @ 0x0845EE74
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 0, 14
	.2byte 0
MapConnection_JP_0845EE80: @ 0x0845EE80
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 0, 2
	.2byte 0
MapConnections_JP_0845EE8C: @ 0x0845EE8C
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845EE74

MapConnection_JP_0845EE94: @ 0x0845EE94
	@ struct MapConnection
	.4byte 2
	.4byte 40
	.byte 0, 34
	.2byte 0
MapConnection_JP_0845EEA0: @ 0x0845EEA0
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 0, 2
	.2byte 0
MapConnection_JP_0845EEAC: @ 0x0845EEAC
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 0, 38
	.2byte 0
MapConnections_JP_0845EEB8: @ 0x0845EEB8
	@ struct MapConnections
	.4byte 3
	.4byte MapConnection_JP_0845EE94

MapConnection_JP_0845EEC0: @ 0x0845EEC0
	@ struct MapConnection
	.4byte 1
	.4byte -40
	.byte 0, 33
	.2byte 0
MapConnection_JP_0845EECC: @ 0x0845EECC
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 0, 4
	.2byte 0
MapConnections_JP_0845EED8: @ 0x0845EED8
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845EEC0

MapConnection_JP_0845EEE0: @ 0x0845EEE0
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 0, 4
	.2byte 0
MapConnection_JP_0845EEEC: @ 0x0845EEEC
	@ struct MapConnection
	.4byte 4
	.4byte 80
	.byte 0, 36
	.2byte 0
MapConnections_JP_0845EEF8: @ 0x0845EEF8
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845EEE0

MapConnection_JP_0845EF00: @ 0x0845EF00
	@ struct MapConnection
	.4byte 1
	.4byte 20
	.byte 0, 37
	.2byte 0
MapConnection_JP_0845EF0C: @ 0x0845EF0C
	@ struct MapConnection
	.4byte 3
	.4byte -80
	.byte 0, 35
	.2byte 0
MapConnection_JP_0845EF18: @ 0x0845EF18
	@ struct MapConnection
	.4byte 4
	.4byte -10
	.byte 0, 5
	.2byte 0
MapConnections_JP_0845EF24: @ 0x0845EF24
	@ struct MapConnections
	.4byte 3
	.4byte MapConnection_JP_0845EF00

MapConnection_JP_0845EF2C: @ 0x0845EF2C
	@ struct MapConnection
	.4byte 2
	.4byte -20
	.byte 0, 36
	.2byte 0
MapConnection_JP_0845EF38: @ 0x0845EF38
	@ struct MapConnection
	.4byte 1
	.4byte -100
	.byte 0, 38
	.2byte 0
MapConnections_JP_0845EF44: @ 0x0845EF44
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845EF2C

MapConnection_JP_0845EF4C: @ 0x0845EF4C
	@ struct MapConnection
	.4byte 2
	.4byte 100
	.byte 0, 37
	.2byte 0
MapConnection_JP_0845EF58: @ 0x0845EF58
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 0, 33
	.2byte 0
MapConnections_JP_0845EF64: @ 0x0845EF64
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845EF4C

MapConnection_JP_0845EF6C: @ 0x0845EF6C
	@ struct MapConnection
	.4byte 1
	.4byte 0
	.byte 0, 41
	.2byte 0
MapConnection_JP_0845EF78: @ 0x0845EF78
	@ struct MapConnection
	.4byte 3
	.4byte 10
	.byte 0, 5
	.2byte 0
MapConnection_JP_0845EF84: @ 0x0845EF84
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 0, 40
	.2byte 0
MapConnection_JP_0845EF90: @ 0x0845EF90
	@ struct MapConnection
	.4byte 4
	.4byte 40
	.byte 0, 6
	.2byte 0
MapConnection_JP_0845EF9C: @ 0x0845EF9C
	@ struct MapConnection
	.4byte 5
	.4byte 0
	.byte 0, 50
	.2byte 0
MapConnections_JP_0845EFA8: @ 0x0845EFA8
	@ struct MapConnections
	.4byte 5
	.4byte MapConnection_JP_0845EF6C

MapConnection_JP_0845EFB0: @ 0x0845EFB0
	@ struct MapConnection
	.4byte 1
	.4byte 0
	.byte 0, 6
	.2byte 0
MapConnection_JP_0845EFBC: @ 0x0845EFBC
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 0, 39
	.2byte 0
MapConnection_JP_0845EFC8: @ 0x0845EFC8
	@ struct MapConnection
	.4byte 5
	.4byte 0
	.byte 0, 56
	.2byte 0
MapConnections_JP_0845EFD4: @ 0x0845EFD4
	@ struct MapConnections
	.4byte 3
	.4byte MapConnection_JP_0845EFB0

MapConnection_JP_0845EFDC: @ 0x0845EFDC
	@ struct MapConnection
	.4byte 2
	.4byte 0
	.byte 0, 39
	.2byte 0
MapConnection_JP_0845EFE8: @ 0x0845EFE8
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 0, 42
	.2byte 0
MapConnection_JP_0845EFF4: @ 0x0845EFF4
	@ struct MapConnection
	.4byte 5
	.4byte 0
	.byte 0, 51
	.2byte 0
MapConnections_JP_0845F000: @ 0x0845F000
	@ struct MapConnections
	.4byte 3
	.4byte MapConnection_JP_0845EFDC

MapConnection_JP_0845F008: @ 0x0845F008
	@ struct MapConnection
	.4byte 2
	.4byte 0
	.byte 0, 6
	.2byte 0
MapConnection_JP_0845F014: @ 0x0845F014
	@ struct MapConnection
	.4byte 1
	.4byte 0
	.byte 0, 43
	.2byte 0
MapConnection_JP_0845F020: @ 0x0845F020
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 0, 41
	.2byte 0
MapConnection_JP_0845F02C: @ 0x0845F02C
	@ struct MapConnection
	.4byte 5
	.4byte 0
	.byte 0, 52
	.2byte 0
MapConnections_JP_0845F038: @ 0x0845F038
	@ struct MapConnections
	.4byte 4
	.4byte MapConnection_JP_0845F008

MapConnection_JP_0845F040: @ 0x0845F040
	@ struct MapConnection
	.4byte 2
	.4byte 0
	.byte 0, 42
	.2byte 0
MapConnection_JP_0845F04C: @ 0x0845F04C
	@ struct MapConnection
	.4byte 1
	.4byte 0
	.byte 0, 44
	.2byte 0
MapConnection_JP_0845F058: @ 0x0845F058
	@ struct MapConnection
	.4byte 4
	.4byte -40
	.byte 0, 8
	.2byte 0
MapConnection_JP_0845F064: @ 0x0845F064
	@ struct MapConnection
	.4byte 5
	.4byte 0
	.byte 0, 53
	.2byte 0
MapConnections_JP_0845F070: @ 0x0845F070
	@ struct MapConnections
	.4byte 4
	.4byte MapConnection_JP_0845F040

MapConnection_JP_0845F078: @ 0x0845F078
	@ struct MapConnection
	.4byte 2
	.4byte 0
	.byte 0, 43
	.2byte 0
MapConnection_JP_0845F084: @ 0x0845F084
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 0, 45
	.2byte 0
MapConnection_JP_0845F090: @ 0x0845F090
	@ struct MapConnection
	.4byte 5
	.4byte 0
	.byte 0, 54
	.2byte 0
MapConnections_JP_0845F09C: @ 0x0845F09C
	@ struct MapConnections
	.4byte 3
	.4byte MapConnection_JP_0845F078

MapConnection_JP_0845F0A4: @ 0x0845F0A4
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 0, 46
	.2byte 0
MapConnection_JP_0845F0B0: @ 0x0845F0B0
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 0, 44
	.2byte 0
MapConnections_JP_0845F0BC: @ 0x0845F0BC
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845F0A4

MapConnection_JP_0845F0C4: @ 0x0845F0C4
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 0, 15
	.2byte 0
MapConnection_JP_0845F0D0: @ 0x0845F0D0
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 0, 45
	.2byte 0
MapConnections_JP_0845F0DC: @ 0x0845F0DC
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845F0C4

MapConnection_JP_0845F0E4: @ 0x0845F0E4
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 0, 48
	.2byte 0
MapConnection_JP_0845F0F0: @ 0x0845F0F0
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 0, 15
	.2byte 0
MapConnections_JP_0845F0FC: @ 0x0845F0FC
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845F0E4

MapConnection_JP_0845F104: @ 0x0845F104
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 0, 49
	.2byte 0
MapConnection_JP_0845F110: @ 0x0845F110
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 0, 47
	.2byte 0
MapConnections_JP_0845F11C: @ 0x0845F11C
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845F104

MapConnection_JP_0845F124: @ 0x0845F124
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 0, 1
	.2byte 0
MapConnection_JP_0845F130: @ 0x0845F130
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 0, 48
	.2byte 0
MapConnections_JP_0845F13C: @ 0x0845F13C
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845F124

MapConnection_JP_0845F144: @ 0x0845F144
	@ struct MapConnection
	.4byte 6
	.4byte 0
	.byte 0, 20
	.2byte 0
MapConnections_JP_0845F150: @ 0x0845F150
	@ struct MapConnections
	.4byte 1
	.4byte MapConnection_JP_0845F144

MapConnection_JP_0845F158: @ 0x0845F158
	@ struct MapConnection
	.4byte 1
	.4byte 0
	.byte 0, 51
	.2byte 0
MapConnection_JP_0845F164: @ 0x0845F164
	@ struct MapConnection
	.4byte 6
	.4byte 0
	.byte 0, 39
	.2byte 0
MapConnections_JP_0845F170: @ 0x0845F170
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845F158

MapConnection_JP_0845F178: @ 0x0845F178
	@ struct MapConnection
	.4byte 6
	.4byte 0
	.byte 0, 40
	.2byte 0
MapConnections_JP_0845F184: @ 0x0845F184
	@ struct MapConnections
	.4byte 1
	.4byte MapConnection_JP_0845F178

MapConnection_JP_0845F18C: @ 0x0845F18C
	@ struct MapConnection
	.4byte 2
	.4byte 0
	.byte 0, 50
	.2byte 0
MapConnection_JP_0845F198: @ 0x0845F198
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 0, 52
	.2byte 0
MapConnection_JP_0845F1A4: @ 0x0845F1A4
	@ struct MapConnection
	.4byte 6
	.4byte 0
	.byte 0, 41
	.2byte 0
MapConnections_JP_0845F1B0: @ 0x0845F1B0
	@ struct MapConnections
	.4byte 3
	.4byte MapConnection_JP_0845F18C

MapConnection_JP_0845F1B8: @ 0x0845F1B8
	@ struct MapConnection
	.4byte 6
	.4byte 0
	.byte 0, 42
	.2byte 0
MapConnection_JP_0845F1C4: @ 0x0845F1C4
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 0, 51
	.2byte 0
MapConnection_JP_0845F1D0: @ 0x0845F1D0
	@ struct MapConnection
	.4byte 1
	.4byte 0
	.byte 0, 53
	.2byte 0
MapConnections_JP_0845F1DC: @ 0x0845F1DC
	@ struct MapConnections
	.4byte 3
	.4byte MapConnection_JP_0845F1B8

MapConnection_JP_0845F1E4: @ 0x0845F1E4
	@ struct MapConnection
	.4byte 2
	.4byte 0
	.byte 0, 52
	.2byte 0
MapConnection_JP_0845F1F0: @ 0x0845F1F0
	@ struct MapConnection
	.4byte 6
	.4byte 0
	.byte 0, 43
	.2byte 0
MapConnections_JP_0845F1FC: @ 0x0845F1FC
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845F1E4

MapConnection_JP_0845F204: @ 0x0845F204
	@ struct MapConnection
	.4byte 6
	.4byte 0
	.byte 0, 44
	.2byte 0
MapConnections_JP_0845F210: @ 0x0845F210
	@ struct MapConnections
	.4byte 1
	.4byte MapConnection_JP_0845F204

MapConnection_JP_0845F218: @ 0x0845F218
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 26, 1
	.2byte 0
MapConnection_JP_0845F224: @ 0x0845F224
	@ struct MapConnection
	.4byte 1
	.4byte 0
	.byte 26, 2
	.2byte 0
MapConnections_JP_0845F230: @ 0x0845F230
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845F218

MapConnection_JP_0845F238: @ 0x0845F238
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 26, 0
	.2byte 0
MapConnection_JP_0845F244: @ 0x0845F244
	@ struct MapConnection
	.4byte 1
	.4byte 0
	.byte 26, 3
	.2byte 0
MapConnection_JP_0845F250: @ 0x0845F250
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 26, 12
	.2byte 0
MapConnections_JP_0845F25C: @ 0x0845F25C
	@ struct MapConnections
	.4byte 3
	.4byte MapConnection_JP_0845F238

MapConnection_JP_0845F264: @ 0x0845F264
	@ struct MapConnection
	.4byte 2
	.4byte 0
	.byte 26, 0
	.2byte 0
MapConnection_JP_0845F270: @ 0x0845F270
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 26, 3
	.2byte 0
MapConnections_JP_0845F27C: @ 0x0845F27C
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845F264

MapConnection_JP_0845F284: @ 0x0845F284
	@ struct MapConnection
	.4byte 2
	.4byte 0
	.byte 26, 1
	.2byte 0
MapConnection_JP_0845F290: @ 0x0845F290
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 26, 2
	.2byte 0
MapConnection_JP_0845F29C: @ 0x0845F29C
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 26, 13
	.2byte 0
MapConnections_JP_0845F2A8: @ 0x0845F2A8
	@ struct MapConnections
	.4byte 3
	.4byte MapConnection_JP_0845F284

MapConnection_JP_0845F2B0: @ 0x0845F2B0
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 26, 1
	.2byte 0
MapConnection_JP_0845F2BC: @ 0x0845F2BC
	@ struct MapConnection
	.4byte 1
	.4byte 0
	.byte 26, 13
	.2byte 0
MapConnections_JP_0845F2C8: @ 0x0845F2C8
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845F2B0

MapConnection_JP_0845F2D0: @ 0x0845F2D0
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 26, 3
	.2byte 0
MapConnection_JP_0845F2DC: @ 0x0845F2DC
	@ struct MapConnection
	.4byte 2
	.4byte 0
	.byte 26, 12
	.2byte 0
MapConnections_JP_0845F2E8: @ 0x0845F2E8
	@ struct MapConnections
	.4byte 2
	.4byte MapConnection_JP_0845F2D0

MapConnection_JP_0845F2F0: @ 0x0845F2F0
	@ struct MapConnection
	.4byte 4
	.4byte 0
	.byte 26, 14
	.2byte 0
MapConnections_JP_0845F2FC: @ 0x0845F2FC
	@ struct MapConnections
	.4byte 1
	.4byte MapConnection_JP_0845F2F0

MapConnection_JP_0845F304: @ 0x0845F304
	@ struct MapConnection
	.4byte 3
	.4byte 0
	.byte 26, 4
	.2byte 0
MapConnections_JP_0845F310: @ 0x0845F310
	@ struct MapConnections
	.4byte 1
	.4byte MapConnection_JP_0845F304

	.globl gUnknown_845F318
gUnknown_845F318: @ 0x0845F318
	.space 0x4, 0x00
