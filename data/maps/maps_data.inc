.if .L__inc_fragment_select_ded3999bc9ec == 1
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

gMapConnection_LittlerootTown_North_Route101: @ 0x0845EA20
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 16
gMapConnections_LittlerootTown: @ 0x0845EA2C
	@ struct MapConnections
	semantic_map_connections 1, gMapConnection_LittlerootTown_North_Route101

gMapConnection_OldaleTown_North_Route103: @ 0x0845EA34
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 18
gMapConnection_OldaleTown_South_Route101: @ 0x0845EA40
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 16
gMapConnection_OldaleTown_West_Route102: @ 0x0845EA4C
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 17
gMapConnections_OldaleTown: @ 0x0845EA58
	@ struct MapConnections
	semantic_map_connections 3, gMapConnection_OldaleTown_North_Route103

gMapConnection_DewfordTown_North_Route106: @ 0x0845EA60
	@ struct MapConnection
	semantic_map_connection 2, -60, 0, 21
gMapConnection_DewfordTown_East_Route107: @ 0x0845EA6C
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 22
gMapConnections_DewfordTown: @ 0x0845EA78
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_DewfordTown_North_Route106

gMapConnection_LavaridgeTown_East_Route112: @ 0x0845EA80
	@ struct MapConnection
	semantic_map_connection 4, -40, 0, 27
gMapConnections_LavaridgeTown: @ 0x0845EA8C
	@ struct MapConnections
	semantic_map_connections 1, gMapConnection_LavaridgeTown_East_Route112

gMapConnection_FallarborTown_West_Route114: @ 0x0845EA94
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 29
gMapConnection_FallarborTown_East_Route113: @ 0x0845EAA0
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 28
gMapConnections_FallarborTown: @ 0x0845EAAC
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_FallarborTown_West_Route114

gMapConnection_VerdanturfTown_North_Route116: @ 0x0845EAB4
	@ struct MapConnection
	semantic_map_connection 2, -80, 0, 31
gMapConnection_VerdanturfTown_East_Route117: @ 0x0845EAC0
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 32
gMapConnections_VerdanturfTown: @ 0x0845EACC
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_VerdanturfTown_North_Route116

gMapConnection_PacifidlogTown_West_Route132: @ 0x0845EAD4
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 47
gMapConnection_PacifidlogTown_East_Route131: @ 0x0845EAE0
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 46
gMapConnections_PacifidlogTown: @ 0x0845EAEC
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_PacifidlogTown_West_Route132

gMapConnection_PetalburgCity_West_Route104: @ 0x0845EAF4
	@ struct MapConnection
	semantic_map_connection 3, -50, 0, 19
gMapConnection_PetalburgCity_East_Route102: @ 0x0845EB00
	@ struct MapConnection
	semantic_map_connection 4, 10, 0, 17
gMapConnections_PetalburgCity: @ 0x0845EB0C
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_PetalburgCity_West_Route104

gMapConnection_SlateportCity_North_Route110: @ 0x0845EB14
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 25
gMapConnection_SlateportCity_South_Route109: @ 0x0845EB20
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 24
gMapConnection_SlateportCity_East_Route134: @ 0x0845EB2C
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 49
gMapConnections_SlateportCity: @ 0x0845EB38
	@ struct MapConnections
	semantic_map_connections 3, gMapConnection_SlateportCity_North_Route110

gMapConnection_MauvilleCity_North_Route111: @ 0x0845EB40
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 26
gMapConnection_MauvilleCity_South_Route110: @ 0x0845EB4C
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 25
gMapConnection_MauvilleCity_West_Route117: @ 0x0845EB58
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 32
gMapConnection_MauvilleCity_East_Route118: @ 0x0845EB64
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 33
gMapConnections_MauvilleCity: @ 0x0845EB70
	@ struct MapConnections
	semantic_map_connections 4, gMapConnection_MauvilleCity_North_Route111

gMapConnection_RustboroCity_North_Route115: @ 0x0845EB78
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 30
gMapConnection_RustboroCity_South_Route104: @ 0x0845EB84
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 19
gMapConnection_RustboroCity_East_Route116: @ 0x0845EB90
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 31
gMapConnections_RustboroCity: @ 0x0845EB9C
	@ struct MapConnections
	semantic_map_connections 3, gMapConnection_RustboroCity_North_Route115

gMapConnection_FortreeCity_West_Route119: @ 0x0845EBA4
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 34
gMapConnection_FortreeCity_East_Route120: @ 0x0845EBB0
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 35
gMapConnections_FortreeCity: @ 0x0845EBBC
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_FortreeCity_West_Route119

gMapConnection_LilycoveCity_West_Route121: @ 0x0845EBC4
	@ struct MapConnection
	semantic_map_connection 3, 10, 0, 36
gMapConnection_LilycoveCity_East_Route124: @ 0x0845EBD0
	@ struct MapConnection
	semantic_map_connection 4, -10, 0, 39
gMapConnections_LilycoveCity: @ 0x0845EBDC
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_LilycoveCity_West_Route121

gMapConnection_MossdeepCity_North_Route125: @ 0x0845EBE4
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 40
gMapConnection_MossdeepCity_South_Route127: @ 0x0845EBF0
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 42
gMapConnection_MossdeepCity_West_Route124: @ 0x0845EBFC
	@ struct MapConnection
	semantic_map_connection 3, -40, 0, 39
gMapConnections_MossdeepCity: @ 0x0845EC08
	@ struct MapConnections
	semantic_map_connections 3, gMapConnection_MossdeepCity_North_Route125

UnusedMapConnections_JP_0845EC10: @ 0x0845EC10
	@ unreferenced zero-count MapConnections placeholder
	.4byte 0
	.4byte UnusedMapConnections_JP_0845EC10

gMapConnection_EverGrandeCity_West_Route128: @ 0x0845EC18
	@ struct MapConnection
	semantic_map_connection 3, 40, 0, 43
gMapConnections_EverGrandeCity: @ 0x0845EC24
	@ struct MapConnections
	semantic_map_connections 1, gMapConnection_EverGrandeCity_West_Route128

gMapConnection_Route101_North_OldaleTown: @ 0x0845EC2C
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 10
gMapConnection_Route101_South_LittlerootTown: @ 0x0845EC38
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 9
gMapConnections_Route101: @ 0x0845EC44
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_Route101_North_OldaleTown

gMapConnection_Route102_West_PetalburgCity: @ 0x0845EC4C
	@ struct MapConnection
	semantic_map_connection 3, -10, 0, 0
gMapConnection_Route102_East_OldaleTown: @ 0x0845EC58
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 10
gMapConnections_Route102: @ 0x0845EC64
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_Route102_West_PetalburgCity

gMapConnection_Route103_South_OldaleTown: @ 0x0845EC6C
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 10
gMapConnection_Route103_East_Route110: @ 0x0845EC78
	@ struct MapConnection
	semantic_map_connection 4, -60, 0, 25
gMapConnections_Route103: @ 0x0845EC84
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_Route103_South_OldaleTown

gMapConnection_Route104_North_RustboroCity: @ 0x0845EC8C
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 3
gMapConnection_Route104_South_Route105: @ 0x0845EC98
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 20
gMapConnection_Route104_East_PetalburgCity: @ 0x0845ECA4
	@ struct MapConnection
	semantic_map_connection 4, 50, 0, 0
gMapConnections_Route104: @ 0x0845ECB0
	@ struct MapConnections
	semantic_map_connections 3, gMapConnection_Route104_North_RustboroCity

gMapConnection_Route105_North_Route104: @ 0x0845ECB8
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 19
gMapConnection_Route105_South_Route106: @ 0x0845ECC4
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 21
gMapConnection_Route105_Dive_Underwater_Route105: @ 0x0845ECD0
	@ struct MapConnection
	semantic_map_connection 5, 0, 0, 55
gMapConnections_Route105: @ 0x0845ECDC
	@ struct MapConnections
	semantic_map_connections 3, gMapConnection_Route105_North_Route104

gMapConnection_Route106_North_Route105: @ 0x0845ECE4
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 20
gMapConnection_Route106_South_DewfordTown: @ 0x0845ECF0
	@ struct MapConnection
	semantic_map_connection 1, 60, 0, 11
gMapConnections_Route106: @ 0x0845ECFC
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_Route106_North_Route105

gMapConnection_Route107_West_DewfordTown: @ 0x0845ED04
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 11
gMapConnection_Route107_East_Route108: @ 0x0845ED10
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 23
gMapConnections_Route107: @ 0x0845ED1C
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_Route107_West_DewfordTown

gMapConnection_Route108_West_Route107: @ 0x0845ED24
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 22
gMapConnection_Route108_East_Route109: @ 0x0845ED30
	@ struct MapConnection
	semantic_map_connection 4, -40, 0, 24
gMapConnections_Route108: @ 0x0845ED3C
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_Route108_West_Route107

gMapConnection_Route109_North_SlateportCity: @ 0x0845ED44
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 1
gMapConnection_Route109_West_Route108: @ 0x0845ED50
	@ struct MapConnection
	semantic_map_connection 3, 40, 0, 23
gMapConnections_Route109: @ 0x0845ED5C
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_Route109_North_SlateportCity

gMapConnection_Route110_North_MauvilleCity: @ 0x0845ED64
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 2
gMapConnection_Route110_South_SlateportCity: @ 0x0845ED70
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 1
gMapConnection_Route110_West_Route103: @ 0x0845ED7C
	@ struct MapConnection
	semantic_map_connection 3, 60, 0, 18
gMapConnections_Route110: @ 0x0845ED88
	@ struct MapConnections
	semantic_map_connections 3, gMapConnection_Route110_North_MauvilleCity

gMapConnection_Route111_South_MauvilleCity: @ 0x0845ED90
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 2
gMapConnection_Route111_West_Route113: @ 0x0845ED9C
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 28
gMapConnection_Route111_West_Route112: @ 0x0845EDA8
	@ struct MapConnection
	semantic_map_connection 3, 20, 0, 27
gMapConnections_Route111: @ 0x0845EDB4
	@ struct MapConnections
	semantic_map_connections 3, gMapConnection_Route111_South_MauvilleCity

gMapConnection_Route112_North_Route113: @ 0x0845EDBC
	@ struct MapConnection
	semantic_map_connection 2, -60, 0, 28
gMapConnection_Route112_West_LavaridgeTown: @ 0x0845EDC8
	@ struct MapConnection
	semantic_map_connection 3, 40, 0, 12
gMapConnection_Route112_East_Route111: @ 0x0845EDD4
	@ struct MapConnection
	semantic_map_connection 4, -20, 0, 26
gMapConnections_Route112: @ 0x0845EDE0
	@ struct MapConnections
	semantic_map_connections 3, gMapConnection_Route112_North_Route113

gMapConnection_Route113_South_Route112: @ 0x0845EDE8
	@ struct MapConnection
	semantic_map_connection 1, 60, 0, 27
gMapConnection_Route113_West_FallarborTown: @ 0x0845EDF4
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 13
gMapConnection_Route113_East_Route111: @ 0x0845EE00
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 26
gMapConnections_Route113: @ 0x0845EE0C
	@ struct MapConnections
	semantic_map_connections 3, gMapConnection_Route113_South_Route112

gMapConnection_Route114_West_Route115: @ 0x0845EE14
	@ struct MapConnection
	semantic_map_connection 3, 40, 0, 30
gMapConnection_Route114_East_FallarborTown: @ 0x0845EE20
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 13
gMapConnections_Route114: @ 0x0845EE2C
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_Route114_West_Route115

gMapConnection_Route115_South_RustboroCity: @ 0x0845EE34
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 3
gMapConnection_Route115_East_Route114: @ 0x0845EE40
	@ struct MapConnection
	semantic_map_connection 4, -40, 0, 29
gMapConnections_Route115: @ 0x0845EE4C
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_Route115_South_RustboroCity

gMapConnection_Route116_South_VerdanturfTown: @ 0x0845EE54
	@ struct MapConnection
	semantic_map_connection 1, 80, 0, 14
gMapConnection_Route116_West_RustboroCity: @ 0x0845EE60
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 3
gMapConnections_Route116: @ 0x0845EE6C
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_Route116_South_VerdanturfTown

gMapConnection_Route117_West_VerdanturfTown: @ 0x0845EE74
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 14
gMapConnection_Route117_East_MauvilleCity: @ 0x0845EE80
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 2
gMapConnections_Route117: @ 0x0845EE8C
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_Route117_West_VerdanturfTown

gMapConnection_Route118_North_Route119: @ 0x0845EE94
	@ struct MapConnection
	semantic_map_connection 2, 40, 0, 34
gMapConnection_Route118_West_MauvilleCity: @ 0x0845EEA0
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 2
gMapConnection_Route118_East_Route123: @ 0x0845EEAC
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 38
gMapConnections_Route118: @ 0x0845EEB8
	@ struct MapConnections
	semantic_map_connections 3, gMapConnection_Route118_North_Route119

gMapConnection_Route119_South_Route118: @ 0x0845EEC0
	@ struct MapConnection
	semantic_map_connection 1, -40, 0, 33
gMapConnection_Route119_East_FortreeCity: @ 0x0845EECC
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 4
gMapConnections_Route119: @ 0x0845EED8
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_Route119_South_Route118

gMapConnection_Route120_West_FortreeCity: @ 0x0845EEE0
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 4
gMapConnection_Route120_East_Route121: @ 0x0845EEEC
	@ struct MapConnection
	semantic_map_connection 4, 80, 0, 36
gMapConnections_Route120: @ 0x0845EEF8
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_Route120_West_FortreeCity

gMapConnection_Route121_South_Route122: @ 0x0845EF00
	@ struct MapConnection
	semantic_map_connection 1, 20, 0, 37
gMapConnection_Route121_West_Route120: @ 0x0845EF0C
	@ struct MapConnection
	semantic_map_connection 3, -80, 0, 35
gMapConnection_Route121_East_LilycoveCity: @ 0x0845EF18
	@ struct MapConnection
	semantic_map_connection 4, -10, 0, 5
gMapConnections_Route121: @ 0x0845EF24
	@ struct MapConnections
	semantic_map_connections 3, gMapConnection_Route121_South_Route122

gMapConnection_Route122_North_Route121: @ 0x0845EF2C
	@ struct MapConnection
	semantic_map_connection 2, -20, 0, 36
gMapConnection_Route122_South_Route123: @ 0x0845EF38
	@ struct MapConnection
	semantic_map_connection 1, -100, 0, 38
gMapConnections_Route122: @ 0x0845EF44
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_Route122_North_Route121

gMapConnection_Route123_North_Route122: @ 0x0845EF4C
	@ struct MapConnection
	semantic_map_connection 2, 100, 0, 37
gMapConnection_Route123_West_Route118: @ 0x0845EF58
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 33
gMapConnections_Route123: @ 0x0845EF64
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_Route123_North_Route122

gMapConnection_Route124_South_Route126: @ 0x0845EF6C
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 41
gMapConnection_Route124_West_LilycoveCity: @ 0x0845EF78
	@ struct MapConnection
	semantic_map_connection 3, 10, 0, 5
gMapConnection_Route124_East_Route125: @ 0x0845EF84
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 40
gMapConnection_Route124_East_MossdeepCity: @ 0x0845EF90
	@ struct MapConnection
	semantic_map_connection 4, 40, 0, 6
gMapConnection_Route124_Dive_Underwater_Route124: @ 0x0845EF9C
	@ struct MapConnection
	semantic_map_connection 5, 0, 0, 50
gMapConnections_Route124: @ 0x0845EFA8
	@ struct MapConnections
	semantic_map_connections 5, gMapConnection_Route124_South_Route126

gMapConnection_Route125_South_MossdeepCity: @ 0x0845EFB0
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 6
gMapConnection_Route125_West_Route124: @ 0x0845EFBC
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 39
gMapConnection_Route125_Dive_Underwater_Route125: @ 0x0845EFC8
	@ struct MapConnection
	semantic_map_connection 5, 0, 0, 56
gMapConnections_Route125: @ 0x0845EFD4
	@ struct MapConnections
	semantic_map_connections 3, gMapConnection_Route125_South_MossdeepCity

gMapConnection_Route126_North_Route124: @ 0x0845EFDC
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 39
gMapConnection_Route126_East_Route127: @ 0x0845EFE8
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 42
gMapConnection_Route126_Dive_Underwater_Route126: @ 0x0845EFF4
	@ struct MapConnection
	semantic_map_connection 5, 0, 0, 51
gMapConnections_Route126: @ 0x0845F000
	@ struct MapConnections
	semantic_map_connections 3, gMapConnection_Route126_North_Route124

gMapConnection_Route127_North_MossdeepCity: @ 0x0845F008
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 6
gMapConnection_Route127_South_Route128: @ 0x0845F014
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 43
gMapConnection_Route127_West_Route126: @ 0x0845F020
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 41
gMapConnection_Route127_Dive_Underwater_Route127: @ 0x0845F02C
	@ struct MapConnection
	semantic_map_connection 5, 0, 0, 52
gMapConnections_Route127: @ 0x0845F038
	@ struct MapConnections
	semantic_map_connections 4, gMapConnection_Route127_North_MossdeepCity

gMapConnection_Route128_North_Route127: @ 0x0845F040
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 42
gMapConnection_Route128_South_Route129: @ 0x0845F04C
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 44
gMapConnection_Route128_East_EverGrandeCity: @ 0x0845F058
	@ struct MapConnection
	semantic_map_connection 4, -40, 0, 8
gMapConnection_Route128_Dive_Underwater_Route128: @ 0x0845F064
	@ struct MapConnection
	semantic_map_connection 5, 0, 0, 53
gMapConnections_Route128: @ 0x0845F070
	@ struct MapConnections
	semantic_map_connections 4, gMapConnection_Route128_North_Route127

gMapConnection_Route129_North_Route128: @ 0x0845F078
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 43
gMapConnection_Route129_West_Route130: @ 0x0845F084
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 45
gMapConnection_Route129_Dive_Underwater_Route129: @ 0x0845F090
	@ struct MapConnection
	semantic_map_connection 5, 0, 0, 54
gMapConnections_Route129: @ 0x0845F09C
	@ struct MapConnections
	semantic_map_connections 3, gMapConnection_Route129_North_Route128

gMapConnection_Route130_West_Route131: @ 0x0845F0A4
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 46
gMapConnection_Route130_East_Route129: @ 0x0845F0B0
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 44
gMapConnections_Route130: @ 0x0845F0BC
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_Route130_West_Route131

gMapConnection_Route131_West_PacifidlogTown: @ 0x0845F0C4
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 15
gMapConnection_Route131_East_Route130: @ 0x0845F0D0
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 45
gMapConnections_Route131: @ 0x0845F0DC
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_Route131_West_PacifidlogTown

gMapConnection_Route132_West_Route133: @ 0x0845F0E4
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 48
gMapConnection_Route132_East_PacifidlogTown: @ 0x0845F0F0
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 15
gMapConnections_Route132: @ 0x0845F0FC
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_Route132_West_Route133

gMapConnection_Route133_West_Route134: @ 0x0845F104
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 49
gMapConnection_Route133_East_Route132: @ 0x0845F110
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 47
gMapConnections_Route133: @ 0x0845F11C
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_Route133_West_Route134

gMapConnection_Route134_West_SlateportCity: @ 0x0845F124
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 1
gMapConnection_Route134_East_Route133: @ 0x0845F130
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 48
gMapConnections_Route134: @ 0x0845F13C
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_Route134_West_SlateportCity

gMapConnection_Underwater_Route105_Emerge_Route105: @ 0x0845F144
	@ struct MapConnection
	semantic_map_connection 6, 0, 0, 20
gMapConnections_Underwater_Route105: @ 0x0845F150
	@ struct MapConnections
	semantic_map_connections 1, gMapConnection_Underwater_Route105_Emerge_Route105

gMapConnection_Underwater_Route124_South_Underwater_Route126: @ 0x0845F158
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 51
gMapConnection_Underwater_Route124_Emerge_Route124: @ 0x0845F164
	@ struct MapConnection
	semantic_map_connection 6, 0, 0, 39
gMapConnections_Underwater_Route124: @ 0x0845F170
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_Underwater_Route124_South_Underwater_Route126

gMapConnection_Underwater_Route125_Emerge_Route125: @ 0x0845F178
	@ struct MapConnection
	semantic_map_connection 6, 0, 0, 40
gMapConnections_Underwater_Route125: @ 0x0845F184
	@ struct MapConnections
	semantic_map_connections 1, gMapConnection_Underwater_Route125_Emerge_Route125

gMapConnection_Underwater_Route126_North_Underwater_Route124: @ 0x0845F18C
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 50
gMapConnection_Underwater_Route126_East_Underwater_Route127: @ 0x0845F198
	@ struct MapConnection
	semantic_map_connection 4, 0, 0, 52
gMapConnection_Underwater_Route126_Emerge_Route126: @ 0x0845F1A4
	@ struct MapConnection
	semantic_map_connection 6, 0, 0, 41
gMapConnections_Underwater_Route126: @ 0x0845F1B0
	@ struct MapConnections
	semantic_map_connections 3, gMapConnection_Underwater_Route126_North_Underwater_Route124

gMapConnection_Underwater_Route127_Emerge_Route127: @ 0x0845F1B8
	@ struct MapConnection
	semantic_map_connection 6, 0, 0, 42
gMapConnection_Underwater_Route127_West_Underwater_Route126: @ 0x0845F1C4
	@ struct MapConnection
	semantic_map_connection 3, 0, 0, 51
gMapConnection_Underwater_Route127_South_Underwater_Route128: @ 0x0845F1D0
	@ struct MapConnection
	semantic_map_connection 1, 0, 0, 53
gMapConnections_Underwater_Route127: @ 0x0845F1DC
	@ struct MapConnections
	semantic_map_connections 3, gMapConnection_Underwater_Route127_Emerge_Route127

gMapConnection_Underwater_Route128_North_Underwater_Route127: @ 0x0845F1E4
	@ struct MapConnection
	semantic_map_connection 2, 0, 0, 52
gMapConnection_Underwater_Route128_Emerge_Route128: @ 0x0845F1F0
	@ struct MapConnection
	semantic_map_connection 6, 0, 0, 43
gMapConnections_Underwater_Route128: @ 0x0845F1FC
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_Underwater_Route128_North_Underwater_Route127

gMapConnection_Underwater_Route129_Emerge_Route129: @ 0x0845F204
	@ struct MapConnection
	semantic_map_connection 6, 0, 0, 44
gMapConnections_Underwater_Route129: @ 0x0845F210
	@ struct MapConnections
	semantic_map_connections 1, gMapConnection_Underwater_Route129_Emerge_Route129

gMapConnection_SafariZone_Northwest_East_SafariZone_North: @ 0x0845F218
	@ struct MapConnection
	semantic_map_connection 4, 0, 26, 1
gMapConnection_SafariZone_Northwest_South_SafariZone_Southwest: @ 0x0845F224
	@ struct MapConnection
	semantic_map_connection 1, 0, 26, 2
gMapConnections_SafariZone_Northwest: @ 0x0845F230
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_SafariZone_Northwest_East_SafariZone_North

gMapConnection_SafariZone_North_West_SafariZone_Northwest: @ 0x0845F238
	@ struct MapConnection
	semantic_map_connection 3, 0, 26, 0
gMapConnection_SafariZone_North_South_SafariZone_South: @ 0x0845F244
	@ struct MapConnection
	semantic_map_connection 1, 0, 26, 3
gMapConnection_SafariZone_North_East_SafariZone_Northeast: @ 0x0845F250
	@ struct MapConnection
	semantic_map_connection 4, 0, 26, 12
gMapConnections_SafariZone_North: @ 0x0845F25C
	@ struct MapConnections
	semantic_map_connections 3, gMapConnection_SafariZone_North_West_SafariZone_Northwest

gMapConnection_SafariZone_Southwest_North_SafariZone_Northwest: @ 0x0845F264
	@ struct MapConnection
	semantic_map_connection 2, 0, 26, 0
gMapConnection_SafariZone_Southwest_East_SafariZone_South: @ 0x0845F270
	@ struct MapConnection
	semantic_map_connection 4, 0, 26, 3
gMapConnections_SafariZone_Southwest: @ 0x0845F27C
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_SafariZone_Southwest_North_SafariZone_Northwest

gMapConnection_SafariZone_South_North_SafariZone_North: @ 0x0845F284
	@ struct MapConnection
	semantic_map_connection 2, 0, 26, 1
gMapConnection_SafariZone_South_West_SafariZone_Southwest: @ 0x0845F290
	@ struct MapConnection
	semantic_map_connection 3, 0, 26, 2
gMapConnection_SafariZone_South_East_SafariZone_Southeast: @ 0x0845F29C
	@ struct MapConnection
	semantic_map_connection 4, 0, 26, 13
gMapConnections_SafariZone_South: @ 0x0845F2A8
	@ struct MapConnections
	semantic_map_connections 3, gMapConnection_SafariZone_South_North_SafariZone_North

gMapConnection_SafariZone_Northeast_West_SafariZone_North: @ 0x0845F2B0
	@ struct MapConnection
	semantic_map_connection 3, 0, 26, 1
gMapConnection_SafariZone_Northeast_South_SafariZone_Southeast: @ 0x0845F2BC
	@ struct MapConnection
	semantic_map_connection 1, 0, 26, 13
gMapConnections_SafariZone_Northeast: @ 0x0845F2C8
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_SafariZone_Northeast_West_SafariZone_North

gMapConnection_SafariZone_Southeast_West_SafariZone_South: @ 0x0845F2D0
	@ struct MapConnection
	semantic_map_connection 3, 0, 26, 3
gMapConnection_SafariZone_Southeast_North_SafariZone_Northeast: @ 0x0845F2DC
	@ struct MapConnection
	semantic_map_connection 2, 0, 26, 12
gMapConnections_SafariZone_Southeast: @ 0x0845F2E8
	@ struct MapConnections
	semantic_map_connections 2, gMapConnection_SafariZone_Southeast_West_SafariZone_South

gMapConnection_BattleFrontier_OutsideWest_East_BattleFrontier_OutsideEast: @ 0x0845F2F0
	@ struct MapConnection
	semantic_map_connection 4, 0, 26, 14
gMapConnections_BattleFrontier_OutsideWest: @ 0x0845F2FC
	@ struct MapConnections
	semantic_map_connections 1, gMapConnection_BattleFrontier_OutsideWest_East_BattleFrontier_OutsideEast

gMapConnection_BattleFrontier_OutsideEast_West_BattleFrontier_OutsideWest: @ 0x0845F304
	@ struct MapConnection
	semantic_map_connection 3, 0, 26, 4
gMapConnections_BattleFrontier_OutsideEast: @ 0x0845F310
	@ struct MapConnections
	semantic_map_connections 1, gMapConnection_BattleFrontier_OutsideEast_West_BattleFrontier_OutsideWest

	.space 0x4, 0x00
.elseif .L__inc_fragment_select_ded3999bc9ec == 2
	.globl gMetatileBehaviorAttributes
gMetatileBehaviorAttributes:
	@ Semantic metatile behavior flags.
	@ bit0: encounters
	@ bit1: surfable
	@ bit2: unused by code (roughly traversable metatiles)
	.set JP_METATILE_FLAG_HAS_ENCOUNTERS, (1 << 0)
	.set JP_METATILE_FLAG_SURFABLE,       (1 << 1)
	.set JP_METATILE_FLAG_UNUSED,         (1 << 2)

	.byte JP_METATILE_FLAG_UNUSED, 0, JP_METATILE_FLAG_UNUSED | JP_METATILE_FLAG_HAS_ENCOUNTERS, JP_METATILE_FLAG_UNUSED | JP_METATILE_FLAG_HAS_ENCOUNTERS, 0, JP_METATILE_FLAG_HAS_ENCOUNTERS, JP_METATILE_FLAG_UNUSED | JP_METATILE_FLAG_HAS_ENCOUNTERS, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED | JP_METATILE_FLAG_HAS_ENCOUNTERS, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED | JP_METATILE_FLAG_HAS_ENCOUNTERS, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED
	.byte JP_METATILE_FLAG_UNUSED | JP_METATILE_FLAG_SURFABLE | JP_METATILE_FLAG_HAS_ENCOUNTERS, JP_METATILE_FLAG_UNUSED | JP_METATILE_FLAG_SURFABLE | JP_METATILE_FLAG_HAS_ENCOUNTERS, JP_METATILE_FLAG_UNUSED | JP_METATILE_FLAG_SURFABLE | JP_METATILE_FLAG_HAS_ENCOUNTERS, JP_METATILE_FLAG_UNUSED | JP_METATILE_FLAG_SURFABLE, JP_METATILE_FLAG_UNUSED | JP_METATILE_FLAG_SURFABLE, JP_METATILE_FLAG_UNUSED | JP_METATILE_FLAG_SURFABLE | JP_METATILE_FLAG_HAS_ENCOUNTERS, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, 0, JP_METATILE_FLAG_UNUSED | JP_METATILE_FLAG_SURFABLE, 0, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, 0, 0, 0
	.byte JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED | JP_METATILE_FLAG_SURFABLE | JP_METATILE_FLAG_HAS_ENCOUNTERS, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED | JP_METATILE_FLAG_HAS_ENCOUNTERS, JP_METATILE_FLAG_UNUSED | JP_METATILE_FLAG_HAS_ENCOUNTERS, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED | JP_METATILE_FLAG_SURFABLE | JP_METATILE_FLAG_HAS_ENCOUNTERS, JP_METATILE_FLAG_UNUSED, 0, 0, 0, 0
	.byte JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, 0, 0, 0, 0, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED
	.byte JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, 0, 0, 0, 0, 0
	.byte JP_METATILE_FLAG_UNUSED | JP_METATILE_FLAG_SURFABLE, JP_METATILE_FLAG_UNUSED | JP_METATILE_FLAG_SURFABLE, JP_METATILE_FLAG_UNUSED | JP_METATILE_FLAG_SURFABLE, JP_METATILE_FLAG_UNUSED | JP_METATILE_FLAG_SURFABLE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	.byte JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED | JP_METATILE_FLAG_SURFABLE, JP_METATILE_FLAG_UNUSED | JP_METATILE_FLAG_SURFABLE, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED | JP_METATILE_FLAG_SURFABLE
	.byte 0, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, 0, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED
	.byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	.byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	.byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	.byte 0, 0, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, 0, JP_METATILE_FLAG_UNUSED, 0, 0, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, 0
	.byte JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	.byte JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, JP_METATILE_FLAG_UNUSED, 0, 0, 0, 0, 0, 0, 0, 0, 0
	.byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
gDoorAnimTiles_Littleroot: @ 0x0845F40C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/littleroot.4bpp"

gDoorNullPalette1: @ 0x0845F70C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BirchsLab: @ 0x0845F72C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/birchs_lab.4bpp"

gDoorNullPalette2: @ 0x0845FA2C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_FallarborLightRoof: @ 0x0845FA4C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/fallarbor_light_roof.4bpp"

gDoorNullPalette3: @ 0x0845FD4C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_Lilycove: @ 0x0845FD6C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/lilycove.4bpp"

gDoorNullPalette4: @ 0x0846006C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_LilycoveWooden: @ 0x0846008C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/lilycove_wooden.4bpp"

gDoorNullPalette5: @ 0x0846038C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_General: @ 0x084603AC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/general.4bpp"

gDoorNullPalette6: @ 0x084606AC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_PokeCenter: @ 0x084606CC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/poke_center.4bpp"

gDoorAnimTiles_Gym: @ 0x084609CC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/gym.4bpp"

gDoorAnimTiles_PokeMart: @ 0x08460CCC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/poke_mart.4bpp"

gDoorAnimTiles_RustboroTan: @ 0x08460FCC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/rustboro_tan.4bpp"

gDoorNullPalette7: @ 0x084612CC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_RustboroGray: @ 0x084612EC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/rustboro_gray.4bpp"

gDoorNullPalette8: @ 0x084615EC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_Oldale: @ 0x0846160C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/oldale.4bpp"

gDoorFiller1: @ 0x0846190C
	.fill 0x5900, 1, 0

gDoorAnimTiles_UnusedTops: @ 0x0846720C
	@ 4bpp door animation tiles, size=0xC0
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/unused_tops.4bpp"

gDoorFiller2: @ 0x084672CC
	.fill 0x140, 1, 0

gDoorAnimTiles_UnusedBottoms: @ 0x0846740C
	@ 4bpp door animation tiles, size=0xC0
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/unused_bottoms.4bpp"

gDoorNullPalette11: @ 0x084674CC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_Mauville: @ 0x084674EC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/mauville.4bpp"

gDoorNullPalette12: @ 0x084677EC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_Verdanturf: @ 0x0846780C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/verdanturf.4bpp"

gDoorNullPalette13: @ 0x08467B0C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_Slateport: @ 0x08467B2C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/slateport.4bpp"

gDoorNullPalette14: @ 0x08467E2C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_Dewford: @ 0x08467E4C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/dewford.4bpp"

gDoorNullPalette15: @ 0x0846814C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_Contest: @ 0x0846816C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/contest.4bpp"

gDoorNullPalette16: @ 0x0846846C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_Mossdeep: @ 0x0846848C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/mossdeep.4bpp"

gDoorNullPalette17: @ 0x0846878C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_SootopolisPeakedRoof: @ 0x084687AC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/sootopolis_peaked_roof.4bpp"

gDoorNullPalette18: @ 0x08468AAC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_Sootopolis: @ 0x08468ACC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/sootopolis.4bpp"

gDoorNullPalette19: @ 0x08468DCC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_PokemonLeague: @ 0x08468DEC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/pokemon_league.4bpp"

gDoorNullPalette20: @ 0x084690EC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_Pacifidlog: @ 0x0846910C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/pacifidlog.4bpp"

gDoorNullPalette21: @ 0x0846940C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_PetalburgGym: @ 0x0846942C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/petalburg_gym.4bpp"

gDoorNullPalette22: @ 0x0846972C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_CyclingRoad: @ 0x0846974C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/cycling_road.4bpp"

gDoorNullPalette23: @ 0x08469A4C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_LilycoveDeptStore: @ 0x08469A6C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/lilycove_dept_store.4bpp"

gDoorNullPalette24: @ 0x08469D6C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_SafariZone: @ 0x08469D8C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/safari_zone.4bpp"

gDoorNullPalette25: @ 0x0846A08C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_MossdeepSpaceCenter: @ 0x0846A0AC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/mossdeep_space_center.4bpp"

gDoorNullPalette26: @ 0x0846A3AC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_CableClub: @ 0x0846A3CC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/cable_club.4bpp"

gDoorNullPalette27: @ 0x0846A6CC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_AbandonedShip: @ 0x0846A6EC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/abandoned_ship.4bpp"

gDoorNullPalette28: @ 0x0846A9EC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_FallarborDarkRoof: @ 0x0846AA0C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/fallarbor_dark_roof.4bpp"

gDoorNullPalette29: @ 0x0846AD0C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_AbandonedShipRoom: @ 0x0846AD2C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/abandoned_ship_room.4bpp"

gDoorNullPalette30: @ 0x0846B02C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_LilycoveDeptStoreElevator: @ 0x0846B04C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/lilycove_dept_store_elevator.4bpp"

gDoorNullPalette31: @ 0x0846B34C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleTowerOld: @ 0x0846B36C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_tower_old.4bpp"

gDoorNullPalette32: @ 0x0846B66C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleTowerElevator: @ 0x0846B68C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_tower_elevator.4bpp"

gDoorNullPalette33: @ 0x0846B98C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_UnusedBattleFrontier: @ 0x0846B9AC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/unused_battle_frontier.4bpp"

gDoorNullPalette34: @ 0x0846BCAC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleDome: @ 0x0846BCCC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_dome.4bpp"

gDoorNullPalette35: @ 0x0846BFCC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleFactory: @ 0x0846BFEC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_factory.4bpp"

gDoorNullPalette36: @ 0x0846C2EC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleTower: @ 0x0846C30C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_tower.4bpp"

gDoorNullPalette37: @ 0x0846C60C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleArena: @ 0x0846C62C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_arena.4bpp"

gDoorNullPalette38: @ 0x0846C92C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleArenaLobby: @ 0x0846C94C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_arena_lobby.4bpp"

gDoorNullPalette39: @ 0x0846CC4C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleDomeLobby: @ 0x0846CC6C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_dome_lobby.4bpp"

gDoorNullPalette40: @ 0x0846CF6C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattlePalaceLobby: @ 0x0846CF8C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_palace_lobby.4bpp"

gDoorAnimTiles_BattleTent: @ 0x0846D28C
	@ 4bpp door animation tiles, size=0x400
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_tent.4bpp"

gDoorNullPalette41: @ 0x0846D68C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleDomeCorridor: @ 0x0846D6AC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_dome_corridor.4bpp"

gDoorNullPalette42: @ 0x0846D9AC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleTowerMultiCorridor: @ 0x0846D9CC
	@ 4bpp door animation tiles, size=0x600
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_tower_multi_corridor.4bpp"

gDoorNullPalette43: @ 0x0846DFCC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleFrontier: @ 0x0846DFEC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_frontier.4bpp"

gDoorNullPalette44: @ 0x0846E2EC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleFrontierSliding: @ 0x0846E30C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_frontier_sliding.4bpp"

gDoorNullPalette45: @ 0x0846E60C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleDomePreBattleRoom: @ 0x0846E62C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_dome_pre_battle_room.4bpp"

gDoorNullPalette46: @ 0x0846E92C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleTentInterior: @ 0x0846E94C
	@ 4bpp door animation tiles, size=0x400
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_tent_interior.4bpp"

gDoorNullPalette47: @ 0x0846ED4C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_TrainerHillLobbyElevator: @ 0x0846ED6C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/trainer_hill_lobby_elevator.4bpp"

gDoorNullPalette48: @ 0x0846F06C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_TrainerHillRoofElevator: @ 0x0846F08C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/trainer_hill_roof_elevator.4bpp"

gDoorNullPalette49: @ 0x0846F38C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0
.elseif .L__inc_fragment_select_ded3999bc9ec == 3
	.globl gObjectEventPal_RubySapphireMay
gObjectEventPal_RubySapphireMay: @ 0x08471E6C
	@ 16-color object-event palette
	@ Editable 16-color object-event palette.
	.incbin "build/graphics/semantic_palettes/object_event/gObjectEventPal_RubySapphireMay.gbapal"
	.globl gObjectEventGfxUnreferenced_JP_08471E8C
gObjectEventGfxUnreferenced_JP_08471E8C: @ 0x08471E8C
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_GRAPHICS
	@ object-event graphics/palette payload not reached by current graphics-info table
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.globl gObjectEventPal_JP_0847206C
gObjectEventPal_JP_0847206C: @ 0x0847206C
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_PALETTE
	@ 16-color object-event palette
	.byte 0x92, 0x73, 0xBF, 0x6B, 0x5F, 0x6B, 0xDD, 0x5A, 0x75, 0x52, 0x94, 0x5A, 0xED, 0x49, 0xED, 0x49
	.byte 0x0F, 0x42, 0xBD, 0x7F, 0xD4, 0x4F, 0x2F, 0x3F, 0x7F, 0x4E, 0xFC, 0x45, 0xFF, 0x7F, 0xCD, 0x35
	.globl gObjectEventPal_JP_0847208C
gObjectEventPal_JP_0847208C: @ 0x0847208C
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_PALETTE
	@ 16-color object-event palette
	.byte 0xC9, 0x55, 0xC9, 0x55, 0xC9, 0x55, 0xC9, 0x55, 0xC9, 0x55, 0xC9, 0x55, 0xC9, 0x55, 0xC9, 0x55
	.byte 0xC9, 0x55, 0xC9, 0x55, 0xC9, 0x55, 0xC9, 0x55, 0xC9, 0x55, 0xC9, 0x55, 0xC9, 0x55, 0xC9, 0x55
	.globl gObjectEventFrame_JP_084720AC
gObjectEventFrame_JP_084720AC: @ 0x084720AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 3, 104; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/field_move.4bpp", 0x0, 0x200 @ gObjectEventPic_BrendanFieldMove frame slice
	.globl gObjectEventFrame_JP_084722AC
gObjectEventFrame_JP_084722AC: @ 0x084722AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 3, 104; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/field_move.4bpp", 0x200, 0x200 @ gObjectEventPic_BrendanFieldMove frame slice
	.globl gObjectEventFrame_JP_084724AC
gObjectEventFrame_JP_084724AC: @ 0x084724AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 3, 104; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/field_move.4bpp", 0x400, 0x200 @ gObjectEventPic_BrendanFieldMove frame slice
	.globl gObjectEventFrame_JP_084726AC
gObjectEventFrame_JP_084726AC: @ 0x084726AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 3, 104; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/field_move.4bpp", 0x600, 0x200 @ gObjectEventPic_BrendanFieldMove frame slice
	.globl gObjectEventFrame_JP_084728AC
gObjectEventFrame_JP_084728AC: @ 0x084728AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 3, 104; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/field_move.4bpp", 0x800, 0x200 @ gObjectEventPic_BrendanFieldMove frame slice
	.globl gObjectEventFrame_JP_08472AAC
gObjectEventFrame_JP_08472AAC: @ 0x08472AAC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 2, 103; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/surfing.4bpp", 0x0, 0x200 @ gObjectEventPic_BrendanSurfing frame slice
	.globl gObjectEventFrame_JP_08472CAC
gObjectEventFrame_JP_08472CAC: @ 0x08472CAC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 2, 103; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/surfing.4bpp", 0x200, 0x200 @ gObjectEventPic_BrendanSurfing frame slice
	.globl gObjectEventFrame_JP_08472EAC
gObjectEventFrame_JP_08472EAC: @ 0x08472EAC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 2, 103; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/surfing.4bpp", 0x400, 0x200 @ gObjectEventPic_BrendanSurfing frame slice
	.globl gObjectEventFrame_JP_084730AC
gObjectEventFrame_JP_084730AC: @ 0x084730AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 2, 103; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/surfing.4bpp", 0x600, 0x200 @ gObjectEventPic_BrendanSurfing frame slice
	.globl gObjectEventFrame_JP_084732AC
gObjectEventFrame_JP_084732AC: @ 0x084732AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 2, 103; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/surfing.4bpp", 0x800, 0x200 @ gObjectEventPic_BrendanSurfing frame slice
	.globl gObjectEventFrame_JP_084734AC
gObjectEventFrame_JP_084734AC: @ 0x084734AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 2, 103; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/surfing.4bpp", 0xA00, 0x200 @ gObjectEventPic_BrendanSurfing frame slice
	.globl gObjectEventFrame_JP_084736AC
gObjectEventFrame_JP_084736AC: @ 0x084736AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 1, 101; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/mach_bike.4bpp", 0x0, 0x200 @ gObjectEventPic_BrendanMachBike frame slice
	.globl gObjectEventFrame_JP_084738AC
gObjectEventFrame_JP_084738AC: @ 0x084738AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 1, 101; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/mach_bike.4bpp", 0x200, 0x200 @ gObjectEventPic_BrendanMachBike frame slice
	.globl gObjectEventFrame_JP_08473AAC
gObjectEventFrame_JP_08473AAC: @ 0x08473AAC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 1, 101; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/mach_bike.4bpp", 0x400, 0x200 @ gObjectEventPic_BrendanMachBike frame slice
	.globl gObjectEventFrame_JP_08473CAC
gObjectEventFrame_JP_08473CAC: @ 0x08473CAC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 1, 101; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/mach_bike.4bpp", 0x600, 0x200 @ gObjectEventPic_BrendanMachBike frame slice
	.globl gObjectEventFrame_JP_08473EAC
gObjectEventFrame_JP_08473EAC: @ 0x08473EAC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 1, 101; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/mach_bike.4bpp", 0x800, 0x200 @ gObjectEventPic_BrendanMachBike frame slice
	.globl gObjectEventFrame_JP_084740AC
gObjectEventFrame_JP_084740AC: @ 0x084740AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 1, 101; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/mach_bike.4bpp", 0xA00, 0x200 @ gObjectEventPic_BrendanMachBike frame slice
	.globl gObjectEventFrame_JP_084742AC
gObjectEventFrame_JP_084742AC: @ 0x084742AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 1, 101; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/mach_bike.4bpp", 0xC00, 0x200 @ gObjectEventPic_BrendanMachBike frame slice
	.globl gObjectEventFrame_JP_084744AC
gObjectEventFrame_JP_084744AC: @ 0x084744AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 1, 101; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/mach_bike.4bpp", 0xE00, 0x200 @ gObjectEventPic_BrendanMachBike frame slice
	.globl gObjectEventFrame_JP_084746AC
gObjectEventFrame_JP_084746AC: @ 0x084746AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 1, 101; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/mach_bike.4bpp", 0x1000, 0x200 @ gObjectEventPic_BrendanMachBike frame slice
	.globl gObjectEventFrame_JP_084748AC
gObjectEventFrame_JP_084748AC: @ 0x084748AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0x0, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_08474AAC
gObjectEventFrame_JP_08474AAC: @ 0x08474AAC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0x200, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_08474CAC
gObjectEventFrame_JP_08474CAC: @ 0x08474CAC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0x400, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_08474EAC
gObjectEventFrame_JP_08474EAC: @ 0x08474EAC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0x600, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_084750AC
gObjectEventFrame_JP_084750AC: @ 0x084750AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0x800, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_084752AC
gObjectEventFrame_JP_084752AC: @ 0x084752AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0xA00, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_084754AC
gObjectEventFrame_JP_084754AC: @ 0x084754AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0xC00, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_084756AC
gObjectEventFrame_JP_084756AC: @ 0x084756AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0xE00, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_084758AC
gObjectEventFrame_JP_084758AC: @ 0x084758AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0x1000, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_08475AAC
gObjectEventFrame_JP_08475AAC: @ 0x08475AAC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0x1200, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_08475CAC
gObjectEventFrame_JP_08475CAC: @ 0x08475CAC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0x1400, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_08475EAC
gObjectEventFrame_JP_08475EAC: @ 0x08475EAC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0x1600, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_084760AC
gObjectEventFrame_JP_084760AC: @ 0x084760AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0x1800, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_084762AC
gObjectEventFrame_JP_084762AC: @ 0x084762AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0x1A00, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_084764AC
gObjectEventFrame_JP_084764AC: @ 0x084764AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0x1C00, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_084766AC
gObjectEventFrame_JP_084766AC: @ 0x084766AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0x1E00, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_084768AC
gObjectEventFrame_JP_084768AC: @ 0x084768AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0x2000, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_08476AAC
gObjectEventFrame_JP_08476AAC: @ 0x08476AAC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0x2200, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_08476CAC
gObjectEventFrame_JP_08476CAC: @ 0x08476CAC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0x2400, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_08476EAC
gObjectEventFrame_JP_08476EAC: @ 0x08476EAC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0x2600, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_084770AC
gObjectEventFrame_JP_084770AC: @ 0x084770AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0x2800, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_084772AC
gObjectEventFrame_JP_084772AC: @ 0x084772AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0x2A00, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_084774AC
gObjectEventFrame_JP_084774AC: @ 0x084774AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0x2C00, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_084776AC
gObjectEventFrame_JP_084776AC: @ 0x084776AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0x2E00, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_084778AC
gObjectEventFrame_JP_084778AC: @ 0x084778AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0x3000, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_08477AAC
gObjectEventFrame_JP_08477AAC: @ 0x08477AAC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0x3200, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_08477CAC
gObjectEventFrame_JP_08477CAC: @ 0x08477CAC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 63, 102; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/acro_bike.4bpp", 0x3400, 0x200 @ gObjectEventPic_BrendanAcroBike frame slice
	.globl gObjectEventFrame_JP_08477EAC
gObjectEventFrame_JP_08477EAC: @ 0x08477EAC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 137; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/fishing.4bpp", 0x0, 0x200 @ gObjectEventPic_BrendanFishing frame slice
	.globl gObjectEventFrame_JP_084780AC
gObjectEventFrame_JP_084780AC: @ 0x084780AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 137; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/fishing.4bpp", 0x200, 0x200 @ gObjectEventPic_BrendanFishing frame slice
	.globl gObjectEventFrame_JP_084782AC
gObjectEventFrame_JP_084782AC: @ 0x084782AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 137; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/fishing.4bpp", 0x400, 0x200 @ gObjectEventPic_BrendanFishing frame slice
	.globl gObjectEventFrame_JP_084784AC
gObjectEventFrame_JP_084784AC: @ 0x084784AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 137; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/fishing.4bpp", 0x600, 0x200 @ gObjectEventPic_BrendanFishing frame slice
	.globl gObjectEventFrame_JP_084786AC
gObjectEventFrame_JP_084786AC: @ 0x084786AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 137; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/fishing.4bpp", 0x800, 0x200 @ gObjectEventPic_BrendanFishing frame slice
	.globl gObjectEventFrame_JP_084788AC
gObjectEventFrame_JP_084788AC: @ 0x084788AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 137; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/fishing.4bpp", 0xA00, 0x200 @ gObjectEventPic_BrendanFishing frame slice
	.globl gObjectEventFrame_JP_08478AAC
gObjectEventFrame_JP_08478AAC: @ 0x08478AAC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 137; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/fishing.4bpp", 0xC00, 0x200 @ gObjectEventPic_BrendanFishing frame slice
	.globl gObjectEventFrame_JP_08478CAC
gObjectEventFrame_JP_08478CAC: @ 0x08478CAC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 137; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/fishing.4bpp", 0xE00, 0x200 @ gObjectEventPic_BrendanFishing frame slice
	.globl gObjectEventFrame_JP_08478EAC
gObjectEventFrame_JP_08478EAC: @ 0x08478EAC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 137; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/fishing.4bpp", 0x1000, 0x200 @ gObjectEventPic_BrendanFishing frame slice
	.globl gObjectEventFrame_JP_084790AC
gObjectEventFrame_JP_084790AC: @ 0x084790AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 137; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/fishing.4bpp", 0x1200, 0x200 @ gObjectEventPic_BrendanFishing frame slice
	.globl gObjectEventFrame_JP_084792AC
gObjectEventFrame_JP_084792AC: @ 0x084792AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 137; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/fishing.4bpp", 0x1400, 0x200 @ gObjectEventPic_BrendanFishing frame slice
	.globl gObjectEventFrame_JP_084794AC
gObjectEventFrame_JP_084794AC: @ 0x084794AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 137; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/fishing.4bpp", 0x1600, 0x200 @ gObjectEventPic_BrendanFishing frame slice
	.globl gObjectEventFrame_JP_084796AC
gObjectEventFrame_JP_084796AC: @ 0x084796AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 191; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/watering.4bpp", 0x0, 0x200 @ gObjectEventPic_BrendanWatering frame slice
	.globl gObjectEventFrame_JP_084798AC
gObjectEventFrame_JP_084798AC: @ 0x084798AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 191; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/watering.4bpp", 0x200, 0x200 @ gObjectEventPic_BrendanWatering frame slice
	.globl gObjectEventFrame_JP_08479AAC
gObjectEventFrame_JP_08479AAC: @ 0x08479AAC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 191; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/watering.4bpp", 0x400, 0x200 @ gObjectEventPic_BrendanWatering frame slice
	.globl gObjectEventFrame_JP_08479CAC
gObjectEventFrame_JP_08479CAC: @ 0x08479CAC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 191; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/watering.4bpp", 0x600, 0x200 @ gObjectEventPic_BrendanWatering frame slice
	.globl gObjectEventFrame_JP_08479EAC
gObjectEventFrame_JP_08479EAC: @ 0x08479EAC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 191; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/watering.4bpp", 0x800, 0x200 @ gObjectEventPic_BrendanWatering frame slice
	.globl gObjectEventFrame_JP_0847A0AC
gObjectEventFrame_JP_0847A0AC: @ 0x0847A0AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 191; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/watering.4bpp", 0xA00, 0x200 @ gObjectEventPic_BrendanWatering frame slice
	.globl gObjectEventFrame_JP_0847A2AC
gObjectEventFrame_JP_0847A2AC: @ 0x0847A2AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 193; size=0x100
	.incbin "build/graphics/object_events/pics/people/brendan/decorating.4bpp", 0x0, 0x100 @ gObjectEventPic_BrendanDecorating frame slice
	.globl gObjectEventFrame_JP_0847A3AC
gObjectEventFrame_JP_0847A3AC: @ 0x0847A3AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 194; size=0x100
	.incbin "build/graphics/object_events/pics/people/may/decorating.4bpp", 0x0, 0x100 @ gObjectEventPic_MayDecorating frame slice
	.globl gObjectEventFrame_JP_0847A4AC
gObjectEventFrame_JP_0847A4AC: @ 0x0847A4AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 111; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/underwater.4bpp", 0x0, 0x200 @ gObjectEventPic_BrendanUnderwater frame slice
	.globl gObjectEventFrame_JP_0847A6AC
gObjectEventFrame_JP_0847A6AC: @ 0x0847A6AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 111; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/underwater.4bpp", 0x200, 0x200 @ gObjectEventPic_BrendanUnderwater frame slice
	.globl gObjectEventFrame_JP_0847A8AC
gObjectEventFrame_JP_0847A8AC: @ 0x0847A8AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 111; size=0x200
	.incbin "build/graphics/object_events/pics/people/brendan/underwater.4bpp", 0x400, 0x200 @ gObjectEventPic_BrendanUnderwater frame slice
	.globl gObjectEventGfxUnreferenced_JP_0847AAAC
gObjectEventGfxUnreferenced_JP_0847AAAC: @ 0x0847AAAC
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_GRAPHICS
	@ object-event graphics/palette payload not reached by current graphics-info table
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0x00, 0x00, 0x9F, 0x99, 0x00, 0x00, 0xFF, 0x99
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x0F, 0x00, 0x00, 0x99, 0xF9, 0x0F, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0xF0, 0x99, 0x99, 0x00, 0x9F, 0x99, 0x99, 0x00, 0xF0, 0x99, 0x59, 0x00, 0xF0, 0x88, 0x88
	.byte 0x00, 0xF0, 0x88, 0x88, 0x00, 0x00, 0x8F, 0xF8, 0x00, 0xF0, 0xFF, 0x58, 0xF0, 0x6F, 0xF9, 0x58
	.byte 0x99, 0x99, 0xF5, 0x00, 0x99, 0x85, 0xF8, 0x00, 0x88, 0x88, 0x88, 0x00, 0x88, 0x88, 0x88, 0x00
	.byte 0xF8, 0x99, 0xF5, 0x00, 0x9F, 0xF9, 0xF9, 0x00, 0x9F, 0xF9, 0xF5, 0x00, 0x55, 0x55, 0xFF, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0xFF
	.byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xF0
	.byte 0xFF, 0x65, 0x99, 0xFF, 0xFF, 0x5F, 0xF6, 0x87, 0xFF, 0xFF, 0x7F, 0x77, 0xFF, 0xF6, 0xFF, 0xFF
	.byte 0xFF, 0x66, 0xF6, 0x88, 0xFF, 0xFF, 0x8F, 0x88, 0xFF, 0x8F, 0x88, 0x88, 0xFF, 0xFF, 0xFF, 0x88
	.byte 0xFF, 0xFF, 0x8F, 0x0F, 0x77, 0x9F, 0xF9, 0xF8, 0xFF, 0x5F, 0xF5, 0xF8, 0x88, 0xF8, 0x8F, 0xF8
	.byte 0x88, 0x88, 0x88, 0xF8, 0x88, 0x88, 0x88, 0xFF, 0x88, 0x88, 0xFF, 0xFF, 0x88, 0xFF, 0xFF, 0xFF
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00
	.byte 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xF0, 0xFF
	.byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0x0F, 0x00, 0xFF, 0x00, 0x00, 0x00
	.byte 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.globl gObjectEventFrame_JP_0847ACAC
gObjectEventFrame_JP_0847ACAC: @ 0x0847ACAC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 112; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/underwater.4bpp", 0x0, 0x200 @ gObjectEventPic_MayUnderwater frame slice
	.globl gObjectEventFrame_JP_0847AEAC
gObjectEventFrame_JP_0847AEAC: @ 0x0847AEAC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 112; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/underwater.4bpp", 0x200, 0x200 @ gObjectEventPic_MayUnderwater frame slice
	.globl gObjectEventFrame_JP_0847B0AC
gObjectEventFrame_JP_0847B0AC: @ 0x0847B0AC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 112; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/underwater.4bpp", 0x400, 0x200 @ gObjectEventPic_MayUnderwater frame slice
	.globl gObjectEventGfxUnreferenced_JP_0847B2AC
gObjectEventGfxUnreferenced_JP_0847B2AC: @ 0x0847B2AC
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_GRAPHICS
	@ object-event graphics/palette payload not reached by current graphics-info table
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x0F, 0x00, 0xFF, 0x57, 0xF5, 0xF0, 0x99, 0x89, 0x97
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x0F, 0x00, 0x00, 0x99, 0xF9, 0x0F, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x5F, 0x98, 0x99, 0x00, 0x80, 0x8F, 0x99, 0x00, 0xF0, 0x78, 0x88, 0x00, 0xF0, 0x77, 0x77
	.byte 0x00, 0xF0, 0x77, 0x77, 0x00, 0xF0, 0x77, 0x77, 0x00, 0x00, 0x7F, 0x77, 0x00, 0x8F, 0x8F, 0x77
	.byte 0x99, 0x99, 0xF9, 0x00, 0x99, 0x99, 0x78, 0x0F, 0x88, 0x88, 0x78, 0x0F, 0x77, 0x87, 0x79, 0x0F
	.byte 0x77, 0x98, 0xF9, 0x00, 0x87, 0xF9, 0xF9, 0x00, 0x57, 0xF9, 0xF5, 0x00, 0xF7, 0x55, 0xFF, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0xFF
	.byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xF0
	.byte 0xFF, 0x9F, 0xF9, 0x7F, 0xFF, 0x5F, 0x85, 0xF6, 0xFF, 0xFF, 0x6F, 0x66, 0xFF, 0xF5, 0xFF, 0xFF
	.byte 0xFF, 0x55, 0xF5, 0x88, 0xFF, 0xFF, 0x8F, 0x88, 0xFF, 0x8F, 0x88, 0x88, 0xFF, 0xFF, 0xFF, 0x88
	.byte 0xF7, 0xFF, 0x8F, 0x0F, 0x6F, 0x9F, 0xF9, 0xF8, 0xFF, 0x5F, 0xF5, 0xF8, 0x88, 0xF8, 0x8F, 0xF8
	.byte 0x88, 0x88, 0x88, 0xF8, 0x88, 0x88, 0x88, 0xFF, 0x88, 0x88, 0xFF, 0xFF, 0x88, 0xFF, 0xFF, 0xFF
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00
	.byte 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xF0, 0xFF
	.byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0x0F, 0x00, 0xFF, 0x00, 0x00, 0x00
	.byte 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.globl gObjectEventPal_JP_0847B4AC
gObjectEventPal_JP_0847B4AC: @ 0x0847B4AC
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_PALETTE
	@ 16-color object-event palette
	.byte 0x0E, 0x53, 0x7F, 0x67, 0x9B, 0x4A, 0x19, 0x3A, 0x6F, 0x29, 0xEC, 0x4D, 0x69, 0x41, 0x06, 0x35
	.byte 0xA3, 0x28, 0x90, 0x62, 0x1F, 0x2F, 0x77, 0x2E, 0x9F, 0x2D, 0x18, 0x21, 0xFF, 0x7F, 0x00, 0x00
	.globl gObjectEventFrame_JP_0847B4CC
gObjectEventFrame_JP_0847B4CC: @ 0x0847B4CC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 89, 105, 217; size=0x100
	.incbin "build/graphics/object_events/pics/people/may/walking.4bpp", 0x0, 0x100 @ gObjectEventPic_MayNormal frame slice
	.globl gObjectEventFrame_JP_0847B5CC
gObjectEventFrame_JP_0847B5CC: @ 0x0847B5CC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 89, 105, 217; size=0x100
	.incbin "build/graphics/object_events/pics/people/may/walking.4bpp", 0x100, 0x100 @ gObjectEventPic_MayNormal frame slice
	.globl gObjectEventFrame_JP_0847B6CC
gObjectEventFrame_JP_0847B6CC: @ 0x0847B6CC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 89, 105, 217; size=0x100
	.incbin "build/graphics/object_events/pics/people/may/walking.4bpp", 0x200, 0x100 @ gObjectEventPic_MayNormal frame slice
	.globl gObjectEventFrame_JP_0847B7CC
gObjectEventFrame_JP_0847B7CC: @ 0x0847B7CC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 89, 105, 217; size=0x100
	.incbin "build/graphics/object_events/pics/people/may/walking.4bpp", 0x300, 0x100 @ gObjectEventPic_MayNormal frame slice
	.globl gObjectEventFrame_JP_0847B8CC
gObjectEventFrame_JP_0847B8CC: @ 0x0847B8CC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 89, 105, 217; size=0x100
	.incbin "build/graphics/object_events/pics/people/may/walking.4bpp", 0x400, 0x100 @ gObjectEventPic_MayNormal frame slice
	.globl gObjectEventFrame_JP_0847B9CC
gObjectEventFrame_JP_0847B9CC: @ 0x0847B9CC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 89, 105, 217; size=0x100
	.incbin "build/graphics/object_events/pics/people/may/walking.4bpp", 0x500, 0x100 @ gObjectEventPic_MayNormal frame slice
	.globl gObjectEventFrame_JP_0847BACC
gObjectEventFrame_JP_0847BACC: @ 0x0847BACC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 89, 105, 217; size=0x100
	.incbin "build/graphics/object_events/pics/people/may/walking.4bpp", 0x600, 0x100 @ gObjectEventPic_MayNormal frame slice
	.globl gObjectEventFrame_JP_0847BBCC
gObjectEventFrame_JP_0847BBCC: @ 0x0847BBCC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 89, 105, 217; size=0x100
	.incbin "build/graphics/object_events/pics/people/may/walking.4bpp", 0x700, 0x100 @ gObjectEventPic_MayNormal frame slice
	.globl gObjectEventFrame_JP_0847BCCC
gObjectEventFrame_JP_0847BCCC: @ 0x0847BCCC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 89, 105, 217; size=0x100
	.incbin "build/graphics/object_events/pics/people/may/walking.4bpp", 0x800, 0x100 @ gObjectEventPic_MayNormal frame slice
	.globl gObjectEventFrame_JP_0847BDCC
gObjectEventFrame_JP_0847BDCC: @ 0x0847BDCC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 89, 105, 217; size=0x100
	.incbin "build/graphics/object_events/pics/people/may/running.4bpp", 0x0, 0x100 @ gObjectEventPic_MayRunning frame slice
	.globl gObjectEventFrame_JP_0847BECC
gObjectEventFrame_JP_0847BECC: @ 0x0847BECC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 89, 105, 217; size=0x100
	.incbin "build/graphics/object_events/pics/people/may/running.4bpp", 0x100, 0x100 @ gObjectEventPic_MayRunning frame slice
	.globl gObjectEventFrame_JP_0847BFCC
gObjectEventFrame_JP_0847BFCC: @ 0x0847BFCC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 89, 105, 217; size=0x100
	.incbin "build/graphics/object_events/pics/people/may/running.4bpp", 0x200, 0x100 @ gObjectEventPic_MayRunning frame slice
	.globl gObjectEventFrame_JP_0847C0CC
gObjectEventFrame_JP_0847C0CC: @ 0x0847C0CC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 89, 105, 217; size=0x100
	.incbin "build/graphics/object_events/pics/people/may/running.4bpp", 0x300, 0x100 @ gObjectEventPic_MayRunning frame slice
	.globl gObjectEventFrame_JP_0847C1CC
gObjectEventFrame_JP_0847C1CC: @ 0x0847C1CC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 89, 105, 217; size=0x100
	.incbin "build/graphics/object_events/pics/people/may/running.4bpp", 0x400, 0x100 @ gObjectEventPic_MayRunning frame slice
	.globl gObjectEventFrame_JP_0847C2CC
gObjectEventFrame_JP_0847C2CC: @ 0x0847C2CC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 89, 105, 217; size=0x100
	.incbin "build/graphics/object_events/pics/people/may/running.4bpp", 0x500, 0x100 @ gObjectEventPic_MayRunning frame slice
	.globl gObjectEventFrame_JP_0847C3CC
gObjectEventFrame_JP_0847C3CC: @ 0x0847C3CC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 89, 105, 217; size=0x100
	.incbin "build/graphics/object_events/pics/people/may/running.4bpp", 0x600, 0x100 @ gObjectEventPic_MayRunning frame slice
	.globl gObjectEventFrame_JP_0847C4CC
gObjectEventFrame_JP_0847C4CC: @ 0x0847C4CC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 89, 105, 217; size=0x100
	.incbin "build/graphics/object_events/pics/people/may/running.4bpp", 0x700, 0x100 @ gObjectEventPic_MayRunning frame slice
	.globl gObjectEventFrame_JP_0847C5CC
gObjectEventFrame_JP_0847C5CC: @ 0x0847C5CC
	@ SpriteFrameImage 4bpp data; object gfx id(s): 89, 105, 217; size=0x100
	.incbin "build/graphics/object_events/pics/people/may/running.4bpp", 0x800, 0x100 @ gObjectEventPic_MayRunning frame slice
.elseif .L__inc_fragment_select_ded3999bc9ec == 4
	.globl gObjectEventPal_Brendan
gObjectEventPal_Brendan: @ 0x0847C6CC
	@ 16-color object-event palette
	@ Editable 16-color object-event palette.
	.incbin "build/graphics/semantic_palettes/object_event/gObjectEventPal_Brendan.gbapal"
	.globl gObjectEventPal_JP_0847C6EC
gObjectEventPal_JP_0847C6EC: @ 0x0847C6EC
	@ 16-color object-event palette
	.globl gObjectEventGfxUnreferenced_JP_0847C6EC
gObjectEventGfxUnreferenced_JP_0847C6EC: @ 0x0847C6EC
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_GRAPHICS
	@ object-event graphics/palette payload not reached by current graphics-info table
	.byte 0x92, 0x73, 0xBF, 0x6B, 0x5F, 0x6B, 0xDD, 0x5A, 0x75, 0x52, 0x10, 0x5A, 0x69, 0x41, 0x38, 0x4A
	.byte 0x4D, 0x3D, 0xBD, 0x7F, 0xD4, 0x4F, 0x2F, 0x3F, 0x7F, 0x4E, 0xFC, 0x45, 0xFF, 0x7F, 0xCD, 0x35
	.globl gObjectEventFrame_JP_0847C70C
gObjectEventFrame_JP_0847C70C: @ 0x0847C70C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 236; size=0x100
	.incbin "build/graphics/object_events/pics/people/ruby_sapphire_may/walking.4bpp", 0x0, 0x100 @ gObjectEventPic_RubySapphireMayNormal frame slice
	.globl gObjectEventFrame_JP_0847C80C
gObjectEventFrame_JP_0847C80C: @ 0x0847C80C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 236; size=0x100
	.incbin "build/graphics/object_events/pics/people/ruby_sapphire_may/walking.4bpp", 0x100, 0x100 @ gObjectEventPic_RubySapphireMayNormal frame slice
	.globl gObjectEventFrame_JP_0847C90C
gObjectEventFrame_JP_0847C90C: @ 0x0847C90C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 236; size=0x100
	.incbin "build/graphics/object_events/pics/people/ruby_sapphire_may/walking.4bpp", 0x200, 0x100 @ gObjectEventPic_RubySapphireMayNormal frame slice
	.globl gObjectEventFrame_JP_0847CA0C
gObjectEventFrame_JP_0847CA0C: @ 0x0847CA0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 236; size=0x100
	.incbin "build/graphics/object_events/pics/people/ruby_sapphire_may/walking.4bpp", 0x300, 0x100 @ gObjectEventPic_RubySapphireMayNormal frame slice
	.globl gObjectEventFrame_JP_0847CB0C
gObjectEventFrame_JP_0847CB0C: @ 0x0847CB0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 236; size=0x100
	.incbin "build/graphics/object_events/pics/people/ruby_sapphire_may/walking.4bpp", 0x400, 0x100 @ gObjectEventPic_RubySapphireMayNormal frame slice
	.globl gObjectEventFrame_JP_0847CC0C
gObjectEventFrame_JP_0847CC0C: @ 0x0847CC0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 236; size=0x100
	.incbin "build/graphics/object_events/pics/people/ruby_sapphire_may/walking.4bpp", 0x500, 0x100 @ gObjectEventPic_RubySapphireMayNormal frame slice
	.globl gObjectEventFrame_JP_0847CD0C
gObjectEventFrame_JP_0847CD0C: @ 0x0847CD0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 236; size=0x100
	.incbin "build/graphics/object_events/pics/people/ruby_sapphire_may/walking.4bpp", 0x600, 0x100 @ gObjectEventPic_RubySapphireMayNormal frame slice
	.globl gObjectEventFrame_JP_0847CE0C
gObjectEventFrame_JP_0847CE0C: @ 0x0847CE0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 236; size=0x100
	.incbin "build/graphics/object_events/pics/people/ruby_sapphire_may/walking.4bpp", 0x700, 0x100 @ gObjectEventPic_RubySapphireMayNormal frame slice
	.globl gObjectEventFrame_JP_0847CF0C
gObjectEventFrame_JP_0847CF0C: @ 0x0847CF0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 236; size=0x100
	.incbin "build/graphics/object_events/pics/people/ruby_sapphire_may/walking.4bpp", 0x800, 0x100 @ gObjectEventPic_RubySapphireMayNormal frame slice
	.globl gObjectEventGfxUnreferenced_JP_0847D00C
gObjectEventGfxUnreferenced_JP_0847D00C: @ 0x0847D00C
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_GFX
	@ Object-event sprite frame graphics/data.
	@ object-event graphics/palette payload not reached by current graphics-info table
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00
	.byte 0x00, 0x80, 0xDD, 0x08, 0x00, 0x80, 0xDD, 0xD8, 0x00, 0x80, 0x98, 0xCC, 0x00, 0x80, 0x9C, 0xCC
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00
	.byte 0x80, 0xDD, 0x08, 0x00, 0x8D, 0xDD, 0x08, 0x00, 0xCC, 0x89, 0x08, 0x00, 0xCC, 0xC9, 0x08, 0x00
	.byte 0x00, 0x4F, 0xC8, 0xE9, 0x00, 0x7F, 0xD7, 0xCC, 0xF0, 0x27, 0x47, 0x48, 0xF0, 0x74, 0x88, 0x72
	.byte 0x80, 0x84, 0x18, 0x41, 0x80, 0x48, 0x23, 0x18, 0x00, 0xFF, 0x24, 0x28, 0xF0, 0xEE, 0x4F, 0x33
	.byte 0x9E, 0x8C, 0xF4, 0x00, 0xCC, 0x7D, 0xF7, 0x00, 0x84, 0x74, 0x72, 0x0F, 0x28, 0x88, 0x47, 0x0F
	.byte 0x18, 0x81, 0x48, 0x08, 0x81, 0x32, 0x84, 0x08, 0x82, 0x42, 0xFF, 0x00, 0x33, 0xF4, 0xEE, 0x0F
	.byte 0xF0, 0x99, 0xFF, 0x6F, 0x00, 0xFF, 0x5F, 0xDD, 0x00, 0xF0, 0x68, 0x99, 0x00, 0x00, 0x4F, 0x66
	.byte 0x00, 0x00, 0xDF, 0xF4, 0x00, 0x00, 0xF0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0xF6, 0xFF, 0x99, 0x0F, 0xDD, 0xF5, 0xFF, 0x00, 0x99, 0x86, 0x0F, 0x00, 0x66, 0xF4, 0x00, 0x00
	.byte 0x4F, 0xFD, 0x00, 0x00, 0xF0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x88, 0x00
	.byte 0x00, 0xC8, 0xDC, 0xD8, 0x00, 0xD8, 0xDD, 0xC8, 0x00, 0x80, 0x88, 0xD8, 0x00, 0x8F, 0xDD, 0x89
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x08, 0x00
	.byte 0x8D, 0xCD, 0x8C, 0x00, 0x8C, 0xDD, 0x8D, 0x00, 0x8D, 0x88, 0x08, 0x00, 0x98, 0xDD, 0xF8, 0x00
	.byte 0x00, 0x7F, 0xD8, 0xDD, 0xF0, 0x77, 0x87, 0x88, 0xF0, 0x44, 0x77, 0x77, 0x80, 0x84, 0x44, 0x77
	.byte 0x80, 0x48, 0x48, 0x44, 0xF0, 0xF0, 0x83, 0x48, 0x00, 0xFF, 0x4F, 0x33, 0xF0, 0x9E, 0x68, 0xD6
	.byte 0xDD, 0x8D, 0xF7, 0x00, 0x88, 0x78, 0x77, 0x0F, 0x77, 0x77, 0x44, 0x0F, 0x77, 0x44, 0x48, 0x08
	.byte 0x44, 0x84, 0x84, 0x08, 0x84, 0x38, 0x0F, 0x0F, 0x33, 0xF4, 0xFF, 0x00, 0x6D, 0x86, 0xE9, 0x0F
	.byte 0xF0, 0x89, 0xD8, 0x88, 0x00, 0xFF, 0x85, 0xAB, 0x00, 0xF0, 0x8F, 0xBA, 0x00, 0x00, 0x2F, 0x66
	.byte 0x00, 0x00, 0xDF, 0xFD, 0x00, 0x00, 0xF0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x88, 0x8D, 0x98, 0x0F, 0xBA, 0x58, 0xFF, 0x00, 0xAB, 0xF8, 0x0F, 0x00, 0x66, 0xF2, 0x00, 0x00
	.byte 0xDF, 0xFD, 0x00, 0x00, 0xF0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD8, 0x8D, 0x00, 0x98, 0xCC, 0xCC, 0x80, 0xCC, 0xE9, 0x9E
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x88, 0x08, 0x00, 0x00, 0xDD, 0x88, 0x08, 0x00, 0x89, 0xDD, 0x8D, 0x00, 0xCC, 0xD8, 0x08, 0x00
	.byte 0x78, 0xD8, 0xCC, 0xCC, 0x78, 0x87, 0x44, 0x44, 0x77, 0x88, 0x77, 0x77, 0x84, 0x11, 0x78, 0x27
	.byte 0x14, 0x81, 0x82, 0x77, 0x14, 0x81, 0x82, 0x74, 0x40, 0x33, 0x33, 0x48, 0x00, 0x44, 0x83, 0x48
	.byte 0x8D, 0x8F, 0x00, 0x00, 0x74, 0xF7, 0x00, 0x00, 0x77, 0xF7, 0x00, 0x00, 0x27, 0xF7, 0x00, 0x00
	.byte 0x77, 0xF7, 0x00, 0x00, 0x47, 0x0F, 0x00, 0x00, 0x44, 0x0F, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x66, 0xFF, 0x00, 0x00, 0x8F, 0xEE, 0x00, 0x00, 0x8F, 0x99, 0x00, 0x00, 0xF0, 0xFF
	.byte 0x00, 0x00, 0xF0, 0x66, 0x00, 0x00, 0xDF, 0x88, 0x00, 0x00, 0xF0, 0xFF, 0x00, 0x00, 0x00, 0x00
	.byte 0xD8, 0xFF, 0x00, 0x00, 0xDF, 0xA6, 0x0F, 0x00, 0xDF, 0xBB, 0x0F, 0x00, 0x99, 0xFF, 0x00, 0x00
	.byte 0x66, 0x0F, 0x00, 0x00, 0x4B, 0x0F, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x88, 0x00, 0x00, 0x80, 0xDD, 0x08, 0x00, 0x80, 0xDD, 0xD8, 0x00, 0x80, 0x98, 0xCC
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x88, 0x00, 0x00, 0x80, 0xDD, 0x08, 0x00, 0x8D, 0xDD, 0x08, 0x00, 0xCC, 0x89, 0x08, 0x00
	.byte 0x60, 0x86, 0x9C, 0xCC, 0x96, 0x4F, 0xC8, 0xE9, 0xF6, 0x77, 0xD7, 0xCC, 0x7F, 0x27, 0x47, 0x48
	.byte 0x7F, 0x74, 0x88, 0x72, 0x80, 0x88, 0x18, 0x41, 0x00, 0x18, 0x23, 0x18, 0x00, 0xFF, 0x24, 0x28
	.byte 0xCC, 0xC9, 0x08, 0x00, 0x9E, 0x8C, 0xF4, 0x00, 0xCC, 0x7D, 0x77, 0x0F, 0x84, 0x74, 0x72, 0xF7
	.byte 0x28, 0x88, 0x47, 0xF7, 0x18, 0x81, 0x88, 0x88, 0x81, 0x32, 0x81, 0x00, 0x82, 0x42, 0xFF, 0x00
	.byte 0x00, 0xF0, 0x4F, 0x33, 0x00, 0xF0, 0x85, 0x68, 0x00, 0xF0, 0x59, 0xDD, 0x00, 0x00, 0x98, 0x66
	.byte 0x00, 0x00, 0xF0, 0xCC, 0x00, 0x00, 0xF0, 0x44, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00
	.byte 0x33, 0xF4, 0x08, 0x00, 0x86, 0x3F, 0x08, 0x00, 0xEF, 0xFE, 0x0F, 0x00, 0x9F, 0xF9, 0x00, 0x00
	.byte 0xFF, 0x0F, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x88, 0x00, 0x00, 0x80, 0xDD, 0x08, 0x00, 0x80, 0xDD, 0xD8, 0x00, 0x80, 0x98, 0xCC
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x88, 0x00, 0x00, 0x80, 0xDD, 0x08, 0x00, 0x8D, 0xDD, 0x08, 0x00, 0xCC, 0x89, 0x08, 0x00
	.byte 0x00, 0x80, 0x9C, 0xCC, 0x00, 0x4F, 0xC8, 0xE9, 0xF0, 0x77, 0xD7, 0xCC, 0x7F, 0x27, 0x47, 0x48
	.byte 0x7F, 0x74, 0x88, 0x82, 0x88, 0x88, 0x18, 0x81, 0x00, 0x18, 0x23, 0x18, 0x00, 0xFF, 0x24, 0x28
	.byte 0xCC, 0xC9, 0x68, 0x06, 0x9E, 0x8C, 0xF4, 0x69, 0xCC, 0x7D, 0x77, 0x6F, 0x84, 0x74, 0x72, 0xF7
	.byte 0x27, 0x88, 0x47, 0xF7, 0x14, 0x81, 0x88, 0x08, 0x81, 0x32, 0x81, 0x00, 0x82, 0x42, 0xFF, 0x00
	.byte 0x00, 0x80, 0x4F, 0x33, 0x00, 0x80, 0xF3, 0x68, 0x00, 0xF0, 0xEF, 0xFE, 0x00, 0x00, 0x9F, 0xF9
	.byte 0x00, 0x00, 0xF0, 0xFF, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x33, 0xF4, 0x0F, 0x00, 0x86, 0x58, 0x0F, 0x00, 0xDD, 0x95, 0x0F, 0x00, 0x66, 0x89, 0x00, 0x00
	.byte 0xCC, 0x0F, 0x00, 0x00, 0x44, 0x0F, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x80, 0x88, 0x00, 0x00, 0xC8, 0xDC, 0xD8, 0x00, 0xD8, 0xDD, 0xC8, 0x00, 0x80, 0x88, 0xD8
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x88, 0x08, 0x00, 0x8D, 0xCD, 0x8C, 0x00, 0x8C, 0xDD, 0x8D, 0x00, 0x8D, 0x88, 0x08, 0x00
	.byte 0x00, 0x8F, 0xDD, 0x89, 0xF0, 0x77, 0xD8, 0xDD, 0x7F, 0x77, 0x87, 0x88, 0x7F, 0x44, 0x77, 0x77
	.byte 0x8F, 0x84, 0x44, 0x77, 0xF0, 0x4F, 0x48, 0x44, 0x00, 0xF0, 0x83, 0x48, 0x00, 0xDF, 0x4F, 0x33
	.byte 0x98, 0xDD, 0xF8, 0x00, 0xDD, 0x8D, 0x77, 0x0F, 0x88, 0x78, 0x77, 0xF7, 0x77, 0x77, 0x44, 0xF7
	.byte 0x77, 0x44, 0x48, 0xF8, 0x44, 0x84, 0xF4, 0x0F, 0x84, 0x38, 0x0F, 0x00, 0x33, 0xF4, 0x00, 0x00
	.byte 0x00, 0xDF, 0x66, 0xD6, 0x00, 0xF0, 0xDF, 0x8D, 0x00, 0xF0, 0xD5, 0xB8, 0x00, 0xF0, 0x95, 0xA8
	.byte 0x00, 0x00, 0x6F, 0x63, 0x00, 0x00, 0xF0, 0xDD, 0x00, 0x00, 0xF0, 0x66, 0x00, 0x00, 0x00, 0xFF
	.byte 0x6D, 0x46, 0x0F, 0x00, 0x88, 0xE8, 0xFE, 0x00, 0xAA, 0x8B, 0xF9, 0x00, 0xBB, 0x8A, 0x0F, 0x00
	.byte 0x66, 0x06, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x80, 0x88, 0x00, 0x00, 0xC8, 0xDC, 0xD8, 0x00, 0xD8, 0xDD, 0xC8, 0x00, 0x80, 0x88, 0xD8
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x88, 0x08, 0x00, 0x8D, 0xCD, 0x8C, 0x00, 0x8C, 0xDD, 0x8D, 0x00, 0x8D, 0x88, 0x08, 0x00
	.byte 0x00, 0x8F, 0xDD, 0x89, 0xF0, 0x77, 0xD8, 0xDD, 0x7F, 0x77, 0x87, 0x88, 0x7F, 0x44, 0x77, 0x77
	.byte 0x8F, 0x84, 0x44, 0x77, 0xF0, 0x4F, 0x48, 0x44, 0x00, 0xF0, 0x83, 0x48, 0x00, 0x00, 0x4F, 0x33
	.byte 0x98, 0xDD, 0xF8, 0x00, 0xDD, 0x8D, 0x77, 0x0F, 0x88, 0x78, 0x77, 0xF7, 0x77, 0x77, 0x44, 0xF7
	.byte 0x77, 0x44, 0x48, 0xF8, 0x44, 0x84, 0xF4, 0x0F, 0x84, 0x38, 0x0F, 0x00, 0x33, 0xF4, 0xFD, 0x00
	.byte 0x00, 0xF0, 0x64, 0xD6, 0x00, 0xEF, 0x8E, 0x88, 0x00, 0x9F, 0xB8, 0xAA, 0x00, 0xF0, 0xA8, 0xBB
	.byte 0x00, 0x00, 0x60, 0x66, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00
	.byte 0x6D, 0x66, 0xFD, 0x00, 0xD8, 0xFD, 0x0F, 0x00, 0x8B, 0x5D, 0x0F, 0x00, 0x8A, 0x59, 0x0F, 0x00
	.byte 0x36, 0xF6, 0x00, 0x00, 0xDD, 0x0F, 0x00, 0x00, 0x66, 0x0F, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD8, 0x8D, 0x00, 0x98, 0xCC, 0xCC
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x88, 0x08, 0x00, 0x00, 0xDD, 0x88, 0x08, 0x00, 0x89, 0xDD, 0x8D, 0x00
	.byte 0x80, 0xCC, 0xE9, 0x9E, 0x78, 0xD8, 0xCC, 0xCC, 0x78, 0x87, 0x44, 0x44, 0x77, 0x88, 0x77, 0x77
	.byte 0x84, 0x11, 0x78, 0x72, 0x14, 0x81, 0x82, 0x77, 0x14, 0x81, 0x32, 0x48, 0x40, 0x33, 0x33, 0x83
	.byte 0xCC, 0xD8, 0x08, 0x00, 0x8D, 0x8F, 0x00, 0x00, 0x74, 0xF7, 0x00, 0x00, 0x77, 0xF4, 0x00, 0x00
	.byte 0x72, 0x77, 0x0F, 0x00, 0x77, 0x77, 0x0F, 0x00, 0x77, 0x47, 0xF4, 0x00, 0x48, 0x84, 0x0F, 0x00
	.byte 0x00, 0x44, 0x43, 0x68, 0xF0, 0xEE, 0x28, 0xDD, 0xF0, 0x99, 0xFF, 0xD8, 0x00, 0xFF, 0xFF, 0xDF
	.byte 0x00, 0x40, 0xF4, 0x96, 0x00, 0xF0, 0x44, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x8D, 0x98, 0x0F, 0x00, 0xFD, 0xFF, 0x00, 0x00, 0xDD, 0xA6, 0x0F, 0x00, 0x9D, 0xBB, 0x0F, 0x00
	.byte 0x69, 0xF6, 0xFD, 0x00, 0xFF, 0xBF, 0xFD, 0x00, 0xF0, 0xCC, 0x0F, 0x00, 0x00, 0xFF, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD8, 0x8D, 0x00, 0x98, 0xCC, 0xCC
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x88, 0x08, 0x00, 0x00, 0xDD, 0x88, 0x08, 0x00, 0x89, 0xDD, 0x8D, 0x00
	.byte 0x80, 0xCC, 0xE9, 0x9E, 0x78, 0xD8, 0xCC, 0xCC, 0x78, 0x87, 0x44, 0x44, 0x77, 0x88, 0x77, 0x77
	.byte 0x84, 0x11, 0x78, 0x72, 0x14, 0x81, 0x82, 0x77, 0x14, 0x81, 0x32, 0x48, 0x40, 0x33, 0x33, 0x83
	.byte 0xCC, 0xD8, 0x08, 0x00, 0x8D, 0x8F, 0x00, 0x00, 0x74, 0xF7, 0x00, 0x00, 0x77, 0xF4, 0x00, 0x00
	.byte 0x72, 0x77, 0x0F, 0x00, 0x77, 0x77, 0x0F, 0x00, 0x77, 0x47, 0xF4, 0x00, 0x48, 0x84, 0x0F, 0x00
	.byte 0x96, 0x44, 0x43, 0x66, 0x96, 0xF9, 0x6F, 0xD6, 0xF0, 0x0F, 0xDF, 0x8D, 0x00, 0x80, 0xF0, 0x88
	.byte 0x00, 0xCF, 0xFF, 0x9F, 0x00, 0xDF, 0x2B, 0xFF, 0x00, 0xF0, 0x4D, 0x0F, 0x00, 0x00, 0xFF, 0x00
	.byte 0x84, 0xF8, 0x0F, 0x00, 0x26, 0xEF, 0xFE, 0x00, 0xF8, 0x9F, 0xF9, 0x00, 0xDD, 0xF9, 0x0F, 0x00
	.byte 0x99, 0x66, 0xF4, 0x00, 0xFF, 0x4F, 0xF4, 0x00, 0x00, 0xF0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00
.elseif .L__inc_fragment_select_ded3999bc9ec == 5
	.globl gObjectEventPal_May
gObjectEventPal_May: @ 0x0847D90C
	@ 16-color object-event palette
	@ Editable 16-color object-event palette.
	.incbin "build/graphics/semantic_palettes/object_event/gObjectEventPal_May.gbapal"
	.globl gObjectEventGfxUnreferenced_JP_0847D92C
gObjectEventGfxUnreferenced_JP_0847D92C: @ 0x0847D92C
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_GRAPHICS
	@ object-event graphics/palette payload not reached by current graphics-info table
	.byte 0x0E, 0x53, 0xFF, 0x7F, 0x1F, 0x6B, 0x9D, 0x5A, 0xF3, 0x49, 0x10, 0x5A, 0x69, 0x41, 0x38, 0x4A
	.byte 0x4D, 0x3D, 0xBD, 0x7F, 0x9F, 0x4F, 0xFB, 0x4E, 0x1F, 0x4E, 0x9C, 0x41, 0xFF, 0x7F, 0x84, 0x20
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.globl gObjectEventFrame_JP_0847DB0C
gObjectEventFrame_JP_0847DB0C: @ 0x0847DB0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 90, 106; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/mach_bike.4bpp", 0x0, 0x200 @ gObjectEventPic_MayMachBike frame slice
	.globl gObjectEventFrame_JP_0847DD0C
gObjectEventFrame_JP_0847DD0C: @ 0x0847DD0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 90, 106; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/mach_bike.4bpp", 0x200, 0x200 @ gObjectEventPic_MayMachBike frame slice
	.globl gObjectEventFrame_JP_0847DF0C
gObjectEventFrame_JP_0847DF0C: @ 0x0847DF0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 90, 106; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/mach_bike.4bpp", 0x400, 0x200 @ gObjectEventPic_MayMachBike frame slice
	.globl gObjectEventFrame_JP_0847E10C
gObjectEventFrame_JP_0847E10C: @ 0x0847E10C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 90, 106; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/mach_bike.4bpp", 0x600, 0x200 @ gObjectEventPic_MayMachBike frame slice
	.globl gObjectEventFrame_JP_0847E30C
gObjectEventFrame_JP_0847E30C: @ 0x0847E30C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 90, 106; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/mach_bike.4bpp", 0x800, 0x200 @ gObjectEventPic_MayMachBike frame slice
	.globl gObjectEventFrame_JP_0847E50C
gObjectEventFrame_JP_0847E50C: @ 0x0847E50C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 90, 106; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/mach_bike.4bpp", 0xA00, 0x200 @ gObjectEventPic_MayMachBike frame slice
	.globl gObjectEventFrame_JP_0847E70C
gObjectEventFrame_JP_0847E70C: @ 0x0847E70C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 90, 106; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/mach_bike.4bpp", 0xC00, 0x200 @ gObjectEventPic_MayMachBike frame slice
	.globl gObjectEventFrame_JP_0847E90C
gObjectEventFrame_JP_0847E90C: @ 0x0847E90C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 90, 106; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/mach_bike.4bpp", 0xE00, 0x200 @ gObjectEventPic_MayMachBike frame slice
	.globl gObjectEventFrame_JP_0847EB0C
gObjectEventFrame_JP_0847EB0C: @ 0x0847EB0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 90, 106; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/mach_bike.4bpp", 0x1000, 0x200 @ gObjectEventPic_MayMachBike frame slice
	.globl gObjectEventFrame_JP_0847ED0C
gObjectEventFrame_JP_0847ED0C: @ 0x0847ED0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0x0, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_0847EF0C
gObjectEventFrame_JP_0847EF0C: @ 0x0847EF0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0x200, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_0847F10C
gObjectEventFrame_JP_0847F10C: @ 0x0847F10C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0x400, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_0847F30C
gObjectEventFrame_JP_0847F30C: @ 0x0847F30C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0x600, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_0847F50C
gObjectEventFrame_JP_0847F50C: @ 0x0847F50C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0x800, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_0847F70C
gObjectEventFrame_JP_0847F70C: @ 0x0847F70C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0xA00, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_0847F90C
gObjectEventFrame_JP_0847F90C: @ 0x0847F90C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0xC00, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_0847FB0C
gObjectEventFrame_JP_0847FB0C: @ 0x0847FB0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0xE00, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_0847FD0C
gObjectEventFrame_JP_0847FD0C: @ 0x0847FD0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0x1000, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_0847FF0C
gObjectEventFrame_JP_0847FF0C: @ 0x0847FF0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0x1200, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_0848010C
gObjectEventFrame_JP_0848010C: @ 0x0848010C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0x1400, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_0848030C
gObjectEventFrame_JP_0848030C: @ 0x0848030C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0x1600, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_0848050C
gObjectEventFrame_JP_0848050C: @ 0x0848050C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0x1800, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_0848070C
gObjectEventFrame_JP_0848070C: @ 0x0848070C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0x1A00, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_0848090C
gObjectEventFrame_JP_0848090C: @ 0x0848090C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0x1C00, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_08480B0C
gObjectEventFrame_JP_08480B0C: @ 0x08480B0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0x1E00, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_08480D0C
gObjectEventFrame_JP_08480D0C: @ 0x08480D0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0x2000, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_08480F0C
gObjectEventFrame_JP_08480F0C: @ 0x08480F0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0x2200, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_0848110C
gObjectEventFrame_JP_0848110C: @ 0x0848110C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0x2400, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_0848130C
gObjectEventFrame_JP_0848130C: @ 0x0848130C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0x2600, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_0848150C
gObjectEventFrame_JP_0848150C: @ 0x0848150C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0x2800, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_0848170C
gObjectEventFrame_JP_0848170C: @ 0x0848170C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0x2A00, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_0848190C
gObjectEventFrame_JP_0848190C: @ 0x0848190C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0x2C00, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_08481B0C
gObjectEventFrame_JP_08481B0C: @ 0x08481B0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0x2E00, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_08481D0C
gObjectEventFrame_JP_08481D0C: @ 0x08481D0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0x3000, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_08481F0C
gObjectEventFrame_JP_08481F0C: @ 0x08481F0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0x3200, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_0848210C
gObjectEventFrame_JP_0848210C: @ 0x0848210C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 91, 107; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/acro_bike.4bpp", 0x3400, 0x200 @ gObjectEventPic_MayAcroBike frame slice
	.globl gObjectEventFrame_JP_0848230C
gObjectEventFrame_JP_0848230C: @ 0x0848230C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 92, 108; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/surfing.4bpp", 0x0, 0x200 @ gObjectEventPic_MaySurfing frame slice
	.globl gObjectEventFrame_JP_0848250C
gObjectEventFrame_JP_0848250C: @ 0x0848250C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 92, 108; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/surfing.4bpp", 0x200, 0x200 @ gObjectEventPic_MaySurfing frame slice
	.globl gObjectEventFrame_JP_0848270C
gObjectEventFrame_JP_0848270C: @ 0x0848270C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 92, 108; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/surfing.4bpp", 0x400, 0x200 @ gObjectEventPic_MaySurfing frame slice
	.globl gObjectEventFrame_JP_0848290C
gObjectEventFrame_JP_0848290C: @ 0x0848290C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 92, 108; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/surfing.4bpp", 0x600, 0x200 @ gObjectEventPic_MaySurfing frame slice
	.globl gObjectEventFrame_JP_08482B0C
gObjectEventFrame_JP_08482B0C: @ 0x08482B0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 92, 108; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/surfing.4bpp", 0x800, 0x200 @ gObjectEventPic_MaySurfing frame slice
	.globl gObjectEventFrame_JP_08482D0C
gObjectEventFrame_JP_08482D0C: @ 0x08482D0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 92, 108; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/surfing.4bpp", 0xA00, 0x200 @ gObjectEventPic_MaySurfing frame slice
	.globl gObjectEventFrame_JP_08482F0C
gObjectEventFrame_JP_08482F0C: @ 0x08482F0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 93, 109; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/field_move.4bpp", 0x0, 0x200 @ gObjectEventPic_MayFieldMove frame slice
	.globl gObjectEventFrame_JP_0848310C
gObjectEventFrame_JP_0848310C: @ 0x0848310C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 93, 109; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/field_move.4bpp", 0x200, 0x200 @ gObjectEventPic_MayFieldMove frame slice
	.globl gObjectEventFrame_JP_0848330C
gObjectEventFrame_JP_0848330C: @ 0x0848330C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 93, 109; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/field_move.4bpp", 0x400, 0x200 @ gObjectEventPic_MayFieldMove frame slice
	.globl gObjectEventFrame_JP_0848350C
gObjectEventFrame_JP_0848350C: @ 0x0848350C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 93, 109; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/field_move.4bpp", 0x600, 0x200 @ gObjectEventPic_MayFieldMove frame slice
	.globl gObjectEventFrame_JP_0848370C
gObjectEventFrame_JP_0848370C: @ 0x0848370C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 93, 109; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/field_move.4bpp", 0x800, 0x200 @ gObjectEventPic_MayFieldMove frame slice
	.globl gObjectEventFrame_JP_0848390C
gObjectEventFrame_JP_0848390C: @ 0x0848390C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 138; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/fishing.4bpp", 0x0, 0x200 @ gObjectEventPic_MayFishing frame slice
	.globl gObjectEventFrame_JP_08483B0C
gObjectEventFrame_JP_08483B0C: @ 0x08483B0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 138; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/fishing.4bpp", 0x200, 0x200 @ gObjectEventPic_MayFishing frame slice
	.globl gObjectEventFrame_JP_08483D0C
gObjectEventFrame_JP_08483D0C: @ 0x08483D0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 138; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/fishing.4bpp", 0x400, 0x200 @ gObjectEventPic_MayFishing frame slice
	.globl gObjectEventFrame_JP_08483F0C
gObjectEventFrame_JP_08483F0C: @ 0x08483F0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 138; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/fishing.4bpp", 0x600, 0x200 @ gObjectEventPic_MayFishing frame slice
	.globl gObjectEventFrame_JP_0848410C
gObjectEventFrame_JP_0848410C: @ 0x0848410C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 138; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/fishing.4bpp", 0x800, 0x200 @ gObjectEventPic_MayFishing frame slice
	.globl gObjectEventFrame_JP_0848430C
gObjectEventFrame_JP_0848430C: @ 0x0848430C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 138; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/fishing.4bpp", 0xA00, 0x200 @ gObjectEventPic_MayFishing frame slice
	.globl gObjectEventFrame_JP_0848450C
gObjectEventFrame_JP_0848450C: @ 0x0848450C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 138; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/fishing.4bpp", 0xC00, 0x200 @ gObjectEventPic_MayFishing frame slice
	.globl gObjectEventFrame_JP_0848470C
gObjectEventFrame_JP_0848470C: @ 0x0848470C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 138; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/fishing.4bpp", 0xE00, 0x200 @ gObjectEventPic_MayFishing frame slice
	.globl gObjectEventFrame_JP_0848490C
gObjectEventFrame_JP_0848490C: @ 0x0848490C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 138; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/fishing.4bpp", 0x1000, 0x200 @ gObjectEventPic_MayFishing frame slice
	.globl gObjectEventFrame_JP_08484B0C
gObjectEventFrame_JP_08484B0C: @ 0x08484B0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 138; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/fishing.4bpp", 0x1200, 0x200 @ gObjectEventPic_MayFishing frame slice
	.globl gObjectEventFrame_JP_08484D0C
gObjectEventFrame_JP_08484D0C: @ 0x08484D0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 138; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/fishing.4bpp", 0x1400, 0x200 @ gObjectEventPic_MayFishing frame slice
	.globl gObjectEventFrame_JP_08484F0C
gObjectEventFrame_JP_08484F0C: @ 0x08484F0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 138; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/fishing.4bpp", 0x1600, 0x200 @ gObjectEventPic_MayFishing frame slice
	.globl gObjectEventFrame_JP_0848510C
gObjectEventFrame_JP_0848510C: @ 0x0848510C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 192; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/watering.4bpp", 0x0, 0x200 @ gObjectEventPic_MayWatering frame slice
	.globl gObjectEventFrame_JP_0848530C
gObjectEventFrame_JP_0848530C: @ 0x0848530C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 192; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/watering.4bpp", 0x200, 0x200 @ gObjectEventPic_MayWatering frame slice
	.globl gObjectEventFrame_JP_0848550C
gObjectEventFrame_JP_0848550C: @ 0x0848550C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 192; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/watering.4bpp", 0x400, 0x200 @ gObjectEventPic_MayWatering frame slice
	.globl gObjectEventFrame_JP_0848570C
gObjectEventFrame_JP_0848570C: @ 0x0848570C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 192; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/watering.4bpp", 0x600, 0x200 @ gObjectEventPic_MayWatering frame slice
	.globl gObjectEventFrame_JP_0848590C
gObjectEventFrame_JP_0848590C: @ 0x0848590C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 192; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/watering.4bpp", 0x800, 0x200 @ gObjectEventPic_MayWatering frame slice
	.globl gObjectEventFrame_JP_08485B0C
gObjectEventFrame_JP_08485B0C: @ 0x08485B0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 192; size=0x200
	.incbin "build/graphics/object_events/pics/people/may/watering.4bpp", 0xA00, 0x200 @ gObjectEventPic_MayWatering frame slice
	.globl gObjectEventPal_JP_08485D0C
gObjectEventPal_JP_08485D0C: @ 0x08485D0C
	@ 16-color object-event palette
	.globl gObjectEventGfxUnreferenced_JP_08485D0C
gObjectEventGfxUnreferenced_JP_08485D0C: @ 0x08485D0C
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_GRAPHICS
	@ object-event graphics/palette payload not reached by current graphics-info table
	.byte 0x0E, 0x53, 0x5F, 0x5B, 0x1F, 0x4B, 0x5B, 0x3A, 0x0F, 0x21, 0x9F, 0x5A, 0xBA, 0x3D, 0x11, 0x29
	.byte 0x12, 0x7B, 0x2B, 0x5E, 0xC2, 0x28, 0x96, 0x32, 0xCF, 0x21, 0xE7, 0x0C, 0xFF, 0x7F, 0x00, 0x00
	.globl gObjectEventPal_JP_08485D2C
gObjectEventPal_JP_08485D2C: @ 0x08485D2C
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_PALETTE
	@ 16-color object-event palette
	.byte 0x0E, 0x53, 0x5F, 0x5B, 0x1F, 0x4B, 0x5B, 0x3A, 0x0F, 0x21, 0x5F, 0x13, 0x7B, 0x0A, 0xED, 0x04
	.byte 0x5C, 0x31, 0x18, 0x18, 0x0C, 0x0C, 0x93, 0x25, 0xCD, 0x18, 0x06, 0x0C, 0xFF, 0x7F, 0x00, 0x00
	.globl gObjectEventPal_JP_08485D4C
gObjectEventPal_JP_08485D4C: @ 0x08485D4C
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_PALETTE
	@ 16-color object-event palette
	.byte 0x0E, 0x53, 0x5F, 0x5B, 0x1F, 0x4B, 0x5B, 0x3A, 0x0F, 0x21, 0x39, 0x6F, 0x73, 0x5E, 0x29, 0x3D
	.byte 0xEE, 0x02, 0xE8, 0x01, 0xE2, 0x00, 0x99, 0x25, 0xF2, 0x14, 0x4A, 0x00, 0xFF, 0x7F, 0x00, 0x00
	.globl gObjectEventPal_JP_08485D6C
gObjectEventPal_JP_08485D6C: @ 0x08485D6C
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_PALETTE
	@ 16-color object-event palette
	.byte 0x0E, 0x53, 0x5F, 0x5B, 0x1F, 0x4B, 0x5B, 0x3A, 0x0F, 0x21, 0x2D, 0x56, 0x27, 0x31, 0x41, 0x10
	.byte 0xDA, 0x51, 0x14, 0x39, 0x8A, 0x20, 0x5A, 0x6B, 0x31, 0x4A, 0x08, 0x29, 0xFF, 0x7F, 0x00, 0x00
	.globl gObjectEventPal_JP_08485D8C
gObjectEventPal_JP_08485D8C: @ 0x08485D8C
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_PALETTE
	@ 16-color object-event palette
	.byte 0xAC, 0x76, 0xFF, 0x7F, 0xFF, 0x73, 0x9F, 0x63, 0x59, 0x4A, 0x7F, 0x77, 0x1F, 0x6B, 0x9F, 0x5A
	.byte 0xF9, 0x7F, 0x96, 0x7F, 0x12, 0x7B, 0x1A, 0x43, 0xD8, 0x3E, 0xB6, 0x3E, 0xFF, 0x7F, 0x0E, 0x4A
	.globl gObjectEventPal_JP_08485DAC
gObjectEventPal_JP_08485DAC: @ 0x08485DAC
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_PALETTE
	@ 16-color object-event palette
	.byte 0xAC, 0x76, 0xFF, 0x7F, 0xFF, 0x73, 0x9F, 0x63, 0x59, 0x4A, 0xFF, 0x2F, 0xBF, 0x23, 0x1A, 0x1F
	.byte 0x3F, 0x4E, 0xDE, 0x41, 0x5C, 0x31, 0x7A, 0x42, 0x17, 0x36, 0x93, 0x25, 0xFF, 0x7F, 0x0E, 0x4A
	.globl gObjectEventPal_JP_08485DCC
gObjectEventPal_JP_08485DCC: @ 0x08485DCC
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_PALETTE
	@ 16-color object-event palette
	.byte 0xAC, 0x76, 0xFF, 0x7F, 0xFF, 0x73, 0x9F, 0x63, 0x59, 0x4A, 0xFF, 0x7F, 0xBD, 0x7B, 0x39, 0x6F
	.byte 0xF1, 0x46, 0x8E, 0x3A, 0xEE, 0x02, 0x7F, 0x42, 0x1D, 0x36, 0x99, 0x25, 0xFF, 0x7F, 0x0E, 0x4A
	.globl gObjectEventPal_JP_08485DEC
gObjectEventPal_JP_08485DEC: @ 0x08485DEC
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_PALETTE
	@ 16-color object-event palette
	.byte 0xAC, 0x76, 0xFF, 0x7F, 0xFF, 0x73, 0x9F, 0x63, 0x59, 0x4A, 0xB3, 0x6E, 0x71, 0x62, 0x2F, 0x56
	.byte 0x7F, 0x6A, 0x1C, 0x5E, 0xDA, 0x51, 0xF7, 0x5E, 0x94, 0x52, 0x31, 0x4A, 0xFF, 0x7F, 0x0E, 0x4A
	.globl gObjectEventFrame_JP_08485E0C
gObjectEventFrame_JP_08485E0C: @ 0x08485E0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 5; size=0x80
	.incbin "build/graphics/object_events/pics/people/ninja_boy.4bpp", 0x0, 0x80 @ gObjectEventPic_NinjaBoy frame slice
	.globl gObjectEventFrame_JP_08485E8C
gObjectEventFrame_JP_08485E8C: @ 0x08485E8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 5; size=0x80
	.incbin "build/graphics/object_events/pics/people/ninja_boy.4bpp", 0x80, 0x80 @ gObjectEventPic_NinjaBoy frame slice
	.globl gObjectEventFrame_JP_08485F0C
gObjectEventFrame_JP_08485F0C: @ 0x08485F0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 5; size=0x80
	.incbin "build/graphics/object_events/pics/people/ninja_boy.4bpp", 0x100, 0x80 @ gObjectEventPic_NinjaBoy frame slice
	.globl gObjectEventFrame_JP_08485F8C
gObjectEventFrame_JP_08485F8C: @ 0x08485F8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 5; size=0x80
	.incbin "build/graphics/object_events/pics/people/ninja_boy.4bpp", 0x180, 0x80 @ gObjectEventPic_NinjaBoy frame slice
	.globl gObjectEventFrame_JP_0848600C
gObjectEventFrame_JP_0848600C: @ 0x0848600C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 5; size=0x80
	.incbin "build/graphics/object_events/pics/people/ninja_boy.4bpp", 0x200, 0x80 @ gObjectEventPic_NinjaBoy frame slice
	.globl gObjectEventFrame_JP_0848608C
gObjectEventFrame_JP_0848608C: @ 0x0848608C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 5; size=0x80
	.incbin "build/graphics/object_events/pics/people/ninja_boy.4bpp", 0x280, 0x80 @ gObjectEventPic_NinjaBoy frame slice
	.globl gObjectEventFrame_JP_0848610C
gObjectEventFrame_JP_0848610C: @ 0x0848610C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 5; size=0x80
	.incbin "build/graphics/object_events/pics/people/ninja_boy.4bpp", 0x300, 0x80 @ gObjectEventPic_NinjaBoy frame slice
	.globl gObjectEventFrame_JP_0848618C
gObjectEventFrame_JP_0848618C: @ 0x0848618C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 5; size=0x80
	.incbin "build/graphics/object_events/pics/people/ninja_boy.4bpp", 0x380, 0x80 @ gObjectEventPic_NinjaBoy frame slice
	.globl gObjectEventFrame_JP_0848620C
gObjectEventFrame_JP_0848620C: @ 0x0848620C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 5; size=0x80
	.incbin "build/graphics/object_events/pics/people/ninja_boy.4bpp", 0x400, 0x80 @ gObjectEventPic_NinjaBoy frame slice
	.globl gObjectEventFrame_JP_0848628C
gObjectEventFrame_JP_0848628C: @ 0x0848628C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 6; size=0x100
	.incbin "build/graphics/object_events/pics/people/twin.4bpp", 0x0, 0x100 @ gObjectEventPic_Twin frame slice
	.globl gObjectEventFrame_JP_0848638C
gObjectEventFrame_JP_0848638C: @ 0x0848638C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 6; size=0x100
	.incbin "build/graphics/object_events/pics/people/twin.4bpp", 0x100, 0x100 @ gObjectEventPic_Twin frame slice
	.globl gObjectEventFrame_JP_0848648C
gObjectEventFrame_JP_0848648C: @ 0x0848648C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 6; size=0x100
	.incbin "build/graphics/object_events/pics/people/twin.4bpp", 0x200, 0x100 @ gObjectEventPic_Twin frame slice
	.globl gObjectEventFrame_JP_0848658C
gObjectEventFrame_JP_0848658C: @ 0x0848658C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 6; size=0x100
	.incbin "build/graphics/object_events/pics/people/twin.4bpp", 0x300, 0x100 @ gObjectEventPic_Twin frame slice
	.globl gObjectEventFrame_JP_0848668C
gObjectEventFrame_JP_0848668C: @ 0x0848668C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 6; size=0x100
	.incbin "build/graphics/object_events/pics/people/twin.4bpp", 0x400, 0x100 @ gObjectEventPic_Twin frame slice
	.globl gObjectEventFrame_JP_0848678C
gObjectEventFrame_JP_0848678C: @ 0x0848678C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 6; size=0x100
	.incbin "build/graphics/object_events/pics/people/twin.4bpp", 0x500, 0x100 @ gObjectEventPic_Twin frame slice
	.globl gObjectEventFrame_JP_0848688C
gObjectEventFrame_JP_0848688C: @ 0x0848688C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 6; size=0x100
	.incbin "build/graphics/object_events/pics/people/twin.4bpp", 0x600, 0x100 @ gObjectEventPic_Twin frame slice
	.globl gObjectEventFrame_JP_0848698C
gObjectEventFrame_JP_0848698C: @ 0x0848698C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 6; size=0x100
	.incbin "build/graphics/object_events/pics/people/twin.4bpp", 0x700, 0x100 @ gObjectEventPic_Twin frame slice
	.globl gObjectEventFrame_JP_08486A8C
gObjectEventFrame_JP_08486A8C: @ 0x08486A8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 6; size=0x100
	.incbin "build/graphics/object_events/pics/people/twin.4bpp", 0x800, 0x100 @ gObjectEventPic_Twin frame slice
	.globl gObjectEventFrame_JP_08486B8C
gObjectEventFrame_JP_08486B8C: @ 0x08486B8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 7; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_1.4bpp", 0x0, 0x100 @ gObjectEventPic_Boy1 frame slice
	.globl gObjectEventFrame_JP_08486C8C
gObjectEventFrame_JP_08486C8C: @ 0x08486C8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 7; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_1.4bpp", 0x100, 0x100 @ gObjectEventPic_Boy1 frame slice
	.globl gObjectEventFrame_JP_08486D8C
gObjectEventFrame_JP_08486D8C: @ 0x08486D8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 7; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_1.4bpp", 0x200, 0x100 @ gObjectEventPic_Boy1 frame slice
	.globl gObjectEventFrame_JP_08486E8C
gObjectEventFrame_JP_08486E8C: @ 0x08486E8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 7; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_1.4bpp", 0x300, 0x100 @ gObjectEventPic_Boy1 frame slice
	.globl gObjectEventFrame_JP_08486F8C
gObjectEventFrame_JP_08486F8C: @ 0x08486F8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 7; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_1.4bpp", 0x400, 0x100 @ gObjectEventPic_Boy1 frame slice
	.globl gObjectEventFrame_JP_0848708C
gObjectEventFrame_JP_0848708C: @ 0x0848708C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 7; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_1.4bpp", 0x500, 0x100 @ gObjectEventPic_Boy1 frame slice
	.globl gObjectEventFrame_JP_0848718C
gObjectEventFrame_JP_0848718C: @ 0x0848718C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 7; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_1.4bpp", 0x600, 0x100 @ gObjectEventPic_Boy1 frame slice
	.globl gObjectEventFrame_JP_0848728C
gObjectEventFrame_JP_0848728C: @ 0x0848728C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 7; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_1.4bpp", 0x700, 0x100 @ gObjectEventPic_Boy1 frame slice
	.globl gObjectEventFrame_JP_0848738C
gObjectEventFrame_JP_0848738C: @ 0x0848738C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 7; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_1.4bpp", 0x800, 0x100 @ gObjectEventPic_Boy1 frame slice
	.globl gObjectEventFrame_JP_0848748C
gObjectEventFrame_JP_0848748C: @ 0x0848748C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 8; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_1.4bpp", 0x0, 0x100 @ gObjectEventPic_Girl1 frame slice
	.globl gObjectEventFrame_JP_0848758C
gObjectEventFrame_JP_0848758C: @ 0x0848758C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 8; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_1.4bpp", 0x100, 0x100 @ gObjectEventPic_Girl1 frame slice
	.globl gObjectEventFrame_JP_0848768C
gObjectEventFrame_JP_0848768C: @ 0x0848768C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 8; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_1.4bpp", 0x200, 0x100 @ gObjectEventPic_Girl1 frame slice
	.globl gObjectEventFrame_JP_0848778C
gObjectEventFrame_JP_0848778C: @ 0x0848778C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 8; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_1.4bpp", 0x300, 0x100 @ gObjectEventPic_Girl1 frame slice
	.globl gObjectEventFrame_JP_0848788C
gObjectEventFrame_JP_0848788C: @ 0x0848788C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 8; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_1.4bpp", 0x400, 0x100 @ gObjectEventPic_Girl1 frame slice
	.globl gObjectEventFrame_JP_0848798C
gObjectEventFrame_JP_0848798C: @ 0x0848798C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 8; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_1.4bpp", 0x500, 0x100 @ gObjectEventPic_Girl1 frame slice
	.globl gObjectEventFrame_JP_08487A8C
gObjectEventFrame_JP_08487A8C: @ 0x08487A8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 8; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_1.4bpp", 0x600, 0x100 @ gObjectEventPic_Girl1 frame slice
	.globl gObjectEventFrame_JP_08487B8C
gObjectEventFrame_JP_08487B8C: @ 0x08487B8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 8; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_1.4bpp", 0x700, 0x100 @ gObjectEventPic_Girl1 frame slice
	.globl gObjectEventFrame_JP_08487C8C
gObjectEventFrame_JP_08487C8C: @ 0x08487C8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 8; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_1.4bpp", 0x800, 0x100 @ gObjectEventPic_Girl1 frame slice
	.globl gObjectEventFrame_JP_08487D8C
gObjectEventFrame_JP_08487D8C: @ 0x08487D8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 9; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_2.4bpp", 0x0, 0x100 @ gObjectEventPic_Boy2 frame slice
	.globl gObjectEventFrame_JP_08487E8C
gObjectEventFrame_JP_08487E8C: @ 0x08487E8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 9; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_2.4bpp", 0x100, 0x100 @ gObjectEventPic_Boy2 frame slice
	.globl gObjectEventFrame_JP_08487F8C
gObjectEventFrame_JP_08487F8C: @ 0x08487F8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 9; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_2.4bpp", 0x200, 0x100 @ gObjectEventPic_Boy2 frame slice
	.globl gObjectEventFrame_JP_0848808C
gObjectEventFrame_JP_0848808C: @ 0x0848808C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 9; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_2.4bpp", 0x300, 0x100 @ gObjectEventPic_Boy2 frame slice
	.globl gObjectEventFrame_JP_0848818C
gObjectEventFrame_JP_0848818C: @ 0x0848818C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 9; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_2.4bpp", 0x400, 0x100 @ gObjectEventPic_Boy2 frame slice
	.globl gObjectEventFrame_JP_0848828C
gObjectEventFrame_JP_0848828C: @ 0x0848828C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 9; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_2.4bpp", 0x500, 0x100 @ gObjectEventPic_Boy2 frame slice
	.globl gObjectEventFrame_JP_0848838C
gObjectEventFrame_JP_0848838C: @ 0x0848838C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 9; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_2.4bpp", 0x600, 0x100 @ gObjectEventPic_Boy2 frame slice
	.globl gObjectEventFrame_JP_0848848C
gObjectEventFrame_JP_0848848C: @ 0x0848848C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 9; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_2.4bpp", 0x700, 0x100 @ gObjectEventPic_Boy2 frame slice
	.globl gObjectEventFrame_JP_0848858C
gObjectEventFrame_JP_0848858C: @ 0x0848858C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 9; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_2.4bpp", 0x800, 0x100 @ gObjectEventPic_Boy2 frame slice
	.globl gObjectEventFrame_JP_0848868C
gObjectEventFrame_JP_0848868C: @ 0x0848868C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 10; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_2.4bpp", 0x0, 0x100 @ gObjectEventPic_Girl2 frame slice
	.globl gObjectEventFrame_JP_0848878C
gObjectEventFrame_JP_0848878C: @ 0x0848878C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 10; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_2.4bpp", 0x100, 0x100 @ gObjectEventPic_Girl2 frame slice
	.globl gObjectEventFrame_JP_0848888C
gObjectEventFrame_JP_0848888C: @ 0x0848888C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 10; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_2.4bpp", 0x200, 0x100 @ gObjectEventPic_Girl2 frame slice
	.globl gObjectEventFrame_JP_0848898C
gObjectEventFrame_JP_0848898C: @ 0x0848898C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 10; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_2.4bpp", 0x300, 0x100 @ gObjectEventPic_Girl2 frame slice
	.globl gObjectEventFrame_JP_08488A8C
gObjectEventFrame_JP_08488A8C: @ 0x08488A8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 10; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_2.4bpp", 0x400, 0x100 @ gObjectEventPic_Girl2 frame slice
	.globl gObjectEventFrame_JP_08488B8C
gObjectEventFrame_JP_08488B8C: @ 0x08488B8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 10; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_2.4bpp", 0x500, 0x100 @ gObjectEventPic_Girl2 frame slice
	.globl gObjectEventFrame_JP_08488C8C
gObjectEventFrame_JP_08488C8C: @ 0x08488C8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 10; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_2.4bpp", 0x600, 0x100 @ gObjectEventPic_Girl2 frame slice
	.globl gObjectEventFrame_JP_08488D8C
gObjectEventFrame_JP_08488D8C: @ 0x08488D8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 10; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_2.4bpp", 0x700, 0x100 @ gObjectEventPic_Girl2 frame slice
	.globl gObjectEventFrame_JP_08488E8C
gObjectEventFrame_JP_08488E8C: @ 0x08488E8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 10; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_2.4bpp", 0x800, 0x100 @ gObjectEventPic_Girl2 frame slice
	.globl gObjectEventFrame_JP_08488F8C
gObjectEventFrame_JP_08488F8C: @ 0x08488F8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 11; size=0x80
	.incbin "build/graphics/object_events/pics/people/little_boy.4bpp", 0x0, 0x80 @ gObjectEventPic_LittleBoy frame slice
	.globl gObjectEventFrame_JP_0848900C
gObjectEventFrame_JP_0848900C: @ 0x0848900C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 11; size=0x80
	.incbin "build/graphics/object_events/pics/people/little_boy.4bpp", 0x80, 0x80 @ gObjectEventPic_LittleBoy frame slice
	.globl gObjectEventFrame_JP_0848908C
gObjectEventFrame_JP_0848908C: @ 0x0848908C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 11; size=0x80
	.incbin "build/graphics/object_events/pics/people/little_boy.4bpp", 0x100, 0x80 @ gObjectEventPic_LittleBoy frame slice
	.globl gObjectEventFrame_JP_0848910C
gObjectEventFrame_JP_0848910C: @ 0x0848910C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 11; size=0x80
	.incbin "build/graphics/object_events/pics/people/little_boy.4bpp", 0x180, 0x80 @ gObjectEventPic_LittleBoy frame slice
	.globl gObjectEventFrame_JP_0848918C
gObjectEventFrame_JP_0848918C: @ 0x0848918C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 11; size=0x80
	.incbin "build/graphics/object_events/pics/people/little_boy.4bpp", 0x200, 0x80 @ gObjectEventPic_LittleBoy frame slice
	.globl gObjectEventFrame_JP_0848920C
gObjectEventFrame_JP_0848920C: @ 0x0848920C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 11; size=0x80
	.incbin "build/graphics/object_events/pics/people/little_boy.4bpp", 0x280, 0x80 @ gObjectEventPic_LittleBoy frame slice
	.globl gObjectEventFrame_JP_0848928C
gObjectEventFrame_JP_0848928C: @ 0x0848928C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 11; size=0x80
	.incbin "build/graphics/object_events/pics/people/little_boy.4bpp", 0x300, 0x80 @ gObjectEventPic_LittleBoy frame slice
	.globl gObjectEventFrame_JP_0848930C
gObjectEventFrame_JP_0848930C: @ 0x0848930C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 11; size=0x80
	.incbin "build/graphics/object_events/pics/people/little_boy.4bpp", 0x380, 0x80 @ gObjectEventPic_LittleBoy frame slice
	.globl gObjectEventFrame_JP_0848938C
gObjectEventFrame_JP_0848938C: @ 0x0848938C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 11; size=0x80
	.incbin "build/graphics/object_events/pics/people/little_boy.4bpp", 0x400, 0x80 @ gObjectEventPic_LittleBoy frame slice
	.globl gObjectEventFrame_JP_0848940C
gObjectEventFrame_JP_0848940C: @ 0x0848940C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 12; size=0x80
	.incbin "build/graphics/object_events/pics/people/little_girl.4bpp", 0x0, 0x80 @ gObjectEventPic_LittleGirl frame slice
	.globl gObjectEventFrame_JP_0848948C
gObjectEventFrame_JP_0848948C: @ 0x0848948C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 12; size=0x80
	.incbin "build/graphics/object_events/pics/people/little_girl.4bpp", 0x80, 0x80 @ gObjectEventPic_LittleGirl frame slice
	.globl gObjectEventFrame_JP_0848950C
gObjectEventFrame_JP_0848950C: @ 0x0848950C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 12; size=0x80
	.incbin "build/graphics/object_events/pics/people/little_girl.4bpp", 0x100, 0x80 @ gObjectEventPic_LittleGirl frame slice
	.globl gObjectEventFrame_JP_0848958C
gObjectEventFrame_JP_0848958C: @ 0x0848958C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 12; size=0x80
	.incbin "build/graphics/object_events/pics/people/little_girl.4bpp", 0x180, 0x80 @ gObjectEventPic_LittleGirl frame slice
	.globl gObjectEventFrame_JP_0848960C
gObjectEventFrame_JP_0848960C: @ 0x0848960C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 12; size=0x80
	.incbin "build/graphics/object_events/pics/people/little_girl.4bpp", 0x200, 0x80 @ gObjectEventPic_LittleGirl frame slice
	.globl gObjectEventFrame_JP_0848968C
gObjectEventFrame_JP_0848968C: @ 0x0848968C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 12; size=0x80
	.incbin "build/graphics/object_events/pics/people/little_girl.4bpp", 0x280, 0x80 @ gObjectEventPic_LittleGirl frame slice
	.globl gObjectEventFrame_JP_0848970C
gObjectEventFrame_JP_0848970C: @ 0x0848970C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 12; size=0x80
	.incbin "build/graphics/object_events/pics/people/little_girl.4bpp", 0x300, 0x80 @ gObjectEventPic_LittleGirl frame slice
	.globl gObjectEventFrame_JP_0848978C
gObjectEventFrame_JP_0848978C: @ 0x0848978C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 12; size=0x80
	.incbin "build/graphics/object_events/pics/people/little_girl.4bpp", 0x380, 0x80 @ gObjectEventPic_LittleGirl frame slice
	.globl gObjectEventFrame_JP_0848980C
gObjectEventFrame_JP_0848980C: @ 0x0848980C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 12; size=0x80
	.incbin "build/graphics/object_events/pics/people/little_girl.4bpp", 0x400, 0x80 @ gObjectEventPic_LittleGirl frame slice
	.globl gObjectEventFrame_JP_0848988C
gObjectEventFrame_JP_0848988C: @ 0x0848988C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 13; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_3.4bpp", 0x0, 0x100 @ gObjectEventPic_Boy3 frame slice
	.globl gObjectEventFrame_JP_0848998C
gObjectEventFrame_JP_0848998C: @ 0x0848998C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 13; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_3.4bpp", 0x100, 0x100 @ gObjectEventPic_Boy3 frame slice
	.globl gObjectEventFrame_JP_08489A8C
gObjectEventFrame_JP_08489A8C: @ 0x08489A8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 13; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_3.4bpp", 0x200, 0x100 @ gObjectEventPic_Boy3 frame slice
	.globl gObjectEventFrame_JP_08489B8C
gObjectEventFrame_JP_08489B8C: @ 0x08489B8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 13; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_3.4bpp", 0x300, 0x100 @ gObjectEventPic_Boy3 frame slice
	.globl gObjectEventFrame_JP_08489C8C
gObjectEventFrame_JP_08489C8C: @ 0x08489C8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 13; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_3.4bpp", 0x400, 0x100 @ gObjectEventPic_Boy3 frame slice
	.globl gObjectEventFrame_JP_08489D8C
gObjectEventFrame_JP_08489D8C: @ 0x08489D8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 13; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_3.4bpp", 0x500, 0x100 @ gObjectEventPic_Boy3 frame slice
	.globl gObjectEventFrame_JP_08489E8C
gObjectEventFrame_JP_08489E8C: @ 0x08489E8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 13; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_3.4bpp", 0x600, 0x100 @ gObjectEventPic_Boy3 frame slice
	.globl gObjectEventFrame_JP_08489F8C
gObjectEventFrame_JP_08489F8C: @ 0x08489F8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 13; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_3.4bpp", 0x700, 0x100 @ gObjectEventPic_Boy3 frame slice
	.globl gObjectEventFrame_JP_0848A08C
gObjectEventFrame_JP_0848A08C: @ 0x0848A08C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 13; size=0x100
	.incbin "build/graphics/object_events/pics/people/boy_3.4bpp", 0x800, 0x100 @ gObjectEventPic_Boy3 frame slice
	.globl gObjectEventFrame_JP_0848A18C
gObjectEventFrame_JP_0848A18C: @ 0x0848A18C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 14; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_3.4bpp", 0x0, 0x100 @ gObjectEventPic_Girl3 frame slice
	.globl gObjectEventFrame_JP_0848A28C
gObjectEventFrame_JP_0848A28C: @ 0x0848A28C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 14; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_3.4bpp", 0x100, 0x100 @ gObjectEventPic_Girl3 frame slice
	.globl gObjectEventFrame_JP_0848A38C
gObjectEventFrame_JP_0848A38C: @ 0x0848A38C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 14; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_3.4bpp", 0x200, 0x100 @ gObjectEventPic_Girl3 frame slice
	.globl gObjectEventFrame_JP_0848A48C
gObjectEventFrame_JP_0848A48C: @ 0x0848A48C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 14; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_3.4bpp", 0x300, 0x100 @ gObjectEventPic_Girl3 frame slice
	.globl gObjectEventFrame_JP_0848A58C
gObjectEventFrame_JP_0848A58C: @ 0x0848A58C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 14; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_3.4bpp", 0x400, 0x100 @ gObjectEventPic_Girl3 frame slice
	.globl gObjectEventFrame_JP_0848A68C
gObjectEventFrame_JP_0848A68C: @ 0x0848A68C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 14; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_3.4bpp", 0x500, 0x100 @ gObjectEventPic_Girl3 frame slice
	.globl gObjectEventFrame_JP_0848A78C
gObjectEventFrame_JP_0848A78C: @ 0x0848A78C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 14; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_3.4bpp", 0x600, 0x100 @ gObjectEventPic_Girl3 frame slice
	.globl gObjectEventFrame_JP_0848A88C
gObjectEventFrame_JP_0848A88C: @ 0x0848A88C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 14; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_3.4bpp", 0x700, 0x100 @ gObjectEventPic_Girl3 frame slice
	.globl gObjectEventFrame_JP_0848A98C
gObjectEventFrame_JP_0848A98C: @ 0x0848A98C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 14; size=0x100
	.incbin "build/graphics/object_events/pics/people/girl_3.4bpp", 0x800, 0x100 @ gObjectEventPic_Girl3 frame slice
	.globl gObjectEventFrame_JP_0848AA8C
gObjectEventFrame_JP_0848AA8C: @ 0x0848AA8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 15; size=0x100
	.incbin "build/graphics/object_events/pics/people/rich_boy.4bpp", 0x0, 0x100 @ gObjectEventPic_RichBoy frame slice
	.globl gObjectEventFrame_JP_0848AB8C
gObjectEventFrame_JP_0848AB8C: @ 0x0848AB8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 15; size=0x100
	.incbin "build/graphics/object_events/pics/people/rich_boy.4bpp", 0x100, 0x100 @ gObjectEventPic_RichBoy frame slice
	.globl gObjectEventFrame_JP_0848AC8C
gObjectEventFrame_JP_0848AC8C: @ 0x0848AC8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 15; size=0x100
	.incbin "build/graphics/object_events/pics/people/rich_boy.4bpp", 0x200, 0x100 @ gObjectEventPic_RichBoy frame slice
	.globl gObjectEventFrame_JP_0848AD8C
gObjectEventFrame_JP_0848AD8C: @ 0x0848AD8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 15; size=0x100
	.incbin "build/graphics/object_events/pics/people/rich_boy.4bpp", 0x300, 0x100 @ gObjectEventPic_RichBoy frame slice
	.globl gObjectEventFrame_JP_0848AE8C
gObjectEventFrame_JP_0848AE8C: @ 0x0848AE8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 15; size=0x100
	.incbin "build/graphics/object_events/pics/people/rich_boy.4bpp", 0x400, 0x100 @ gObjectEventPic_RichBoy frame slice
	.globl gObjectEventFrame_JP_0848AF8C
gObjectEventFrame_JP_0848AF8C: @ 0x0848AF8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 15; size=0x100
	.incbin "build/graphics/object_events/pics/people/rich_boy.4bpp", 0x500, 0x100 @ gObjectEventPic_RichBoy frame slice
	.globl gObjectEventFrame_JP_0848B08C
gObjectEventFrame_JP_0848B08C: @ 0x0848B08C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 15; size=0x100
	.incbin "build/graphics/object_events/pics/people/rich_boy.4bpp", 0x600, 0x100 @ gObjectEventPic_RichBoy frame slice
	.globl gObjectEventFrame_JP_0848B18C
gObjectEventFrame_JP_0848B18C: @ 0x0848B18C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 15; size=0x100
	.incbin "build/graphics/object_events/pics/people/rich_boy.4bpp", 0x700, 0x100 @ gObjectEventPic_RichBoy frame slice
	.globl gObjectEventFrame_JP_0848B28C
gObjectEventFrame_JP_0848B28C: @ 0x0848B28C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 15; size=0x100
	.incbin "build/graphics/object_events/pics/people/rich_boy.4bpp", 0x800, 0x100 @ gObjectEventPic_RichBoy frame slice
	.globl gObjectEventFrame_JP_0848B38C
gObjectEventFrame_JP_0848B38C: @ 0x0848B38C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 16; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_1.4bpp", 0x0, 0x100 @ gObjectEventPic_Woman1 frame slice
	.globl gObjectEventFrame_JP_0848B48C
gObjectEventFrame_JP_0848B48C: @ 0x0848B48C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 16; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_1.4bpp", 0x100, 0x100 @ gObjectEventPic_Woman1 frame slice
	.globl gObjectEventFrame_JP_0848B58C
gObjectEventFrame_JP_0848B58C: @ 0x0848B58C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 16; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_1.4bpp", 0x200, 0x100 @ gObjectEventPic_Woman1 frame slice
	.globl gObjectEventFrame_JP_0848B68C
gObjectEventFrame_JP_0848B68C: @ 0x0848B68C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 16; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_1.4bpp", 0x300, 0x100 @ gObjectEventPic_Woman1 frame slice
	.globl gObjectEventFrame_JP_0848B78C
gObjectEventFrame_JP_0848B78C: @ 0x0848B78C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 16; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_1.4bpp", 0x400, 0x100 @ gObjectEventPic_Woman1 frame slice
	.globl gObjectEventFrame_JP_0848B88C
gObjectEventFrame_JP_0848B88C: @ 0x0848B88C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 16; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_1.4bpp", 0x500, 0x100 @ gObjectEventPic_Woman1 frame slice
	.globl gObjectEventFrame_JP_0848B98C
gObjectEventFrame_JP_0848B98C: @ 0x0848B98C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 16; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_1.4bpp", 0x600, 0x100 @ gObjectEventPic_Woman1 frame slice
	.globl gObjectEventFrame_JP_0848BA8C
gObjectEventFrame_JP_0848BA8C: @ 0x0848BA8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 16; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_1.4bpp", 0x700, 0x100 @ gObjectEventPic_Woman1 frame slice
	.globl gObjectEventFrame_JP_0848BB8C
gObjectEventFrame_JP_0848BB8C: @ 0x0848BB8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 16; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_1.4bpp", 0x800, 0x100 @ gObjectEventPic_Woman1 frame slice
	.globl gObjectEventFrame_JP_0848BC8C
gObjectEventFrame_JP_0848BC8C: @ 0x0848BC8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 17; size=0x100
	.incbin "build/graphics/object_events/pics/people/fat_man.4bpp", 0x0, 0x100 @ gObjectEventPic_FatMan frame slice
	.globl gObjectEventFrame_JP_0848BD8C
gObjectEventFrame_JP_0848BD8C: @ 0x0848BD8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 17; size=0x100
	.incbin "build/graphics/object_events/pics/people/fat_man.4bpp", 0x100, 0x100 @ gObjectEventPic_FatMan frame slice
	.globl gObjectEventFrame_JP_0848BE8C
gObjectEventFrame_JP_0848BE8C: @ 0x0848BE8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 17; size=0x100
	.incbin "build/graphics/object_events/pics/people/fat_man.4bpp", 0x200, 0x100 @ gObjectEventPic_FatMan frame slice
	.globl gObjectEventFrame_JP_0848BF8C
gObjectEventFrame_JP_0848BF8C: @ 0x0848BF8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 17; size=0x100
	.incbin "build/graphics/object_events/pics/people/fat_man.4bpp", 0x300, 0x100 @ gObjectEventPic_FatMan frame slice
	.globl gObjectEventFrame_JP_0848C08C
gObjectEventFrame_JP_0848C08C: @ 0x0848C08C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 17; size=0x100
	.incbin "build/graphics/object_events/pics/people/fat_man.4bpp", 0x400, 0x100 @ gObjectEventPic_FatMan frame slice
	.globl gObjectEventFrame_JP_0848C18C
gObjectEventFrame_JP_0848C18C: @ 0x0848C18C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 17; size=0x100
	.incbin "build/graphics/object_events/pics/people/fat_man.4bpp", 0x500, 0x100 @ gObjectEventPic_FatMan frame slice
	.globl gObjectEventFrame_JP_0848C28C
gObjectEventFrame_JP_0848C28C: @ 0x0848C28C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 17; size=0x100
	.incbin "build/graphics/object_events/pics/people/fat_man.4bpp", 0x600, 0x100 @ gObjectEventPic_FatMan frame slice
	.globl gObjectEventFrame_JP_0848C38C
gObjectEventFrame_JP_0848C38C: @ 0x0848C38C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 17; size=0x100
	.incbin "build/graphics/object_events/pics/people/fat_man.4bpp", 0x700, 0x100 @ gObjectEventPic_FatMan frame slice
	.globl gObjectEventFrame_JP_0848C48C
gObjectEventFrame_JP_0848C48C: @ 0x0848C48C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 17; size=0x100
	.incbin "build/graphics/object_events/pics/people/fat_man.4bpp", 0x800, 0x100 @ gObjectEventPic_FatMan frame slice
	.globl gObjectEventFrame_JP_0848C58C
gObjectEventFrame_JP_0848C58C: @ 0x0848C58C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 18; size=0x100
	.incbin "build/graphics/object_events/pics/people/pokefan_f.4bpp", 0x0, 0x100 @ gObjectEventPic_PokefanF frame slice
	.globl gObjectEventFrame_JP_0848C68C
gObjectEventFrame_JP_0848C68C: @ 0x0848C68C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 18; size=0x100
	.incbin "build/graphics/object_events/pics/people/pokefan_f.4bpp", 0x100, 0x100 @ gObjectEventPic_PokefanF frame slice
	.globl gObjectEventFrame_JP_0848C78C
gObjectEventFrame_JP_0848C78C: @ 0x0848C78C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 18; size=0x100
	.incbin "build/graphics/object_events/pics/people/pokefan_f.4bpp", 0x200, 0x100 @ gObjectEventPic_PokefanF frame slice
	.globl gObjectEventFrame_JP_0848C88C
gObjectEventFrame_JP_0848C88C: @ 0x0848C88C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 18; size=0x100
	.incbin "build/graphics/object_events/pics/people/pokefan_f.4bpp", 0x300, 0x100 @ gObjectEventPic_PokefanF frame slice
	.globl gObjectEventFrame_JP_0848C98C
gObjectEventFrame_JP_0848C98C: @ 0x0848C98C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 18; size=0x100
	.incbin "build/graphics/object_events/pics/people/pokefan_f.4bpp", 0x400, 0x100 @ gObjectEventPic_PokefanF frame slice
	.globl gObjectEventFrame_JP_0848CA8C
gObjectEventFrame_JP_0848CA8C: @ 0x0848CA8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 18; size=0x100
	.incbin "build/graphics/object_events/pics/people/pokefan_f.4bpp", 0x500, 0x100 @ gObjectEventPic_PokefanF frame slice
	.globl gObjectEventFrame_JP_0848CB8C
gObjectEventFrame_JP_0848CB8C: @ 0x0848CB8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 18; size=0x100
	.incbin "build/graphics/object_events/pics/people/pokefan_f.4bpp", 0x600, 0x100 @ gObjectEventPic_PokefanF frame slice
	.globl gObjectEventFrame_JP_0848CC8C
gObjectEventFrame_JP_0848CC8C: @ 0x0848CC8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 18; size=0x100
	.incbin "build/graphics/object_events/pics/people/pokefan_f.4bpp", 0x700, 0x100 @ gObjectEventPic_PokefanF frame slice
	.globl gObjectEventFrame_JP_0848CD8C
gObjectEventFrame_JP_0848CD8C: @ 0x0848CD8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 18; size=0x100
	.incbin "build/graphics/object_events/pics/people/pokefan_f.4bpp", 0x800, 0x100 @ gObjectEventPic_PokefanF frame slice
	.globl gObjectEventFrame_JP_0848CE8C
gObjectEventFrame_JP_0848CE8C: @ 0x0848CE8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 19; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_1.4bpp", 0x0, 0x100 @ gObjectEventPic_Man1 frame slice
	.globl gObjectEventFrame_JP_0848CF8C
gObjectEventFrame_JP_0848CF8C: @ 0x0848CF8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 19; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_1.4bpp", 0x100, 0x100 @ gObjectEventPic_Man1 frame slice
	.globl gObjectEventFrame_JP_0848D08C
gObjectEventFrame_JP_0848D08C: @ 0x0848D08C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 19; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_1.4bpp", 0x200, 0x100 @ gObjectEventPic_Man1 frame slice
	.globl gObjectEventFrame_JP_0848D18C
gObjectEventFrame_JP_0848D18C: @ 0x0848D18C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 19; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_1.4bpp", 0x300, 0x100 @ gObjectEventPic_Man1 frame slice
	.globl gObjectEventFrame_JP_0848D28C
gObjectEventFrame_JP_0848D28C: @ 0x0848D28C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 19; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_1.4bpp", 0x400, 0x100 @ gObjectEventPic_Man1 frame slice
	.globl gObjectEventFrame_JP_0848D38C
gObjectEventFrame_JP_0848D38C: @ 0x0848D38C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 19; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_1.4bpp", 0x500, 0x100 @ gObjectEventPic_Man1 frame slice
	.globl gObjectEventFrame_JP_0848D48C
gObjectEventFrame_JP_0848D48C: @ 0x0848D48C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 19; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_1.4bpp", 0x600, 0x100 @ gObjectEventPic_Man1 frame slice
	.globl gObjectEventFrame_JP_0848D58C
gObjectEventFrame_JP_0848D58C: @ 0x0848D58C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 19; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_1.4bpp", 0x700, 0x100 @ gObjectEventPic_Man1 frame slice
	.globl gObjectEventFrame_JP_0848D68C
gObjectEventFrame_JP_0848D68C: @ 0x0848D68C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 19; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_1.4bpp", 0x800, 0x100 @ gObjectEventPic_Man1 frame slice
	.globl gObjectEventFrame_JP_0848D78C
gObjectEventFrame_JP_0848D78C: @ 0x0848D78C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 20; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_2.4bpp", 0x0, 0x100 @ gObjectEventPic_Woman2 frame slice
	.globl gObjectEventFrame_JP_0848D88C
gObjectEventFrame_JP_0848D88C: @ 0x0848D88C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 20; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_2.4bpp", 0x100, 0x100 @ gObjectEventPic_Woman2 frame slice
	.globl gObjectEventFrame_JP_0848D98C
gObjectEventFrame_JP_0848D98C: @ 0x0848D98C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 20; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_2.4bpp", 0x200, 0x100 @ gObjectEventPic_Woman2 frame slice
	.globl gObjectEventFrame_JP_0848DA8C
gObjectEventFrame_JP_0848DA8C: @ 0x0848DA8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 20; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_2.4bpp", 0x300, 0x100 @ gObjectEventPic_Woman2 frame slice
	.globl gObjectEventFrame_JP_0848DB8C
gObjectEventFrame_JP_0848DB8C: @ 0x0848DB8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 20; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_2.4bpp", 0x400, 0x100 @ gObjectEventPic_Woman2 frame slice
	.globl gObjectEventFrame_JP_0848DC8C
gObjectEventFrame_JP_0848DC8C: @ 0x0848DC8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 20; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_2.4bpp", 0x500, 0x100 @ gObjectEventPic_Woman2 frame slice
	.globl gObjectEventFrame_JP_0848DD8C
gObjectEventFrame_JP_0848DD8C: @ 0x0848DD8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 20; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_2.4bpp", 0x600, 0x100 @ gObjectEventPic_Woman2 frame slice
	.globl gObjectEventFrame_JP_0848DE8C
gObjectEventFrame_JP_0848DE8C: @ 0x0848DE8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 20; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_2.4bpp", 0x700, 0x100 @ gObjectEventPic_Woman2 frame slice
	.globl gObjectEventFrame_JP_0848DF8C
gObjectEventFrame_JP_0848DF8C: @ 0x0848DF8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 20; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_2.4bpp", 0x800, 0x100 @ gObjectEventPic_Woman2 frame slice
	.globl gObjectEventFrame_JP_0848E08C
gObjectEventFrame_JP_0848E08C: @ 0x0848E08C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 21; size=0x100
	.incbin "build/graphics/object_events/pics/people/expert_m.4bpp", 0x0, 0x100 @ gObjectEventPic_ExpertM frame slice
	.globl gObjectEventFrame_JP_0848E18C
gObjectEventFrame_JP_0848E18C: @ 0x0848E18C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 21; size=0x100
	.incbin "build/graphics/object_events/pics/people/expert_m.4bpp", 0x100, 0x100 @ gObjectEventPic_ExpertM frame slice
	.globl gObjectEventFrame_JP_0848E28C
gObjectEventFrame_JP_0848E28C: @ 0x0848E28C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 21; size=0x100
	.incbin "build/graphics/object_events/pics/people/expert_m.4bpp", 0x200, 0x100 @ gObjectEventPic_ExpertM frame slice
	.globl gObjectEventFrame_JP_0848E38C
gObjectEventFrame_JP_0848E38C: @ 0x0848E38C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 21; size=0x100
	.incbin "build/graphics/object_events/pics/people/expert_m.4bpp", 0x300, 0x100 @ gObjectEventPic_ExpertM frame slice
	.globl gObjectEventFrame_JP_0848E48C
gObjectEventFrame_JP_0848E48C: @ 0x0848E48C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 21; size=0x100
	.incbin "build/graphics/object_events/pics/people/expert_m.4bpp", 0x400, 0x100 @ gObjectEventPic_ExpertM frame slice
	.globl gObjectEventFrame_JP_0848E58C
gObjectEventFrame_JP_0848E58C: @ 0x0848E58C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 21; size=0x100
	.incbin "build/graphics/object_events/pics/people/expert_m.4bpp", 0x500, 0x100 @ gObjectEventPic_ExpertM frame slice
	.globl gObjectEventFrame_JP_0848E68C
gObjectEventFrame_JP_0848E68C: @ 0x0848E68C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 21; size=0x100
	.incbin "build/graphics/object_events/pics/people/expert_m.4bpp", 0x600, 0x100 @ gObjectEventPic_ExpertM frame slice
	.globl gObjectEventFrame_JP_0848E78C
gObjectEventFrame_JP_0848E78C: @ 0x0848E78C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 21; size=0x100
	.incbin "build/graphics/object_events/pics/people/expert_m.4bpp", 0x700, 0x100 @ gObjectEventPic_ExpertM frame slice
	.globl gObjectEventFrame_JP_0848E88C
gObjectEventFrame_JP_0848E88C: @ 0x0848E88C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 21; size=0x100
	.incbin "build/graphics/object_events/pics/people/expert_m.4bpp", 0x800, 0x100 @ gObjectEventPic_ExpertM frame slice
	.globl gObjectEventFrame_JP_0848E98C
gObjectEventFrame_JP_0848E98C: @ 0x0848E98C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 22; size=0x100
	.incbin "build/graphics/object_events/pics/people/expert_f.4bpp", 0x0, 0x100 @ gObjectEventPic_ExpertF frame slice
	.globl gObjectEventFrame_JP_0848EA8C
gObjectEventFrame_JP_0848EA8C: @ 0x0848EA8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 22; size=0x100
	.incbin "build/graphics/object_events/pics/people/expert_f.4bpp", 0x100, 0x100 @ gObjectEventPic_ExpertF frame slice
	.globl gObjectEventFrame_JP_0848EB8C
gObjectEventFrame_JP_0848EB8C: @ 0x0848EB8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 22; size=0x100
	.incbin "build/graphics/object_events/pics/people/expert_f.4bpp", 0x200, 0x100 @ gObjectEventPic_ExpertF frame slice
	.globl gObjectEventFrame_JP_0848EC8C
gObjectEventFrame_JP_0848EC8C: @ 0x0848EC8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 22; size=0x100
	.incbin "build/graphics/object_events/pics/people/expert_f.4bpp", 0x300, 0x100 @ gObjectEventPic_ExpertF frame slice
	.globl gObjectEventFrame_JP_0848ED8C
gObjectEventFrame_JP_0848ED8C: @ 0x0848ED8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 22; size=0x100
	.incbin "build/graphics/object_events/pics/people/expert_f.4bpp", 0x400, 0x100 @ gObjectEventPic_ExpertF frame slice
	.globl gObjectEventFrame_JP_0848EE8C
gObjectEventFrame_JP_0848EE8C: @ 0x0848EE8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 22; size=0x100
	.incbin "build/graphics/object_events/pics/people/expert_f.4bpp", 0x500, 0x100 @ gObjectEventPic_ExpertF frame slice
	.globl gObjectEventFrame_JP_0848EF8C
gObjectEventFrame_JP_0848EF8C: @ 0x0848EF8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 22; size=0x100
	.incbin "build/graphics/object_events/pics/people/expert_f.4bpp", 0x600, 0x100 @ gObjectEventPic_ExpertF frame slice
	.globl gObjectEventFrame_JP_0848F08C
gObjectEventFrame_JP_0848F08C: @ 0x0848F08C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 22; size=0x100
	.incbin "build/graphics/object_events/pics/people/expert_f.4bpp", 0x700, 0x100 @ gObjectEventPic_ExpertF frame slice
	.globl gObjectEventFrame_JP_0848F18C
gObjectEventFrame_JP_0848F18C: @ 0x0848F18C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 22; size=0x100
	.incbin "build/graphics/object_events/pics/people/expert_f.4bpp", 0x800, 0x100 @ gObjectEventPic_ExpertF frame slice
	.globl gObjectEventFrame_JP_0848F28C
gObjectEventFrame_JP_0848F28C: @ 0x0848F28C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 23; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_2.4bpp", 0x0, 0x100 @ gObjectEventPic_Man2 frame slice
	.globl gObjectEventFrame_JP_0848F38C
gObjectEventFrame_JP_0848F38C: @ 0x0848F38C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 23; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_2.4bpp", 0x100, 0x100 @ gObjectEventPic_Man2 frame slice
	.globl gObjectEventFrame_JP_0848F48C
gObjectEventFrame_JP_0848F48C: @ 0x0848F48C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 23; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_2.4bpp", 0x200, 0x100 @ gObjectEventPic_Man2 frame slice
	.globl gObjectEventFrame_JP_0848F58C
gObjectEventFrame_JP_0848F58C: @ 0x0848F58C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 23; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_2.4bpp", 0x300, 0x100 @ gObjectEventPic_Man2 frame slice
	.globl gObjectEventFrame_JP_0848F68C
gObjectEventFrame_JP_0848F68C: @ 0x0848F68C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 23; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_2.4bpp", 0x400, 0x100 @ gObjectEventPic_Man2 frame slice
	.globl gObjectEventFrame_JP_0848F78C
gObjectEventFrame_JP_0848F78C: @ 0x0848F78C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 23; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_2.4bpp", 0x500, 0x100 @ gObjectEventPic_Man2 frame slice
	.globl gObjectEventFrame_JP_0848F88C
gObjectEventFrame_JP_0848F88C: @ 0x0848F88C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 23; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_2.4bpp", 0x600, 0x100 @ gObjectEventPic_Man2 frame slice
	.globl gObjectEventFrame_JP_0848F98C
gObjectEventFrame_JP_0848F98C: @ 0x0848F98C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 23; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_2.4bpp", 0x700, 0x100 @ gObjectEventPic_Man2 frame slice
	.globl gObjectEventFrame_JP_0848FA8C
gObjectEventFrame_JP_0848FA8C: @ 0x0848FA8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 23; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_2.4bpp", 0x800, 0x100 @ gObjectEventPic_Man2 frame slice
	.globl gObjectEventFrame_JP_0848FB8C
gObjectEventFrame_JP_0848FB8C: @ 0x0848FB8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 24; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_3.4bpp", 0x0, 0x100 @ gObjectEventPic_Woman3 frame slice
	.globl gObjectEventFrame_JP_0848FC8C
gObjectEventFrame_JP_0848FC8C: @ 0x0848FC8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 24; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_3.4bpp", 0x100, 0x100 @ gObjectEventPic_Woman3 frame slice
	.globl gObjectEventFrame_JP_0848FD8C
gObjectEventFrame_JP_0848FD8C: @ 0x0848FD8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 24; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_3.4bpp", 0x200, 0x100 @ gObjectEventPic_Woman3 frame slice
	.globl gObjectEventFrame_JP_0848FE8C
gObjectEventFrame_JP_0848FE8C: @ 0x0848FE8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 24; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_3.4bpp", 0x300, 0x100 @ gObjectEventPic_Woman3 frame slice
	.globl gObjectEventFrame_JP_0848FF8C
gObjectEventFrame_JP_0848FF8C: @ 0x0848FF8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 24; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_3.4bpp", 0x400, 0x100 @ gObjectEventPic_Woman3 frame slice
	.globl gObjectEventFrame_JP_0849008C
gObjectEventFrame_JP_0849008C: @ 0x0849008C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 24; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_3.4bpp", 0x500, 0x100 @ gObjectEventPic_Woman3 frame slice
	.globl gObjectEventFrame_JP_0849018C
gObjectEventFrame_JP_0849018C: @ 0x0849018C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 24; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_3.4bpp", 0x600, 0x100 @ gObjectEventPic_Woman3 frame slice
	.globl gObjectEventFrame_JP_0849028C
gObjectEventFrame_JP_0849028C: @ 0x0849028C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 24; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_3.4bpp", 0x700, 0x100 @ gObjectEventPic_Woman3 frame slice
	.globl gObjectEventFrame_JP_0849038C
gObjectEventFrame_JP_0849038C: @ 0x0849038C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 24; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_3.4bpp", 0x800, 0x100 @ gObjectEventPic_Woman3 frame slice
	.globl gObjectEventFrame_JP_0849048C
gObjectEventFrame_JP_0849048C: @ 0x0849048C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 25; size=0x100
	.incbin "build/graphics/object_events/pics/people/pokefan_m.4bpp", 0x0, 0x100 @ gObjectEventPic_PokefanM frame slice
	.globl gObjectEventFrame_JP_0849058C
gObjectEventFrame_JP_0849058C: @ 0x0849058C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 25; size=0x100
	.incbin "build/graphics/object_events/pics/people/pokefan_m.4bpp", 0x100, 0x100 @ gObjectEventPic_PokefanM frame slice
	.globl gObjectEventFrame_JP_0849068C
gObjectEventFrame_JP_0849068C: @ 0x0849068C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 25; size=0x100
	.incbin "build/graphics/object_events/pics/people/pokefan_m.4bpp", 0x200, 0x100 @ gObjectEventPic_PokefanM frame slice
	.globl gObjectEventFrame_JP_0849078C
gObjectEventFrame_JP_0849078C: @ 0x0849078C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 25; size=0x100
	.incbin "build/graphics/object_events/pics/people/pokefan_m.4bpp", 0x300, 0x100 @ gObjectEventPic_PokefanM frame slice
	.globl gObjectEventFrame_JP_0849088C
gObjectEventFrame_JP_0849088C: @ 0x0849088C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 25; size=0x100
	.incbin "build/graphics/object_events/pics/people/pokefan_m.4bpp", 0x400, 0x100 @ gObjectEventPic_PokefanM frame slice
	.globl gObjectEventFrame_JP_0849098C
gObjectEventFrame_JP_0849098C: @ 0x0849098C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 25; size=0x100
	.incbin "build/graphics/object_events/pics/people/pokefan_m.4bpp", 0x500, 0x100 @ gObjectEventPic_PokefanM frame slice
	.globl gObjectEventFrame_JP_08490A8C
gObjectEventFrame_JP_08490A8C: @ 0x08490A8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 25; size=0x100
	.incbin "build/graphics/object_events/pics/people/pokefan_m.4bpp", 0x600, 0x100 @ gObjectEventPic_PokefanM frame slice
	.globl gObjectEventFrame_JP_08490B8C
gObjectEventFrame_JP_08490B8C: @ 0x08490B8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 25; size=0x100
	.incbin "build/graphics/object_events/pics/people/pokefan_m.4bpp", 0x700, 0x100 @ gObjectEventPic_PokefanM frame slice
	.globl gObjectEventFrame_JP_08490C8C
gObjectEventFrame_JP_08490C8C: @ 0x08490C8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 25; size=0x100
	.incbin "build/graphics/object_events/pics/people/pokefan_m.4bpp", 0x800, 0x100 @ gObjectEventPic_PokefanM frame slice
	.globl gObjectEventFrame_JP_08490D8C
gObjectEventFrame_JP_08490D8C: @ 0x08490D8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 26; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_4.4bpp", 0x0, 0x100 @ gObjectEventPic_Woman4 frame slice
	.globl gObjectEventFrame_JP_08490E8C
gObjectEventFrame_JP_08490E8C: @ 0x08490E8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 26; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_4.4bpp", 0x100, 0x100 @ gObjectEventPic_Woman4 frame slice
	.globl gObjectEventFrame_JP_08490F8C
gObjectEventFrame_JP_08490F8C: @ 0x08490F8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 26; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_4.4bpp", 0x200, 0x100 @ gObjectEventPic_Woman4 frame slice
	.globl gObjectEventFrame_JP_0849108C
gObjectEventFrame_JP_0849108C: @ 0x0849108C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 26; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_4.4bpp", 0x300, 0x100 @ gObjectEventPic_Woman4 frame slice
	.globl gObjectEventFrame_JP_0849118C
gObjectEventFrame_JP_0849118C: @ 0x0849118C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 26; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_4.4bpp", 0x400, 0x100 @ gObjectEventPic_Woman4 frame slice
	.globl gObjectEventFrame_JP_0849128C
gObjectEventFrame_JP_0849128C: @ 0x0849128C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 26; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_4.4bpp", 0x500, 0x100 @ gObjectEventPic_Woman4 frame slice
	.globl gObjectEventFrame_JP_0849138C
gObjectEventFrame_JP_0849138C: @ 0x0849138C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 26; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_4.4bpp", 0x600, 0x100 @ gObjectEventPic_Woman4 frame slice
	.globl gObjectEventFrame_JP_0849148C
gObjectEventFrame_JP_0849148C: @ 0x0849148C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 26; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_4.4bpp", 0x700, 0x100 @ gObjectEventPic_Woman4 frame slice
	.globl gObjectEventFrame_JP_0849158C
gObjectEventFrame_JP_0849158C: @ 0x0849158C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 26; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_4.4bpp", 0x800, 0x100 @ gObjectEventPic_Woman4 frame slice
	.globl gObjectEventFrame_JP_0849168C
gObjectEventFrame_JP_0849168C: @ 0x0849168C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 27; size=0x100
	.incbin "build/graphics/object_events/pics/people/cook.4bpp", 0x0, 0x100 @ gObjectEventPic_Cook frame slice
	.globl gObjectEventFrame_JP_0849178C
gObjectEventFrame_JP_0849178C: @ 0x0849178C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 27; size=0x100
	.incbin "build/graphics/object_events/pics/people/cook.4bpp", 0x100, 0x100 @ gObjectEventPic_Cook frame slice
	.globl gObjectEventFrame_JP_0849188C
gObjectEventFrame_JP_0849188C: @ 0x0849188C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 27; size=0x100
	.incbin "build/graphics/object_events/pics/people/cook.4bpp", 0x200, 0x100 @ gObjectEventPic_Cook frame slice
	.globl gObjectEventFrame_JP_0849198C
gObjectEventFrame_JP_0849198C: @ 0x0849198C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 28; size=0x100
	.incbin "build/graphics/object_events/pics/people/link_receptionist.4bpp", 0x0, 0x100 @ gObjectEventPic_LinkReceptionist frame slice
	.globl gObjectEventFrame_JP_08491A8C
gObjectEventFrame_JP_08491A8C: @ 0x08491A8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 28; size=0x100
	.incbin "build/graphics/object_events/pics/people/link_receptionist.4bpp", 0x100, 0x100 @ gObjectEventPic_LinkReceptionist frame slice
	.globl gObjectEventFrame_JP_08491B8C
gObjectEventFrame_JP_08491B8C: @ 0x08491B8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 28; size=0x100
	.incbin "build/graphics/object_events/pics/people/link_receptionist.4bpp", 0x200, 0x100 @ gObjectEventPic_LinkReceptionist frame slice
	.globl gObjectEventFrame_JP_08491C8C
gObjectEventFrame_JP_08491C8C: @ 0x08491C8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 28; size=0x100
	.incbin "build/graphics/object_events/pics/people/link_receptionist.4bpp", 0x300, 0x100 @ gObjectEventPic_LinkReceptionist frame slice
	.globl gObjectEventFrame_JP_08491D8C
gObjectEventFrame_JP_08491D8C: @ 0x08491D8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 28; size=0x100
	.incbin "build/graphics/object_events/pics/people/link_receptionist.4bpp", 0x400, 0x100 @ gObjectEventPic_LinkReceptionist frame slice
	.globl gObjectEventFrame_JP_08491E8C
gObjectEventFrame_JP_08491E8C: @ 0x08491E8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 28; size=0x100
	.incbin "build/graphics/object_events/pics/people/link_receptionist.4bpp", 0x500, 0x100 @ gObjectEventPic_LinkReceptionist frame slice
	.globl gObjectEventFrame_JP_08491F8C
gObjectEventFrame_JP_08491F8C: @ 0x08491F8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 28; size=0x100
	.incbin "build/graphics/object_events/pics/people/link_receptionist.4bpp", 0x600, 0x100 @ gObjectEventPic_LinkReceptionist frame slice
	.globl gObjectEventFrame_JP_0849208C
gObjectEventFrame_JP_0849208C: @ 0x0849208C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 28; size=0x100
	.incbin "build/graphics/object_events/pics/people/link_receptionist.4bpp", 0x700, 0x100 @ gObjectEventPic_LinkReceptionist frame slice
	.globl gObjectEventFrame_JP_0849218C
gObjectEventFrame_JP_0849218C: @ 0x0849218C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 28; size=0x100
	.incbin "build/graphics/object_events/pics/people/link_receptionist.4bpp", 0x800, 0x100 @ gObjectEventPic_LinkReceptionist frame slice
	.globl gObjectEventFrame_JP_0849228C
gObjectEventFrame_JP_0849228C: @ 0x0849228C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 29; size=0x100
	.incbin "build/graphics/object_events/pics/people/old_man.4bpp", 0x0, 0x100 @ gObjectEventPic_OldMan frame slice
	.globl gObjectEventFrame_JP_0849238C
gObjectEventFrame_JP_0849238C: @ 0x0849238C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 29; size=0x100
	.incbin "build/graphics/object_events/pics/people/old_man.4bpp", 0x100, 0x100 @ gObjectEventPic_OldMan frame slice
	.globl gObjectEventFrame_JP_0849248C
gObjectEventFrame_JP_0849248C: @ 0x0849248C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 29; size=0x100
	.incbin "build/graphics/object_events/pics/people/old_man.4bpp", 0x200, 0x100 @ gObjectEventPic_OldMan frame slice
	.globl gObjectEventFrame_JP_0849258C
gObjectEventFrame_JP_0849258C: @ 0x0849258C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 30; size=0x100
	.incbin "build/graphics/object_events/pics/people/old_woman.4bpp", 0x0, 0x100 @ gObjectEventPic_OldWoman frame slice
	.globl gObjectEventFrame_JP_0849268C
gObjectEventFrame_JP_0849268C: @ 0x0849268C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 30; size=0x100
	.incbin "build/graphics/object_events/pics/people/old_woman.4bpp", 0x100, 0x100 @ gObjectEventPic_OldWoman frame slice
	.globl gObjectEventFrame_JP_0849278C
gObjectEventFrame_JP_0849278C: @ 0x0849278C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 30; size=0x100
	.incbin "build/graphics/object_events/pics/people/old_woman.4bpp", 0x200, 0x100 @ gObjectEventPic_OldWoman frame slice
	.globl gObjectEventFrame_JP_0849288C
gObjectEventFrame_JP_0849288C: @ 0x0849288C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 30; size=0x100
	.incbin "build/graphics/object_events/pics/people/old_woman.4bpp", 0x300, 0x100 @ gObjectEventPic_OldWoman frame slice
	.globl gObjectEventFrame_JP_0849298C
gObjectEventFrame_JP_0849298C: @ 0x0849298C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 30; size=0x100
	.incbin "build/graphics/object_events/pics/people/old_woman.4bpp", 0x400, 0x100 @ gObjectEventPic_OldWoman frame slice
	.globl gObjectEventFrame_JP_08492A8C
gObjectEventFrame_JP_08492A8C: @ 0x08492A8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 30; size=0x100
	.incbin "build/graphics/object_events/pics/people/old_woman.4bpp", 0x500, 0x100 @ gObjectEventPic_OldWoman frame slice
	.globl gObjectEventFrame_JP_08492B8C
gObjectEventFrame_JP_08492B8C: @ 0x08492B8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 30; size=0x100
	.incbin "build/graphics/object_events/pics/people/old_woman.4bpp", 0x600, 0x100 @ gObjectEventPic_OldWoman frame slice
	.globl gObjectEventFrame_JP_08492C8C
gObjectEventFrame_JP_08492C8C: @ 0x08492C8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 30; size=0x100
	.incbin "build/graphics/object_events/pics/people/old_woman.4bpp", 0x700, 0x100 @ gObjectEventPic_OldWoman frame slice
	.globl gObjectEventFrame_JP_08492D8C
gObjectEventFrame_JP_08492D8C: @ 0x08492D8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 30; size=0x100
	.incbin "build/graphics/object_events/pics/people/old_woman.4bpp", 0x800, 0x100 @ gObjectEventPic_OldWoman frame slice
	.globl gObjectEventFrame_JP_08492E8C
gObjectEventFrame_JP_08492E8C: @ 0x08492E8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 31; size=0x100
	.incbin "build/graphics/object_events/pics/people/camper.4bpp", 0x0, 0x100 @ gObjectEventPic_Camper frame slice
	.globl gObjectEventFrame_JP_08492F8C
gObjectEventFrame_JP_08492F8C: @ 0x08492F8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 31; size=0x100
	.incbin "build/graphics/object_events/pics/people/camper.4bpp", 0x100, 0x100 @ gObjectEventPic_Camper frame slice
	.globl gObjectEventFrame_JP_0849308C
gObjectEventFrame_JP_0849308C: @ 0x0849308C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 31; size=0x100
	.incbin "build/graphics/object_events/pics/people/camper.4bpp", 0x200, 0x100 @ gObjectEventPic_Camper frame slice
	.globl gObjectEventFrame_JP_0849318C
gObjectEventFrame_JP_0849318C: @ 0x0849318C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 31; size=0x100
	.incbin "build/graphics/object_events/pics/people/camper.4bpp", 0x300, 0x100 @ gObjectEventPic_Camper frame slice
	.globl gObjectEventFrame_JP_0849328C
gObjectEventFrame_JP_0849328C: @ 0x0849328C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 31; size=0x100
	.incbin "build/graphics/object_events/pics/people/camper.4bpp", 0x400, 0x100 @ gObjectEventPic_Camper frame slice
	.globl gObjectEventFrame_JP_0849338C
gObjectEventFrame_JP_0849338C: @ 0x0849338C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 31; size=0x100
	.incbin "build/graphics/object_events/pics/people/camper.4bpp", 0x500, 0x100 @ gObjectEventPic_Camper frame slice
	.globl gObjectEventFrame_JP_0849348C
gObjectEventFrame_JP_0849348C: @ 0x0849348C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 31; size=0x100
	.incbin "build/graphics/object_events/pics/people/camper.4bpp", 0x600, 0x100 @ gObjectEventPic_Camper frame slice
	.globl gObjectEventFrame_JP_0849358C
gObjectEventFrame_JP_0849358C: @ 0x0849358C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 31; size=0x100
	.incbin "build/graphics/object_events/pics/people/camper.4bpp", 0x700, 0x100 @ gObjectEventPic_Camper frame slice
	.globl gObjectEventFrame_JP_0849368C
gObjectEventFrame_JP_0849368C: @ 0x0849368C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 31; size=0x100
	.incbin "build/graphics/object_events/pics/people/camper.4bpp", 0x800, 0x100 @ gObjectEventPic_Camper frame slice
	.globl gObjectEventFrame_JP_0849378C
gObjectEventFrame_JP_0849378C: @ 0x0849378C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 32; size=0x100
	.incbin "build/graphics/object_events/pics/people/picnicker.4bpp", 0x0, 0x100 @ gObjectEventPic_Picnicker frame slice
	.globl gObjectEventFrame_JP_0849388C
gObjectEventFrame_JP_0849388C: @ 0x0849388C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 32; size=0x100
	.incbin "build/graphics/object_events/pics/people/picnicker.4bpp", 0x100, 0x100 @ gObjectEventPic_Picnicker frame slice
	.globl gObjectEventFrame_JP_0849398C
gObjectEventFrame_JP_0849398C: @ 0x0849398C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 32; size=0x100
	.incbin "build/graphics/object_events/pics/people/picnicker.4bpp", 0x200, 0x100 @ gObjectEventPic_Picnicker frame slice
	.globl gObjectEventFrame_JP_08493A8C
gObjectEventFrame_JP_08493A8C: @ 0x08493A8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 32; size=0x100
	.incbin "build/graphics/object_events/pics/people/picnicker.4bpp", 0x300, 0x100 @ gObjectEventPic_Picnicker frame slice
	.globl gObjectEventFrame_JP_08493B8C
gObjectEventFrame_JP_08493B8C: @ 0x08493B8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 32; size=0x100
	.incbin "build/graphics/object_events/pics/people/picnicker.4bpp", 0x400, 0x100 @ gObjectEventPic_Picnicker frame slice
	.globl gObjectEventFrame_JP_08493C8C
gObjectEventFrame_JP_08493C8C: @ 0x08493C8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 32; size=0x100
	.incbin "build/graphics/object_events/pics/people/picnicker.4bpp", 0x500, 0x100 @ gObjectEventPic_Picnicker frame slice
	.globl gObjectEventFrame_JP_08493D8C
gObjectEventFrame_JP_08493D8C: @ 0x08493D8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 32; size=0x100
	.incbin "build/graphics/object_events/pics/people/picnicker.4bpp", 0x600, 0x100 @ gObjectEventPic_Picnicker frame slice
	.globl gObjectEventFrame_JP_08493E8C
gObjectEventFrame_JP_08493E8C: @ 0x08493E8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 32; size=0x100
	.incbin "build/graphics/object_events/pics/people/picnicker.4bpp", 0x700, 0x100 @ gObjectEventPic_Picnicker frame slice
	.globl gObjectEventFrame_JP_08493F8C
gObjectEventFrame_JP_08493F8C: @ 0x08493F8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 32; size=0x100
	.incbin "build/graphics/object_events/pics/people/picnicker.4bpp", 0x800, 0x100 @ gObjectEventPic_Picnicker frame slice
	.globl gObjectEventFrame_JP_0849408C
gObjectEventFrame_JP_0849408C: @ 0x0849408C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 33; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_3.4bpp", 0x0, 0x100 @ gObjectEventPic_Man3 frame slice
	.globl gObjectEventFrame_JP_0849418C
gObjectEventFrame_JP_0849418C: @ 0x0849418C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 33; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_3.4bpp", 0x100, 0x100 @ gObjectEventPic_Man3 frame slice
	.globl gObjectEventFrame_JP_0849428C
gObjectEventFrame_JP_0849428C: @ 0x0849428C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 33; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_3.4bpp", 0x200, 0x100 @ gObjectEventPic_Man3 frame slice
	.globl gObjectEventFrame_JP_0849438C
gObjectEventFrame_JP_0849438C: @ 0x0849438C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 33; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_3.4bpp", 0x300, 0x100 @ gObjectEventPic_Man3 frame slice
	.globl gObjectEventFrame_JP_0849448C
gObjectEventFrame_JP_0849448C: @ 0x0849448C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 33; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_3.4bpp", 0x400, 0x100 @ gObjectEventPic_Man3 frame slice
	.globl gObjectEventFrame_JP_0849458C
gObjectEventFrame_JP_0849458C: @ 0x0849458C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 33; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_3.4bpp", 0x500, 0x100 @ gObjectEventPic_Man3 frame slice
	.globl gObjectEventFrame_JP_0849468C
gObjectEventFrame_JP_0849468C: @ 0x0849468C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 33; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_3.4bpp", 0x600, 0x100 @ gObjectEventPic_Man3 frame slice
	.globl gObjectEventFrame_JP_0849478C
gObjectEventFrame_JP_0849478C: @ 0x0849478C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 33; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_3.4bpp", 0x700, 0x100 @ gObjectEventPic_Man3 frame slice
	.globl gObjectEventFrame_JP_0849488C
gObjectEventFrame_JP_0849488C: @ 0x0849488C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 33; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_3.4bpp", 0x800, 0x100 @ gObjectEventPic_Man3 frame slice
	.globl gObjectEventFrame_JP_0849498C
gObjectEventFrame_JP_0849498C: @ 0x0849498C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 34; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_5.4bpp", 0x0, 0x100 @ gObjectEventPic_Woman5 frame slice
	.globl gObjectEventFrame_JP_08494A8C
gObjectEventFrame_JP_08494A8C: @ 0x08494A8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 34; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_5.4bpp", 0x100, 0x100 @ gObjectEventPic_Woman5 frame slice
	.globl gObjectEventFrame_JP_08494B8C
gObjectEventFrame_JP_08494B8C: @ 0x08494B8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 34; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_5.4bpp", 0x200, 0x100 @ gObjectEventPic_Woman5 frame slice
	.globl gObjectEventFrame_JP_08494C8C
gObjectEventFrame_JP_08494C8C: @ 0x08494C8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 34; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_5.4bpp", 0x300, 0x100 @ gObjectEventPic_Woman5 frame slice
	.globl gObjectEventFrame_JP_08494D8C
gObjectEventFrame_JP_08494D8C: @ 0x08494D8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 34; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_5.4bpp", 0x400, 0x100 @ gObjectEventPic_Woman5 frame slice
	.globl gObjectEventFrame_JP_08494E8C
gObjectEventFrame_JP_08494E8C: @ 0x08494E8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 34; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_5.4bpp", 0x500, 0x100 @ gObjectEventPic_Woman5 frame slice
	.globl gObjectEventFrame_JP_08494F8C
gObjectEventFrame_JP_08494F8C: @ 0x08494F8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 34; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_5.4bpp", 0x600, 0x100 @ gObjectEventPic_Woman5 frame slice
	.globl gObjectEventFrame_JP_0849508C
gObjectEventFrame_JP_0849508C: @ 0x0849508C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 34; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_5.4bpp", 0x700, 0x100 @ gObjectEventPic_Woman5 frame slice
	.globl gObjectEventFrame_JP_0849518C
gObjectEventFrame_JP_0849518C: @ 0x0849518C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 34; size=0x100
	.incbin "build/graphics/object_events/pics/people/woman_5.4bpp", 0x800, 0x100 @ gObjectEventPic_Woman5 frame slice
	.globl gObjectEventFrame_JP_0849528C
gObjectEventFrame_JP_0849528C: @ 0x0849528C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 35; size=0x100
	.incbin "build/graphics/object_events/pics/people/youngster.4bpp", 0x0, 0x100 @ gObjectEventPic_Youngster frame slice
	.globl gObjectEventFrame_JP_0849538C
gObjectEventFrame_JP_0849538C: @ 0x0849538C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 35; size=0x100
	.incbin "build/graphics/object_events/pics/people/youngster.4bpp", 0x100, 0x100 @ gObjectEventPic_Youngster frame slice
	.globl gObjectEventFrame_JP_0849548C
gObjectEventFrame_JP_0849548C: @ 0x0849548C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 35; size=0x100
	.incbin "build/graphics/object_events/pics/people/youngster.4bpp", 0x200, 0x100 @ gObjectEventPic_Youngster frame slice
	.globl gObjectEventFrame_JP_0849558C
gObjectEventFrame_JP_0849558C: @ 0x0849558C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 35; size=0x100
	.incbin "build/graphics/object_events/pics/people/youngster.4bpp", 0x300, 0x100 @ gObjectEventPic_Youngster frame slice
	.globl gObjectEventFrame_JP_0849568C
gObjectEventFrame_JP_0849568C: @ 0x0849568C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 35; size=0x100
	.incbin "build/graphics/object_events/pics/people/youngster.4bpp", 0x400, 0x100 @ gObjectEventPic_Youngster frame slice
	.globl gObjectEventFrame_JP_0849578C
gObjectEventFrame_JP_0849578C: @ 0x0849578C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 35; size=0x100
	.incbin "build/graphics/object_events/pics/people/youngster.4bpp", 0x500, 0x100 @ gObjectEventPic_Youngster frame slice
	.globl gObjectEventFrame_JP_0849588C
gObjectEventFrame_JP_0849588C: @ 0x0849588C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 35; size=0x100
	.incbin "build/graphics/object_events/pics/people/youngster.4bpp", 0x600, 0x100 @ gObjectEventPic_Youngster frame slice
	.globl gObjectEventFrame_JP_0849598C
gObjectEventFrame_JP_0849598C: @ 0x0849598C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 35; size=0x100
	.incbin "build/graphics/object_events/pics/people/youngster.4bpp", 0x700, 0x100 @ gObjectEventPic_Youngster frame slice
	.globl gObjectEventFrame_JP_08495A8C
gObjectEventFrame_JP_08495A8C: @ 0x08495A8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 35; size=0x100
	.incbin "build/graphics/object_events/pics/people/youngster.4bpp", 0x800, 0x100 @ gObjectEventPic_Youngster frame slice
	.globl gObjectEventFrame_JP_08495B8C
gObjectEventFrame_JP_08495B8C: @ 0x08495B8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 36; size=0x100
	.incbin "build/graphics/object_events/pics/people/bug_catcher.4bpp", 0x0, 0x100 @ gObjectEventPic_BugCatcher frame slice
	.globl gObjectEventFrame_JP_08495C8C
gObjectEventFrame_JP_08495C8C: @ 0x08495C8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 36; size=0x100
	.incbin "build/graphics/object_events/pics/people/bug_catcher.4bpp", 0x100, 0x100 @ gObjectEventPic_BugCatcher frame slice
	.globl gObjectEventFrame_JP_08495D8C
gObjectEventFrame_JP_08495D8C: @ 0x08495D8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 36; size=0x100
	.incbin "build/graphics/object_events/pics/people/bug_catcher.4bpp", 0x200, 0x100 @ gObjectEventPic_BugCatcher frame slice
	.globl gObjectEventFrame_JP_08495E8C
gObjectEventFrame_JP_08495E8C: @ 0x08495E8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 36; size=0x100
	.incbin "build/graphics/object_events/pics/people/bug_catcher.4bpp", 0x300, 0x100 @ gObjectEventPic_BugCatcher frame slice
	.globl gObjectEventFrame_JP_08495F8C
gObjectEventFrame_JP_08495F8C: @ 0x08495F8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 36; size=0x100
	.incbin "build/graphics/object_events/pics/people/bug_catcher.4bpp", 0x400, 0x100 @ gObjectEventPic_BugCatcher frame slice
	.globl gObjectEventFrame_JP_0849608C
gObjectEventFrame_JP_0849608C: @ 0x0849608C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 36; size=0x100
	.incbin "build/graphics/object_events/pics/people/bug_catcher.4bpp", 0x500, 0x100 @ gObjectEventPic_BugCatcher frame slice
	.globl gObjectEventFrame_JP_0849618C
gObjectEventFrame_JP_0849618C: @ 0x0849618C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 36; size=0x100
	.incbin "build/graphics/object_events/pics/people/bug_catcher.4bpp", 0x600, 0x100 @ gObjectEventPic_BugCatcher frame slice
	.globl gObjectEventFrame_JP_0849628C
gObjectEventFrame_JP_0849628C: @ 0x0849628C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 36; size=0x100
	.incbin "build/graphics/object_events/pics/people/bug_catcher.4bpp", 0x700, 0x100 @ gObjectEventPic_BugCatcher frame slice
	.globl gObjectEventFrame_JP_0849638C
gObjectEventFrame_JP_0849638C: @ 0x0849638C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 36; size=0x100
	.incbin "build/graphics/object_events/pics/people/bug_catcher.4bpp", 0x800, 0x100 @ gObjectEventPic_BugCatcher frame slice
	.globl gObjectEventFrame_JP_0849648C
gObjectEventFrame_JP_0849648C: @ 0x0849648C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 37; size=0x100
	.incbin "build/graphics/object_events/pics/people/psychic_m.4bpp", 0x0, 0x100 @ gObjectEventPic_PsychicM frame slice
	.globl gObjectEventFrame_JP_0849658C
gObjectEventFrame_JP_0849658C: @ 0x0849658C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 37; size=0x100
	.incbin "build/graphics/object_events/pics/people/psychic_m.4bpp", 0x100, 0x100 @ gObjectEventPic_PsychicM frame slice
	.globl gObjectEventFrame_JP_0849668C
gObjectEventFrame_JP_0849668C: @ 0x0849668C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 37; size=0x100
	.incbin "build/graphics/object_events/pics/people/psychic_m.4bpp", 0x200, 0x100 @ gObjectEventPic_PsychicM frame slice
	.globl gObjectEventFrame_JP_0849678C
gObjectEventFrame_JP_0849678C: @ 0x0849678C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 37; size=0x100
	.incbin "build/graphics/object_events/pics/people/psychic_m.4bpp", 0x300, 0x100 @ gObjectEventPic_PsychicM frame slice
	.globl gObjectEventFrame_JP_0849688C
gObjectEventFrame_JP_0849688C: @ 0x0849688C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 37; size=0x100
	.incbin "build/graphics/object_events/pics/people/psychic_m.4bpp", 0x400, 0x100 @ gObjectEventPic_PsychicM frame slice
	.globl gObjectEventFrame_JP_0849698C
gObjectEventFrame_JP_0849698C: @ 0x0849698C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 37; size=0x100
	.incbin "build/graphics/object_events/pics/people/psychic_m.4bpp", 0x500, 0x100 @ gObjectEventPic_PsychicM frame slice
	.globl gObjectEventFrame_JP_08496A8C
gObjectEventFrame_JP_08496A8C: @ 0x08496A8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 37; size=0x100
	.incbin "build/graphics/object_events/pics/people/psychic_m.4bpp", 0x600, 0x100 @ gObjectEventPic_PsychicM frame slice
	.globl gObjectEventFrame_JP_08496B8C
gObjectEventFrame_JP_08496B8C: @ 0x08496B8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 37; size=0x100
	.incbin "build/graphics/object_events/pics/people/psychic_m.4bpp", 0x700, 0x100 @ gObjectEventPic_PsychicM frame slice
	.globl gObjectEventFrame_JP_08496C8C
gObjectEventFrame_JP_08496C8C: @ 0x08496C8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 37; size=0x100
	.incbin "build/graphics/object_events/pics/people/psychic_m.4bpp", 0x800, 0x100 @ gObjectEventPic_PsychicM frame slice
	.globl gObjectEventFrame_JP_08496D8C
gObjectEventFrame_JP_08496D8C: @ 0x08496D8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 38; size=0x100
	.incbin "build/graphics/object_events/pics/people/school_kid_m.4bpp", 0x0, 0x100 @ gObjectEventPic_SchoolKidM frame slice
	.globl gObjectEventFrame_JP_08496E8C
gObjectEventFrame_JP_08496E8C: @ 0x08496E8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 38; size=0x100
	.incbin "build/graphics/object_events/pics/people/school_kid_m.4bpp", 0x100, 0x100 @ gObjectEventPic_SchoolKidM frame slice
	.globl gObjectEventFrame_JP_08496F8C
gObjectEventFrame_JP_08496F8C: @ 0x08496F8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 38; size=0x100
	.incbin "build/graphics/object_events/pics/people/school_kid_m.4bpp", 0x200, 0x100 @ gObjectEventPic_SchoolKidM frame slice
	.globl gObjectEventFrame_JP_0849708C
gObjectEventFrame_JP_0849708C: @ 0x0849708C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 38; size=0x100
	.incbin "build/graphics/object_events/pics/people/school_kid_m.4bpp", 0x300, 0x100 @ gObjectEventPic_SchoolKidM frame slice
	.globl gObjectEventFrame_JP_0849718C
gObjectEventFrame_JP_0849718C: @ 0x0849718C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 38; size=0x100
	.incbin "build/graphics/object_events/pics/people/school_kid_m.4bpp", 0x400, 0x100 @ gObjectEventPic_SchoolKidM frame slice
	.globl gObjectEventFrame_JP_0849728C
gObjectEventFrame_JP_0849728C: @ 0x0849728C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 38; size=0x100
	.incbin "build/graphics/object_events/pics/people/school_kid_m.4bpp", 0x500, 0x100 @ gObjectEventPic_SchoolKidM frame slice
	.globl gObjectEventFrame_JP_0849738C
gObjectEventFrame_JP_0849738C: @ 0x0849738C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 38; size=0x100
	.incbin "build/graphics/object_events/pics/people/school_kid_m.4bpp", 0x600, 0x100 @ gObjectEventPic_SchoolKidM frame slice
	.globl gObjectEventFrame_JP_0849748C
gObjectEventFrame_JP_0849748C: @ 0x0849748C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 38; size=0x100
	.incbin "build/graphics/object_events/pics/people/school_kid_m.4bpp", 0x700, 0x100 @ gObjectEventPic_SchoolKidM frame slice
	.globl gObjectEventFrame_JP_0849758C
gObjectEventFrame_JP_0849758C: @ 0x0849758C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 38; size=0x100
	.incbin "build/graphics/object_events/pics/people/school_kid_m.4bpp", 0x800, 0x100 @ gObjectEventPic_SchoolKidM frame slice
	.globl gObjectEventFrame_JP_0849768C
gObjectEventFrame_JP_0849768C: @ 0x0849768C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 39; size=0x100
	.incbin "build/graphics/object_events/pics/people/maniac.4bpp", 0x0, 0x100 @ gObjectEventPic_Maniac frame slice
	.globl gObjectEventFrame_JP_0849778C
gObjectEventFrame_JP_0849778C: @ 0x0849778C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 39; size=0x100
	.incbin "build/graphics/object_events/pics/people/maniac.4bpp", 0x100, 0x100 @ gObjectEventPic_Maniac frame slice
	.globl gObjectEventFrame_JP_0849788C
gObjectEventFrame_JP_0849788C: @ 0x0849788C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 39; size=0x100
	.incbin "build/graphics/object_events/pics/people/maniac.4bpp", 0x200, 0x100 @ gObjectEventPic_Maniac frame slice
	.globl gObjectEventFrame_JP_0849798C
gObjectEventFrame_JP_0849798C: @ 0x0849798C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 39; size=0x100
	.incbin "build/graphics/object_events/pics/people/maniac.4bpp", 0x300, 0x100 @ gObjectEventPic_Maniac frame slice
	.globl gObjectEventFrame_JP_08497A8C
gObjectEventFrame_JP_08497A8C: @ 0x08497A8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 39; size=0x100
	.incbin "build/graphics/object_events/pics/people/maniac.4bpp", 0x400, 0x100 @ gObjectEventPic_Maniac frame slice
	.globl gObjectEventFrame_JP_08497B8C
gObjectEventFrame_JP_08497B8C: @ 0x08497B8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 39; size=0x100
	.incbin "build/graphics/object_events/pics/people/maniac.4bpp", 0x500, 0x100 @ gObjectEventPic_Maniac frame slice
	.globl gObjectEventFrame_JP_08497C8C
gObjectEventFrame_JP_08497C8C: @ 0x08497C8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 39; size=0x100
	.incbin "build/graphics/object_events/pics/people/maniac.4bpp", 0x600, 0x100 @ gObjectEventPic_Maniac frame slice
	.globl gObjectEventFrame_JP_08497D8C
gObjectEventFrame_JP_08497D8C: @ 0x08497D8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 39; size=0x100
	.incbin "build/graphics/object_events/pics/people/maniac.4bpp", 0x700, 0x100 @ gObjectEventPic_Maniac frame slice
	.globl gObjectEventFrame_JP_08497E8C
gObjectEventFrame_JP_08497E8C: @ 0x08497E8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 39; size=0x100
	.incbin "build/graphics/object_events/pics/people/maniac.4bpp", 0x800, 0x100 @ gObjectEventPic_Maniac frame slice
	.globl gObjectEventFrame_JP_08497F8C
gObjectEventFrame_JP_08497F8C: @ 0x08497F8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 40; size=0x100
	.incbin "build/graphics/object_events/pics/people/hex_maniac.4bpp", 0x0, 0x100 @ gObjectEventPic_HexManiac frame slice
	.globl gObjectEventFrame_JP_0849808C
gObjectEventFrame_JP_0849808C: @ 0x0849808C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 40; size=0x100
	.incbin "build/graphics/object_events/pics/people/hex_maniac.4bpp", 0x100, 0x100 @ gObjectEventPic_HexManiac frame slice
	.globl gObjectEventFrame_JP_0849818C
gObjectEventFrame_JP_0849818C: @ 0x0849818C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 40; size=0x100
	.incbin "build/graphics/object_events/pics/people/hex_maniac.4bpp", 0x200, 0x100 @ gObjectEventPic_HexManiac frame slice
	.globl gObjectEventFrame_JP_0849828C
gObjectEventFrame_JP_0849828C: @ 0x0849828C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 40; size=0x100
	.incbin "build/graphics/object_events/pics/people/hex_maniac.4bpp", 0x300, 0x100 @ gObjectEventPic_HexManiac frame slice
	.globl gObjectEventFrame_JP_0849838C
gObjectEventFrame_JP_0849838C: @ 0x0849838C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 40; size=0x100
	.incbin "build/graphics/object_events/pics/people/hex_maniac.4bpp", 0x400, 0x100 @ gObjectEventPic_HexManiac frame slice
	.globl gObjectEventFrame_JP_0849848C
gObjectEventFrame_JP_0849848C: @ 0x0849848C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 40; size=0x100
	.incbin "build/graphics/object_events/pics/people/hex_maniac.4bpp", 0x500, 0x100 @ gObjectEventPic_HexManiac frame slice
	.globl gObjectEventFrame_JP_0849858C
gObjectEventFrame_JP_0849858C: @ 0x0849858C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 40; size=0x100
	.incbin "build/graphics/object_events/pics/people/hex_maniac.4bpp", 0x600, 0x100 @ gObjectEventPic_HexManiac frame slice
	.globl gObjectEventFrame_JP_0849868C
gObjectEventFrame_JP_0849868C: @ 0x0849868C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 40; size=0x100
	.incbin "build/graphics/object_events/pics/people/hex_maniac.4bpp", 0x700, 0x100 @ gObjectEventPic_HexManiac frame slice
	.globl gObjectEventFrame_JP_0849878C
gObjectEventFrame_JP_0849878C: @ 0x0849878C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 40; size=0x100
	.incbin "build/graphics/object_events/pics/people/hex_maniac.4bpp", 0x800, 0x100 @ gObjectEventPic_HexManiac frame slice
	.globl gObjectEventGfxUnreferenced_JP_0849888C
gObjectEventGfxUnreferenced_JP_0849888C: @ 0x0849888C
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_GRAPHICS
	@ object-event graphics/palette payload not reached by current graphics-info table
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDD
	.byte 0x00, 0x00, 0xDD, 0xCC, 0x00, 0xD0, 0xDD, 0xCD, 0x00, 0xDD, 0xCB, 0xDC, 0x00, 0xBD, 0xBB, 0xCD
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDD, 0x00, 0x00, 0x00
	.byte 0xCC, 0xDD, 0x00, 0x00, 0xDC, 0xDD, 0x0D, 0x00, 0xCD, 0xBC, 0xDD, 0x00, 0xDC, 0xBB, 0xDB, 0x00
	.byte 0xD0, 0xBC, 0xCB, 0x11, 0xD0, 0xCC, 0x1C, 0x11, 0xD0, 0xDD, 0x1D, 0x1F, 0x00, 0xDD, 0x23, 0x2F
	.byte 0x00, 0x4E, 0x33, 0x22, 0x00, 0x6D, 0x44, 0x33, 0xDD, 0x64, 0x56, 0x44, 0xD0, 0x3F, 0xE5, 0xCC
	.byte 0x11, 0xBC, 0xCB, 0x0D, 0x11, 0xC1, 0xCC, 0x0D, 0xF1, 0xD1, 0xDD, 0x0D, 0xF2, 0x32, 0x4D, 0x00
	.byte 0x22, 0x33, 0xE4, 0x00, 0x33, 0x44, 0xD6, 0x00, 0x44, 0x65, 0x46, 0xDD, 0xEC, 0x5E, 0xF3, 0x0D
	.byte 0xFD, 0xFD, 0x56, 0xEB, 0xF0, 0x6D, 0x65, 0x55, 0x00, 0x4F, 0x56, 0xEE, 0x00, 0xF0, 0x3F, 0x42
	.byte 0x00, 0xF0, 0xFF, 0xFF, 0x00, 0x00, 0xDF, 0xFD, 0x00, 0x00, 0xF0, 0x0F, 0x00, 0x00, 0x00, 0x00
	.byte 0xBE, 0x65, 0xDF, 0xDF, 0x55, 0x56, 0xD6, 0x0F, 0xEE, 0x65, 0xF4, 0x00, 0x24, 0xF3, 0x0F, 0x00
	.byte 0xFF, 0xFF, 0x0F, 0x00, 0xDF, 0xFD, 0x00, 0x00, 0xF0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDD
	.byte 0x00, 0x00, 0xDD, 0xBB, 0x00, 0xD0, 0xBC, 0xDB, 0x00, 0xCD, 0xBC, 0xBB, 0x00, 0xCD, 0xCC, 0xDB
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDD, 0x00, 0x00, 0x00
	.byte 0xBD, 0xDD, 0x00, 0x00, 0xBB, 0xCB, 0x0D, 0x00, 0xBD, 0xCB, 0xDC, 0x00, 0xBB, 0xCC, 0xDC, 0x00
	.byte 0xD0, 0xCD, 0xCC, 0xCC, 0xD0, 0xDD, 0xCC, 0xCC, 0xD0, 0xDF, 0xDD, 0xCC, 0x00, 0xDF, 0xDD, 0xDD
	.byte 0x00, 0xFE, 0xDD, 0xDD, 0x00, 0xED, 0xFF, 0xDD, 0xDD, 0xDC, 0x5D, 0xFF, 0xC0, 0xFD, 0xE5, 0xEE
	.byte 0xCD, 0xCC, 0xDC, 0x0D, 0xCC, 0xCC, 0xDD, 0x0D, 0xCC, 0xDD, 0xFD, 0x0D, 0xDD, 0xDD, 0xFD, 0x00
	.byte 0xDD, 0xDD, 0xEF, 0x00, 0xDD, 0xFF, 0xDE, 0x00, 0xFF, 0xD5, 0xCD, 0xDD, 0xEE, 0x5E, 0xDF, 0x0C
	.byte 0xDD, 0xCF, 0x56, 0xEE, 0xF0, 0x6D, 0x65, 0x55, 0x00, 0x4F, 0x56, 0xEE, 0x00, 0xF0, 0x3F, 0x42
	.byte 0x00, 0xF0, 0xFF, 0xFF, 0x00, 0x00, 0xDF, 0xFD, 0x00, 0x00, 0xF0, 0x0F, 0x00, 0x00, 0x00, 0x00
	.byte 0xEE, 0x65, 0xFC, 0xDD, 0x55, 0x56, 0xD6, 0x0F, 0xEE, 0x65, 0xF4, 0x00, 0x24, 0xF3, 0x0F, 0x00
	.byte 0xFF, 0xFF, 0x0F, 0x00, 0xDF, 0xFD, 0x00, 0x00, 0xF0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD0, 0xDD
	.byte 0x00, 0xD0, 0xDD, 0xCD, 0x00, 0xCD, 0xBC, 0xDB, 0x00, 0xDD, 0xBB, 0xBB, 0x00, 0xCC, 0xBD, 0xBB
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDD, 0x0D, 0x00, 0x00
	.byte 0xCC, 0xDC, 0x00, 0x00, 0xCC, 0xBC, 0x0D, 0x00, 0xDD, 0xBB, 0xDB, 0x00, 0xCC, 0xBD, 0xDC, 0x00
	.byte 0x00, 0x14, 0xD1, 0xCB, 0x00, 0x14, 0x11, 0xCD, 0x00, 0x14, 0xF1, 0xD2, 0x00, 0x24, 0xF2, 0x32
	.byte 0x00, 0x40, 0x33, 0x33, 0x00, 0x00, 0x44, 0x33, 0x00, 0x00, 0x40, 0x64, 0x00, 0x00, 0xBB, 0x56
	.byte 0xCC, 0xDC, 0xDD, 0x00, 0xCC, 0xDD, 0xDD, 0x00, 0xDD, 0xDD, 0xDD, 0x00, 0x1D, 0xD3, 0x0F, 0x00
	.byte 0x23, 0x43, 0x0E, 0x00, 0x33, 0xEF, 0xDD, 0x00, 0x66, 0xD0, 0xCD, 0x0D, 0xEE, 0x06, 0xDD, 0xDC
	.byte 0x00, 0x00, 0xEB, 0xD5, 0x00, 0x00, 0x60, 0xCF, 0x00, 0x00, 0x00, 0xDF, 0x00, 0x00, 0x00, 0xF4
	.byte 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xF0, 0xDD, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00
	.byte 0xED, 0xF6, 0xDF, 0xFD, 0xFC, 0x65, 0xFF, 0x0F, 0xFD, 0x65, 0x00, 0x00, 0x4F, 0x0F, 0x00, 0x00
	.byte 0xFF, 0x0F, 0x00, 0x00, 0xFF, 0x0F, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0xDD, 0x00, 0x00, 0xDD, 0xCC, 0x00, 0xD0, 0xDD, 0xCD, 0x00, 0xDD, 0xCB, 0xDC
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0xDD, 0x00, 0x00, 0x00, 0xCC, 0xDD, 0x00, 0x00, 0xDC, 0xDD, 0x0D, 0x00, 0xCD, 0xBC, 0xDD, 0x00
	.byte 0x00, 0xBD, 0xBB, 0xCD, 0xD0, 0xBC, 0xCB, 0x11, 0xD0, 0xCC, 0x1C, 0x11, 0xD0, 0xDD, 0x1D, 0x1F
	.byte 0x00, 0xDD, 0x23, 0x2F, 0x00, 0x4E, 0x33, 0x22, 0x00, 0x6F, 0x44, 0x33, 0xFD, 0xFD, 0x56, 0x44
	.byte 0xDC, 0xBB, 0xDB, 0x00, 0x11, 0xBC, 0xCB, 0x0D, 0x11, 0xC1, 0xCC, 0x0D, 0xF1, 0xD1, 0xDD, 0x0D
	.byte 0xF2, 0x32, 0x4D, 0x00, 0x22, 0x33, 0xE4, 0x00, 0x33, 0x44, 0xD6, 0x00, 0x44, 0x65, 0xC6, 0xDD
	.byte 0xF0, 0xFD, 0xE5, 0xCC, 0xDD, 0x6F, 0x56, 0xEB, 0x00, 0x60, 0x65, 0x55, 0x00, 0x40, 0x56, 0xEE
	.byte 0x00, 0x00, 0x4F, 0x23, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xF0, 0xDD, 0x00, 0x00, 0x00, 0xFF
	.byte 0xEC, 0x3E, 0xCF, 0x0D, 0xBE, 0xF5, 0xDF, 0xDD, 0x55, 0xDF, 0xFD, 0x00, 0xEE, 0xDF, 0xFD, 0x00
	.byte 0x44, 0xF4, 0x0F, 0x00, 0xFF, 0x0F, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0xDD, 0x00, 0x00, 0xDD, 0xCC, 0x00, 0xD0, 0xDD, 0xCD, 0x00, 0xDD, 0xCB, 0xDC
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0xDD, 0x00, 0x00, 0x00, 0xCC, 0xDD, 0x00, 0x00, 0xDC, 0xDD, 0x0D, 0x00, 0xCD, 0xBC, 0xDD, 0x00
	.byte 0x00, 0xBD, 0xBB, 0xCD, 0xD0, 0xBC, 0xCB, 0x11, 0xD0, 0xCC, 0x1C, 0x11, 0xD0, 0xDD, 0x1D, 0x1F
	.byte 0x00, 0xD4, 0x23, 0x2F, 0x00, 0x4E, 0x33, 0x22, 0x00, 0x6D, 0x44, 0x33, 0xDD, 0x6C, 0x56, 0x44
	.byte 0xDC, 0xBB, 0xDB, 0x00, 0x11, 0xBC, 0xCB, 0x0D, 0x11, 0xC1, 0xCC, 0x0D, 0xF1, 0xD1, 0xDD, 0x0D
	.byte 0xF2, 0x32, 0xDD, 0x00, 0x22, 0x33, 0xE4, 0x00, 0x33, 0x44, 0xF6, 0x00, 0x44, 0x65, 0xDF, 0xDF
	.byte 0xD0, 0xFC, 0xE3, 0xCE, 0xDD, 0xFD, 0x5F, 0xEB, 0x00, 0xDF, 0xFD, 0x55, 0x00, 0xDF, 0xFD, 0xEE
	.byte 0x00, 0xF0, 0x4F, 0x44, 0x00, 0x00, 0xF0, 0xFF, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00
	.byte 0xCC, 0x5E, 0xDF, 0x0F, 0xBE, 0x65, 0xF6, 0xDD, 0x55, 0x56, 0x06, 0x00, 0xEE, 0x65, 0x04, 0x00
	.byte 0x32, 0xF4, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xDD, 0x0F, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0xDD, 0x00, 0x00, 0xDD, 0xBB, 0x00, 0xD0, 0xBC, 0xDB, 0x00, 0xCD, 0xBC, 0xBB
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0xDD, 0x00, 0x00, 0x00, 0xBD, 0xDD, 0x00, 0x00, 0xBB, 0xCB, 0x0D, 0x00, 0xBD, 0xCB, 0xDC, 0x00
	.byte 0x00, 0xCD, 0xCC, 0xDB, 0xD0, 0xCD, 0xCC, 0xCC, 0xD0, 0xDD, 0xCC, 0xCC, 0xD0, 0xDF, 0xDD, 0xCC
	.byte 0x00, 0xDF, 0xDD, 0xDD, 0x00, 0xFE, 0xDD, 0xDD, 0x00, 0xED, 0xFF, 0xDD, 0xDD, 0xDC, 0x5D, 0xFF
	.byte 0xBB, 0xCC, 0xDC, 0x00, 0xCD, 0xCC, 0xDC, 0x0D, 0xCC, 0xCC, 0xDD, 0x0D, 0xCC, 0xDD, 0xFD, 0x0D
	.byte 0xDD, 0xDD, 0xFD, 0x00, 0xDD, 0xDD, 0xEF, 0x00, 0xDD, 0xFF, 0xDE, 0x00, 0xFF, 0xD5, 0xCD, 0xDD
	.byte 0xC0, 0xFD, 0xE5, 0xEE, 0xDD, 0x6F, 0x56, 0xEE, 0x00, 0x60, 0x65, 0x55, 0x00, 0x40, 0x56, 0xEE
	.byte 0x00, 0x00, 0x4F, 0x23, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xF0, 0xDD, 0x00, 0x00, 0x00, 0xFF
	.byte 0xEE, 0x3E, 0xDF, 0x0C, 0xEE, 0x35, 0xFF, 0xDD, 0x55, 0xF6, 0xFD, 0x00, 0xEE, 0xF5, 0xFD, 0x00
	.byte 0x44, 0xF4, 0x0F, 0x00, 0xFF, 0x0F, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0xDD, 0x00, 0x00, 0xDD, 0xBB, 0x00, 0xD0, 0xBC, 0xDB, 0x00, 0xCD, 0xBC, 0xBB
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0xDD, 0x00, 0x00, 0x00, 0xBD, 0xDD, 0x00, 0x00, 0xBB, 0xCB, 0x0D, 0x00, 0xBD, 0xCB, 0xDC, 0x00
	.byte 0x00, 0xCD, 0xCC, 0xDB, 0xD0, 0xCD, 0xCC, 0xCC, 0xD0, 0xDD, 0xCC, 0xCC, 0xD0, 0xDF, 0xDD, 0xCC
	.byte 0x00, 0xDF, 0xDD, 0xDD, 0x00, 0xFE, 0xDD, 0xDD, 0x00, 0xED, 0xFF, 0xDD, 0xDD, 0xDC, 0x5D, 0xFF
	.byte 0xBB, 0xCC, 0xDC, 0x00, 0xCD, 0xCC, 0xDC, 0x0D, 0xCC, 0xCC, 0xDD, 0x0D, 0xCC, 0xDD, 0xFD, 0x0D
	.byte 0xDD, 0xDD, 0xFD, 0x00, 0xDD, 0xDD, 0xEF, 0x00, 0xDD, 0xFF, 0xDE, 0x00, 0xFF, 0xD5, 0xCD, 0xDD
	.byte 0xC0, 0xFD, 0xE3, 0xEE, 0xDD, 0xFF, 0x53, 0xEE, 0x00, 0xDF, 0x6F, 0x55, 0x00, 0xDF, 0x5F, 0xEE
	.byte 0x00, 0xF0, 0x4F, 0x44, 0x00, 0x00, 0xF0, 0xFF, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00
	.byte 0xEE, 0x5E, 0xDF, 0x0C, 0xEE, 0x65, 0xF6, 0xDD, 0x55, 0x56, 0x06, 0x00, 0xEE, 0x65, 0x04, 0x00
	.byte 0x32, 0xF4, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xDD, 0x0F, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0xD0, 0xDD, 0x00, 0xD0, 0xDD, 0xCD, 0x00, 0xCD, 0xBC, 0xDB, 0x00, 0xDD, 0xBB, 0xBB
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0xDD, 0x0D, 0x00, 0x00, 0xCC, 0xDC, 0x00, 0x00, 0xCC, 0xBC, 0x0D, 0x00, 0xDD, 0xBB, 0xDB, 0x00
	.byte 0x00, 0xCC, 0xBD, 0xBB, 0x00, 0x14, 0xD1, 0xCB, 0x00, 0x14, 0x11, 0xCD, 0x00, 0x14, 0xF1, 0xD2
	.byte 0x00, 0x24, 0xF2, 0x32, 0x00, 0x40, 0x33, 0x33, 0x00, 0x00, 0x44, 0x33, 0x00, 0x00, 0x40, 0x64
	.byte 0xCC, 0xBD, 0xDC, 0x00, 0xCC, 0xDC, 0xDD, 0x00, 0xCC, 0xDD, 0xDD, 0x00, 0xDD, 0xDD, 0xDD, 0x00
	.byte 0x1D, 0xD3, 0x0F, 0x00, 0x23, 0x43, 0x0E, 0x00, 0x33, 0xEF, 0xDD, 0x00, 0x66, 0xD0, 0xCD, 0x0D
	.byte 0x00, 0x00, 0xBB, 0x56, 0x00, 0x00, 0xEB, 0xE5, 0x00, 0x00, 0x60, 0xF6, 0x00, 0x00, 0xFF, 0xF6
	.byte 0x00, 0xF0, 0xFD, 0x42, 0x00, 0xF0, 0xDD, 0x3F, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xF0, 0x0F
	.byte 0xEE, 0x06, 0xDD, 0xDC, 0xDD, 0xF6, 0xDF, 0xFD, 0xCC, 0x6F, 0xFF, 0x0F, 0xDD, 0x6F, 0x0F, 0x00
	.byte 0xFF, 0xF4, 0xFF, 0x00, 0xF4, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0xD0, 0xDD, 0x00, 0xD0, 0xDD, 0xCD, 0x00, 0xCD, 0xBC, 0xDB, 0x00, 0xDD, 0xBB, 0xBB
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0xDD, 0x0D, 0x00, 0x00, 0xCC, 0xDC, 0x00, 0x00, 0xCC, 0xBC, 0x0D, 0x00, 0xDD, 0xBB, 0xDB, 0x00
	.byte 0x00, 0xCC, 0xBD, 0xBB, 0x00, 0x14, 0xD1, 0xCB, 0x00, 0x14, 0x11, 0xCD, 0x00, 0x14, 0xF1, 0xD2
	.byte 0x00, 0x24, 0xF2, 0x32, 0x00, 0x40, 0x33, 0x33, 0x00, 0x00, 0x44, 0x33, 0x00, 0x00, 0x40, 0x64
	.byte 0xCC, 0xBD, 0xDC, 0x00, 0xCC, 0xDC, 0xDD, 0x00, 0xCC, 0xDD, 0xDD, 0x00, 0xDD, 0xDD, 0xDD, 0x00
	.byte 0x1D, 0xD3, 0x0F, 0x00, 0x23, 0x43, 0x0E, 0x00, 0x33, 0xEF, 0xDD, 0x00, 0x66, 0xD0, 0xCD, 0x0D
	.byte 0x00, 0x00, 0xBB, 0xE6, 0x00, 0x00, 0xEB, 0xDD, 0x00, 0x00, 0xF0, 0xCC, 0x00, 0x00, 0xFF, 0xDD
	.byte 0x00, 0xF0, 0xFF, 0xFF, 0x00, 0xF0, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00
	.byte 0x5E, 0x06, 0xDD, 0xDC, 0x5E, 0xF6, 0xDF, 0xFD, 0x6F, 0x65, 0xFF, 0x0F, 0xEF, 0x65, 0x0F, 0x00
	.byte 0xEE, 0xF3, 0xFF, 0x00, 0x34, 0xFF, 0xFD, 0x00, 0xF0, 0xDF, 0xFD, 0x00, 0x00, 0xFF, 0x0F, 0x00
	.globl gObjectEventFrame_JP_0849918C
gObjectEventFrame_JP_0849918C: @ 0x0849918C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 42; size=0x100
	.incbin "build/graphics/object_events/pics/people/swimmer_m.4bpp", 0x0, 0x100 @ gObjectEventPic_SwimmerM frame slice
	.globl gObjectEventFrame_JP_0849928C
gObjectEventFrame_JP_0849928C: @ 0x0849928C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 42; size=0x100
	.incbin "build/graphics/object_events/pics/people/swimmer_m.4bpp", 0x100, 0x100 @ gObjectEventPic_SwimmerM frame slice
	.globl gObjectEventFrame_JP_0849938C
gObjectEventFrame_JP_0849938C: @ 0x0849938C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 42; size=0x100
	.incbin "build/graphics/object_events/pics/people/swimmer_m.4bpp", 0x200, 0x100 @ gObjectEventPic_SwimmerM frame slice
	.globl gObjectEventFrame_JP_0849948C
gObjectEventFrame_JP_0849948C: @ 0x0849948C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 42; size=0x100
	.incbin "build/graphics/object_events/pics/people/swimmer_m.4bpp", 0x300, 0x100 @ gObjectEventPic_SwimmerM frame slice
	.globl gObjectEventFrame_JP_0849958C
gObjectEventFrame_JP_0849958C: @ 0x0849958C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 42; size=0x100
	.incbin "build/graphics/object_events/pics/people/swimmer_m.4bpp", 0x400, 0x100 @ gObjectEventPic_SwimmerM frame slice
	.globl gObjectEventFrame_JP_0849968C
gObjectEventFrame_JP_0849968C: @ 0x0849968C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 42; size=0x100
	.incbin "build/graphics/object_events/pics/people/swimmer_m.4bpp", 0x500, 0x100 @ gObjectEventPic_SwimmerM frame slice
	.globl gObjectEventFrame_JP_0849978C
gObjectEventFrame_JP_0849978C: @ 0x0849978C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 42; size=0x100
	.incbin "build/graphics/object_events/pics/people/swimmer_m.4bpp", 0x600, 0x100 @ gObjectEventPic_SwimmerM frame slice
	.globl gObjectEventFrame_JP_0849988C
gObjectEventFrame_JP_0849988C: @ 0x0849988C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 42; size=0x100
	.incbin "build/graphics/object_events/pics/people/swimmer_m.4bpp", 0x700, 0x100 @ gObjectEventPic_SwimmerM frame slice
	.globl gObjectEventFrame_JP_0849998C
gObjectEventFrame_JP_0849998C: @ 0x0849998C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 42; size=0x100
	.incbin "build/graphics/object_events/pics/people/swimmer_m.4bpp", 0x800, 0x100 @ gObjectEventPic_SwimmerM frame slice
	.globl gObjectEventFrame_JP_08499A8C
gObjectEventFrame_JP_08499A8C: @ 0x08499A8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 43; size=0x100
	.incbin "build/graphics/object_events/pics/people/swimmer_f.4bpp", 0x0, 0x100 @ gObjectEventPic_SwimmerF frame slice
	.globl gObjectEventFrame_JP_08499B8C
gObjectEventFrame_JP_08499B8C: @ 0x08499B8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 43; size=0x100
	.incbin "build/graphics/object_events/pics/people/swimmer_f.4bpp", 0x100, 0x100 @ gObjectEventPic_SwimmerF frame slice
	.globl gObjectEventFrame_JP_08499C8C
gObjectEventFrame_JP_08499C8C: @ 0x08499C8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 43; size=0x100
	.incbin "build/graphics/object_events/pics/people/swimmer_f.4bpp", 0x200, 0x100 @ gObjectEventPic_SwimmerF frame slice
	.globl gObjectEventFrame_JP_08499D8C
gObjectEventFrame_JP_08499D8C: @ 0x08499D8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 43; size=0x100
	.incbin "build/graphics/object_events/pics/people/swimmer_f.4bpp", 0x300, 0x100 @ gObjectEventPic_SwimmerF frame slice
	.globl gObjectEventFrame_JP_08499E8C
gObjectEventFrame_JP_08499E8C: @ 0x08499E8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 43; size=0x100
	.incbin "build/graphics/object_events/pics/people/swimmer_f.4bpp", 0x400, 0x100 @ gObjectEventPic_SwimmerF frame slice
	.globl gObjectEventFrame_JP_08499F8C
gObjectEventFrame_JP_08499F8C: @ 0x08499F8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 43; size=0x100
	.incbin "build/graphics/object_events/pics/people/swimmer_f.4bpp", 0x500, 0x100 @ gObjectEventPic_SwimmerF frame slice
	.globl gObjectEventFrame_JP_0849A08C
gObjectEventFrame_JP_0849A08C: @ 0x0849A08C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 43; size=0x100
	.incbin "build/graphics/object_events/pics/people/swimmer_f.4bpp", 0x600, 0x100 @ gObjectEventPic_SwimmerF frame slice
	.globl gObjectEventFrame_JP_0849A18C
gObjectEventFrame_JP_0849A18C: @ 0x0849A18C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 43; size=0x100
	.incbin "build/graphics/object_events/pics/people/swimmer_f.4bpp", 0x700, 0x100 @ gObjectEventPic_SwimmerF frame slice
	.globl gObjectEventFrame_JP_0849A28C
gObjectEventFrame_JP_0849A28C: @ 0x0849A28C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 43; size=0x100
	.incbin "build/graphics/object_events/pics/people/swimmer_f.4bpp", 0x800, 0x100 @ gObjectEventPic_SwimmerF frame slice
	.globl gObjectEventFrame_JP_0849A38C
gObjectEventFrame_JP_0849A38C: @ 0x0849A38C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 44; size=0x100
	.incbin "build/graphics/object_events/pics/people/black_belt.4bpp", 0x0, 0x100 @ gObjectEventPic_BlackBelt frame slice
	.globl gObjectEventFrame_JP_0849A48C
gObjectEventFrame_JP_0849A48C: @ 0x0849A48C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 44; size=0x100
	.incbin "build/graphics/object_events/pics/people/black_belt.4bpp", 0x100, 0x100 @ gObjectEventPic_BlackBelt frame slice
	.globl gObjectEventFrame_JP_0849A58C
gObjectEventFrame_JP_0849A58C: @ 0x0849A58C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 44; size=0x100
	.incbin "build/graphics/object_events/pics/people/black_belt.4bpp", 0x200, 0x100 @ gObjectEventPic_BlackBelt frame slice
	.globl gObjectEventFrame_JP_0849A68C
gObjectEventFrame_JP_0849A68C: @ 0x0849A68C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 44; size=0x100
	.incbin "build/graphics/object_events/pics/people/black_belt.4bpp", 0x300, 0x100 @ gObjectEventPic_BlackBelt frame slice
	.globl gObjectEventFrame_JP_0849A78C
gObjectEventFrame_JP_0849A78C: @ 0x0849A78C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 44; size=0x100
	.incbin "build/graphics/object_events/pics/people/black_belt.4bpp", 0x400, 0x100 @ gObjectEventPic_BlackBelt frame slice
	.globl gObjectEventFrame_JP_0849A88C
gObjectEventFrame_JP_0849A88C: @ 0x0849A88C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 44; size=0x100
	.incbin "build/graphics/object_events/pics/people/black_belt.4bpp", 0x500, 0x100 @ gObjectEventPic_BlackBelt frame slice
	.globl gObjectEventFrame_JP_0849A98C
gObjectEventFrame_JP_0849A98C: @ 0x0849A98C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 44; size=0x100
	.incbin "build/graphics/object_events/pics/people/black_belt.4bpp", 0x600, 0x100 @ gObjectEventPic_BlackBelt frame slice
	.globl gObjectEventFrame_JP_0849AA8C
gObjectEventFrame_JP_0849AA8C: @ 0x0849AA8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 44; size=0x100
	.incbin "build/graphics/object_events/pics/people/black_belt.4bpp", 0x700, 0x100 @ gObjectEventPic_BlackBelt frame slice
	.globl gObjectEventFrame_JP_0849AB8C
gObjectEventFrame_JP_0849AB8C: @ 0x0849AB8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 44; size=0x100
	.incbin "build/graphics/object_events/pics/people/black_belt.4bpp", 0x800, 0x100 @ gObjectEventPic_BlackBelt frame slice
	.globl gObjectEventFrame_JP_0849AC8C
gObjectEventFrame_JP_0849AC8C: @ 0x0849AC8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 45; size=0x100
	.incbin "build/graphics/object_events/pics/people/beauty.4bpp", 0x0, 0x100 @ gObjectEventPic_Beauty frame slice
	.globl gObjectEventFrame_JP_0849AD8C
gObjectEventFrame_JP_0849AD8C: @ 0x0849AD8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 45; size=0x100
	.incbin "build/graphics/object_events/pics/people/beauty.4bpp", 0x100, 0x100 @ gObjectEventPic_Beauty frame slice
	.globl gObjectEventFrame_JP_0849AE8C
gObjectEventFrame_JP_0849AE8C: @ 0x0849AE8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 45; size=0x100
	.incbin "build/graphics/object_events/pics/people/beauty.4bpp", 0x200, 0x100 @ gObjectEventPic_Beauty frame slice
	.globl gObjectEventFrame_JP_0849AF8C
gObjectEventFrame_JP_0849AF8C: @ 0x0849AF8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 45; size=0x100
	.incbin "build/graphics/object_events/pics/people/beauty.4bpp", 0x300, 0x100 @ gObjectEventPic_Beauty frame slice
	.globl gObjectEventFrame_JP_0849B08C
gObjectEventFrame_JP_0849B08C: @ 0x0849B08C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 45; size=0x100
	.incbin "build/graphics/object_events/pics/people/beauty.4bpp", 0x400, 0x100 @ gObjectEventPic_Beauty frame slice
	.globl gObjectEventFrame_JP_0849B18C
gObjectEventFrame_JP_0849B18C: @ 0x0849B18C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 45; size=0x100
	.incbin "build/graphics/object_events/pics/people/beauty.4bpp", 0x500, 0x100 @ gObjectEventPic_Beauty frame slice
	.globl gObjectEventFrame_JP_0849B28C
gObjectEventFrame_JP_0849B28C: @ 0x0849B28C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 45; size=0x100
	.incbin "build/graphics/object_events/pics/people/beauty.4bpp", 0x600, 0x100 @ gObjectEventPic_Beauty frame slice
	.globl gObjectEventFrame_JP_0849B38C
gObjectEventFrame_JP_0849B38C: @ 0x0849B38C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 45; size=0x100
	.incbin "build/graphics/object_events/pics/people/beauty.4bpp", 0x700, 0x100 @ gObjectEventPic_Beauty frame slice
	.globl gObjectEventFrame_JP_0849B48C
gObjectEventFrame_JP_0849B48C: @ 0x0849B48C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 45; size=0x100
	.incbin "build/graphics/object_events/pics/people/beauty.4bpp", 0x800, 0x100 @ gObjectEventPic_Beauty frame slice
	.globl gObjectEventFrame_JP_0849B58C
gObjectEventFrame_JP_0849B58C: @ 0x0849B58C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 46; size=0x100
	.incbin "build/graphics/object_events/pics/people/scientist_1.4bpp", 0x0, 0x100 @ gObjectEventPic_Scientist1 frame slice
	.globl gObjectEventFrame_JP_0849B68C
gObjectEventFrame_JP_0849B68C: @ 0x0849B68C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 46; size=0x100
	.incbin "build/graphics/object_events/pics/people/scientist_1.4bpp", 0x100, 0x100 @ gObjectEventPic_Scientist1 frame slice
	.globl gObjectEventFrame_JP_0849B78C
gObjectEventFrame_JP_0849B78C: @ 0x0849B78C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 46; size=0x100
	.incbin "build/graphics/object_events/pics/people/scientist_1.4bpp", 0x200, 0x100 @ gObjectEventPic_Scientist1 frame slice
	.globl gObjectEventFrame_JP_0849B88C
gObjectEventFrame_JP_0849B88C: @ 0x0849B88C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 46; size=0x100
	.incbin "build/graphics/object_events/pics/people/scientist_1.4bpp", 0x300, 0x100 @ gObjectEventPic_Scientist1 frame slice
	.globl gObjectEventFrame_JP_0849B98C
gObjectEventFrame_JP_0849B98C: @ 0x0849B98C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 46; size=0x100
	.incbin "build/graphics/object_events/pics/people/scientist_1.4bpp", 0x400, 0x100 @ gObjectEventPic_Scientist1 frame slice
	.globl gObjectEventFrame_JP_0849BA8C
gObjectEventFrame_JP_0849BA8C: @ 0x0849BA8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 46; size=0x100
	.incbin "build/graphics/object_events/pics/people/scientist_1.4bpp", 0x500, 0x100 @ gObjectEventPic_Scientist1 frame slice
	.globl gObjectEventFrame_JP_0849BB8C
gObjectEventFrame_JP_0849BB8C: @ 0x0849BB8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 46; size=0x100
	.incbin "build/graphics/object_events/pics/people/scientist_1.4bpp", 0x600, 0x100 @ gObjectEventPic_Scientist1 frame slice
	.globl gObjectEventFrame_JP_0849BC8C
gObjectEventFrame_JP_0849BC8C: @ 0x0849BC8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 46; size=0x100
	.incbin "build/graphics/object_events/pics/people/scientist_1.4bpp", 0x700, 0x100 @ gObjectEventPic_Scientist1 frame slice
	.globl gObjectEventFrame_JP_0849BD8C
gObjectEventFrame_JP_0849BD8C: @ 0x0849BD8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 46; size=0x100
	.incbin "build/graphics/object_events/pics/people/scientist_1.4bpp", 0x800, 0x100 @ gObjectEventPic_Scientist1 frame slice
	.globl gObjectEventFrame_JP_0849BE8C
gObjectEventFrame_JP_0849BE8C: @ 0x0849BE8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 47; size=0x100
	.incbin "build/graphics/object_events/pics/people/lass.4bpp", 0x0, 0x100 @ gObjectEventPic_Lass frame slice
	.globl gObjectEventFrame_JP_0849BF8C
gObjectEventFrame_JP_0849BF8C: @ 0x0849BF8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 47; size=0x100
	.incbin "build/graphics/object_events/pics/people/lass.4bpp", 0x100, 0x100 @ gObjectEventPic_Lass frame slice
	.globl gObjectEventFrame_JP_0849C08C
gObjectEventFrame_JP_0849C08C: @ 0x0849C08C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 47; size=0x100
	.incbin "build/graphics/object_events/pics/people/lass.4bpp", 0x200, 0x100 @ gObjectEventPic_Lass frame slice
	.globl gObjectEventFrame_JP_0849C18C
gObjectEventFrame_JP_0849C18C: @ 0x0849C18C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 47; size=0x100
	.incbin "build/graphics/object_events/pics/people/lass.4bpp", 0x300, 0x100 @ gObjectEventPic_Lass frame slice
	.globl gObjectEventFrame_JP_0849C28C
gObjectEventFrame_JP_0849C28C: @ 0x0849C28C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 47; size=0x100
	.incbin "build/graphics/object_events/pics/people/lass.4bpp", 0x400, 0x100 @ gObjectEventPic_Lass frame slice
	.globl gObjectEventFrame_JP_0849C38C
gObjectEventFrame_JP_0849C38C: @ 0x0849C38C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 47; size=0x100
	.incbin "build/graphics/object_events/pics/people/lass.4bpp", 0x500, 0x100 @ gObjectEventPic_Lass frame slice
	.globl gObjectEventFrame_JP_0849C48C
gObjectEventFrame_JP_0849C48C: @ 0x0849C48C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 47; size=0x100
	.incbin "build/graphics/object_events/pics/people/lass.4bpp", 0x600, 0x100 @ gObjectEventPic_Lass frame slice
	.globl gObjectEventFrame_JP_0849C58C
gObjectEventFrame_JP_0849C58C: @ 0x0849C58C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 47; size=0x100
	.incbin "build/graphics/object_events/pics/people/lass.4bpp", 0x700, 0x100 @ gObjectEventPic_Lass frame slice
	.globl gObjectEventFrame_JP_0849C68C
gObjectEventFrame_JP_0849C68C: @ 0x0849C68C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 47; size=0x100
	.incbin "build/graphics/object_events/pics/people/lass.4bpp", 0x800, 0x100 @ gObjectEventPic_Lass frame slice
	.globl gObjectEventFrame_JP_0849C78C
gObjectEventFrame_JP_0849C78C: @ 0x0849C78C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 48; size=0x100
	.incbin "build/graphics/object_events/pics/people/gentleman.4bpp", 0x0, 0x100 @ gObjectEventPic_Gentleman frame slice
	.globl gObjectEventFrame_JP_0849C88C
gObjectEventFrame_JP_0849C88C: @ 0x0849C88C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 48; size=0x100
	.incbin "build/graphics/object_events/pics/people/gentleman.4bpp", 0x100, 0x100 @ gObjectEventPic_Gentleman frame slice
	.globl gObjectEventFrame_JP_0849C98C
gObjectEventFrame_JP_0849C98C: @ 0x0849C98C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 48; size=0x100
	.incbin "build/graphics/object_events/pics/people/gentleman.4bpp", 0x200, 0x100 @ gObjectEventPic_Gentleman frame slice
	.globl gObjectEventFrame_JP_0849CA8C
gObjectEventFrame_JP_0849CA8C: @ 0x0849CA8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 48; size=0x100
	.incbin "build/graphics/object_events/pics/people/gentleman.4bpp", 0x300, 0x100 @ gObjectEventPic_Gentleman frame slice
	.globl gObjectEventFrame_JP_0849CB8C
gObjectEventFrame_JP_0849CB8C: @ 0x0849CB8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 48; size=0x100
	.incbin "build/graphics/object_events/pics/people/gentleman.4bpp", 0x400, 0x100 @ gObjectEventPic_Gentleman frame slice
	.globl gObjectEventFrame_JP_0849CC8C
gObjectEventFrame_JP_0849CC8C: @ 0x0849CC8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 48; size=0x100
	.incbin "build/graphics/object_events/pics/people/gentleman.4bpp", 0x500, 0x100 @ gObjectEventPic_Gentleman frame slice
	.globl gObjectEventFrame_JP_0849CD8C
gObjectEventFrame_JP_0849CD8C: @ 0x0849CD8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 48; size=0x100
	.incbin "build/graphics/object_events/pics/people/gentleman.4bpp", 0x600, 0x100 @ gObjectEventPic_Gentleman frame slice
	.globl gObjectEventFrame_JP_0849CE8C
gObjectEventFrame_JP_0849CE8C: @ 0x0849CE8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 48; size=0x100
	.incbin "build/graphics/object_events/pics/people/gentleman.4bpp", 0x700, 0x100 @ gObjectEventPic_Gentleman frame slice
	.globl gObjectEventFrame_JP_0849CF8C
gObjectEventFrame_JP_0849CF8C: @ 0x0849CF8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 48; size=0x100
	.incbin "build/graphics/object_events/pics/people/gentleman.4bpp", 0x800, 0x100 @ gObjectEventPic_Gentleman frame slice
	.globl gObjectEventFrame_JP_0849D08C
gObjectEventFrame_JP_0849D08C: @ 0x0849D08C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 49; size=0x100
	.incbin "build/graphics/object_events/pics/people/sailor.4bpp", 0x0, 0x100 @ gObjectEventPic_Sailor frame slice
	.globl gObjectEventFrame_JP_0849D18C
gObjectEventFrame_JP_0849D18C: @ 0x0849D18C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 49; size=0x100
	.incbin "build/graphics/object_events/pics/people/sailor.4bpp", 0x100, 0x100 @ gObjectEventPic_Sailor frame slice
	.globl gObjectEventFrame_JP_0849D28C
gObjectEventFrame_JP_0849D28C: @ 0x0849D28C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 49; size=0x100
	.incbin "build/graphics/object_events/pics/people/sailor.4bpp", 0x200, 0x100 @ gObjectEventPic_Sailor frame slice
	.globl gObjectEventFrame_JP_0849D38C
gObjectEventFrame_JP_0849D38C: @ 0x0849D38C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 49; size=0x100
	.incbin "build/graphics/object_events/pics/people/sailor.4bpp", 0x300, 0x100 @ gObjectEventPic_Sailor frame slice
	.globl gObjectEventFrame_JP_0849D48C
gObjectEventFrame_JP_0849D48C: @ 0x0849D48C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 49; size=0x100
	.incbin "build/graphics/object_events/pics/people/sailor.4bpp", 0x400, 0x100 @ gObjectEventPic_Sailor frame slice
	.globl gObjectEventFrame_JP_0849D58C
gObjectEventFrame_JP_0849D58C: @ 0x0849D58C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 49; size=0x100
	.incbin "build/graphics/object_events/pics/people/sailor.4bpp", 0x500, 0x100 @ gObjectEventPic_Sailor frame slice
	.globl gObjectEventFrame_JP_0849D68C
gObjectEventFrame_JP_0849D68C: @ 0x0849D68C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 49; size=0x100
	.incbin "build/graphics/object_events/pics/people/sailor.4bpp", 0x600, 0x100 @ gObjectEventPic_Sailor frame slice
	.globl gObjectEventFrame_JP_0849D78C
gObjectEventFrame_JP_0849D78C: @ 0x0849D78C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 49; size=0x100
	.incbin "build/graphics/object_events/pics/people/sailor.4bpp", 0x700, 0x100 @ gObjectEventPic_Sailor frame slice
	.globl gObjectEventFrame_JP_0849D88C
gObjectEventFrame_JP_0849D88C: @ 0x0849D88C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 49; size=0x100
	.incbin "build/graphics/object_events/pics/people/sailor.4bpp", 0x800, 0x100 @ gObjectEventPic_Sailor frame slice
	.globl gObjectEventFrame_JP_0849D98C
gObjectEventFrame_JP_0849D98C: @ 0x0849D98C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 50; size=0x100
	.incbin "build/graphics/object_events/pics/people/fisherman.4bpp", 0x0, 0x100 @ gObjectEventPic_Fisherman frame slice
	.globl gObjectEventFrame_JP_0849DA8C
gObjectEventFrame_JP_0849DA8C: @ 0x0849DA8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 50; size=0x100
	.incbin "build/graphics/object_events/pics/people/fisherman.4bpp", 0x100, 0x100 @ gObjectEventPic_Fisherman frame slice
	.globl gObjectEventFrame_JP_0849DB8C
gObjectEventFrame_JP_0849DB8C: @ 0x0849DB8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 50; size=0x100
	.incbin "build/graphics/object_events/pics/people/fisherman.4bpp", 0x200, 0x100 @ gObjectEventPic_Fisherman frame slice
	.globl gObjectEventFrame_JP_0849DC8C
gObjectEventFrame_JP_0849DC8C: @ 0x0849DC8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 50; size=0x100
	.incbin "build/graphics/object_events/pics/people/fisherman.4bpp", 0x300, 0x100 @ gObjectEventPic_Fisherman frame slice
	.globl gObjectEventFrame_JP_0849DD8C
gObjectEventFrame_JP_0849DD8C: @ 0x0849DD8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 50; size=0x100
	.incbin "build/graphics/object_events/pics/people/fisherman.4bpp", 0x400, 0x100 @ gObjectEventPic_Fisherman frame slice
	.globl gObjectEventFrame_JP_0849DE8C
gObjectEventFrame_JP_0849DE8C: @ 0x0849DE8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 50; size=0x100
	.incbin "build/graphics/object_events/pics/people/fisherman.4bpp", 0x500, 0x100 @ gObjectEventPic_Fisherman frame slice
	.globl gObjectEventFrame_JP_0849DF8C
gObjectEventFrame_JP_0849DF8C: @ 0x0849DF8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 50; size=0x100
	.incbin "build/graphics/object_events/pics/people/fisherman.4bpp", 0x600, 0x100 @ gObjectEventPic_Fisherman frame slice
	.globl gObjectEventFrame_JP_0849E08C
gObjectEventFrame_JP_0849E08C: @ 0x0849E08C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 50; size=0x100
	.incbin "build/graphics/object_events/pics/people/fisherman.4bpp", 0x700, 0x100 @ gObjectEventPic_Fisherman frame slice
	.globl gObjectEventFrame_JP_0849E18C
gObjectEventFrame_JP_0849E18C: @ 0x0849E18C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 50; size=0x100
	.incbin "build/graphics/object_events/pics/people/fisherman.4bpp", 0x800, 0x100 @ gObjectEventPic_Fisherman frame slice
	.globl gObjectEventFrame_JP_0849E28C
gObjectEventFrame_JP_0849E28C: @ 0x0849E28C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 51; size=0x100
	.incbin "build/graphics/object_events/pics/people/running_triathlete_m.4bpp", 0x0, 0x100 @ gObjectEventPic_RunningTriathleteM frame slice
	.globl gObjectEventFrame_JP_0849E38C
gObjectEventFrame_JP_0849E38C: @ 0x0849E38C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 51; size=0x100
	.incbin "build/graphics/object_events/pics/people/running_triathlete_m.4bpp", 0x100, 0x100 @ gObjectEventPic_RunningTriathleteM frame slice
	.globl gObjectEventFrame_JP_0849E48C
gObjectEventFrame_JP_0849E48C: @ 0x0849E48C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 51; size=0x100
	.incbin "build/graphics/object_events/pics/people/running_triathlete_m.4bpp", 0x200, 0x100 @ gObjectEventPic_RunningTriathleteM frame slice
	.globl gObjectEventFrame_JP_0849E58C
gObjectEventFrame_JP_0849E58C: @ 0x0849E58C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 51; size=0x100
	.incbin "build/graphics/object_events/pics/people/running_triathlete_m.4bpp", 0x300, 0x100 @ gObjectEventPic_RunningTriathleteM frame slice
	.globl gObjectEventFrame_JP_0849E68C
gObjectEventFrame_JP_0849E68C: @ 0x0849E68C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 51; size=0x100
	.incbin "build/graphics/object_events/pics/people/running_triathlete_m.4bpp", 0x400, 0x100 @ gObjectEventPic_RunningTriathleteM frame slice
	.globl gObjectEventFrame_JP_0849E78C
gObjectEventFrame_JP_0849E78C: @ 0x0849E78C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 51; size=0x100
	.incbin "build/graphics/object_events/pics/people/running_triathlete_m.4bpp", 0x500, 0x100 @ gObjectEventPic_RunningTriathleteM frame slice
	.globl gObjectEventFrame_JP_0849E88C
gObjectEventFrame_JP_0849E88C: @ 0x0849E88C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 51; size=0x100
	.incbin "build/graphics/object_events/pics/people/running_triathlete_m.4bpp", 0x600, 0x100 @ gObjectEventPic_RunningTriathleteM frame slice
	.globl gObjectEventFrame_JP_0849E98C
gObjectEventFrame_JP_0849E98C: @ 0x0849E98C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 51; size=0x100
	.incbin "build/graphics/object_events/pics/people/running_triathlete_m.4bpp", 0x700, 0x100 @ gObjectEventPic_RunningTriathleteM frame slice
	.globl gObjectEventFrame_JP_0849EA8C
gObjectEventFrame_JP_0849EA8C: @ 0x0849EA8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 51; size=0x100
	.incbin "build/graphics/object_events/pics/people/running_triathlete_m.4bpp", 0x800, 0x100 @ gObjectEventPic_RunningTriathleteM frame slice
	.globl gObjectEventFrame_JP_0849EB8C
gObjectEventFrame_JP_0849EB8C: @ 0x0849EB8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 52; size=0x100
	.incbin "build/graphics/object_events/pics/people/running_triathlete_f.4bpp", 0x0, 0x100 @ gObjectEventPic_RunningTriathleteF frame slice
	.globl gObjectEventFrame_JP_0849EC8C
gObjectEventFrame_JP_0849EC8C: @ 0x0849EC8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 52; size=0x100
	.incbin "build/graphics/object_events/pics/people/running_triathlete_f.4bpp", 0x100, 0x100 @ gObjectEventPic_RunningTriathleteF frame slice
	.globl gObjectEventFrame_JP_0849ED8C
gObjectEventFrame_JP_0849ED8C: @ 0x0849ED8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 52; size=0x100
	.incbin "build/graphics/object_events/pics/people/running_triathlete_f.4bpp", 0x200, 0x100 @ gObjectEventPic_RunningTriathleteF frame slice
	.globl gObjectEventFrame_JP_0849EE8C
gObjectEventFrame_JP_0849EE8C: @ 0x0849EE8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 52; size=0x100
	.incbin "build/graphics/object_events/pics/people/running_triathlete_f.4bpp", 0x300, 0x100 @ gObjectEventPic_RunningTriathleteF frame slice
	.globl gObjectEventFrame_JP_0849EF8C
gObjectEventFrame_JP_0849EF8C: @ 0x0849EF8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 52; size=0x100
	.incbin "build/graphics/object_events/pics/people/running_triathlete_f.4bpp", 0x400, 0x100 @ gObjectEventPic_RunningTriathleteF frame slice
	.globl gObjectEventFrame_JP_0849F08C
gObjectEventFrame_JP_0849F08C: @ 0x0849F08C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 52; size=0x100
	.incbin "build/graphics/object_events/pics/people/running_triathlete_f.4bpp", 0x500, 0x100 @ gObjectEventPic_RunningTriathleteF frame slice
	.globl gObjectEventFrame_JP_0849F18C
gObjectEventFrame_JP_0849F18C: @ 0x0849F18C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 52; size=0x100
	.incbin "build/graphics/object_events/pics/people/running_triathlete_f.4bpp", 0x600, 0x100 @ gObjectEventPic_RunningTriathleteF frame slice
	.globl gObjectEventFrame_JP_0849F28C
gObjectEventFrame_JP_0849F28C: @ 0x0849F28C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 52; size=0x100
	.incbin "build/graphics/object_events/pics/people/running_triathlete_f.4bpp", 0x700, 0x100 @ gObjectEventPic_RunningTriathleteF frame slice
	.globl gObjectEventFrame_JP_0849F38C
gObjectEventFrame_JP_0849F38C: @ 0x0849F38C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 52; size=0x100
	.incbin "build/graphics/object_events/pics/people/running_triathlete_f.4bpp", 0x800, 0x100 @ gObjectEventPic_RunningTriathleteF frame slice
	.globl gObjectEventFrame_JP_0849F48C
gObjectEventFrame_JP_0849F48C: @ 0x0849F48C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 53; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_f.4bpp", 0x0, 0x80 @ gObjectEventPic_TuberF frame slice
	.globl gObjectEventFrame_JP_0849F50C
gObjectEventFrame_JP_0849F50C: @ 0x0849F50C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 53; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_f.4bpp", 0x80, 0x80 @ gObjectEventPic_TuberF frame slice
	.globl gObjectEventFrame_JP_0849F58C
gObjectEventFrame_JP_0849F58C: @ 0x0849F58C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 53; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_f.4bpp", 0x100, 0x80 @ gObjectEventPic_TuberF frame slice
	.globl gObjectEventFrame_JP_0849F60C
gObjectEventFrame_JP_0849F60C: @ 0x0849F60C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 53; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_f.4bpp", 0x180, 0x80 @ gObjectEventPic_TuberF frame slice
	.globl gObjectEventFrame_JP_0849F68C
gObjectEventFrame_JP_0849F68C: @ 0x0849F68C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 53; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_f.4bpp", 0x200, 0x80 @ gObjectEventPic_TuberF frame slice
	.globl gObjectEventFrame_JP_0849F70C
gObjectEventFrame_JP_0849F70C: @ 0x0849F70C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 53; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_f.4bpp", 0x280, 0x80 @ gObjectEventPic_TuberF frame slice
	.globl gObjectEventFrame_JP_0849F78C
gObjectEventFrame_JP_0849F78C: @ 0x0849F78C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 53; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_f.4bpp", 0x300, 0x80 @ gObjectEventPic_TuberF frame slice
	.globl gObjectEventFrame_JP_0849F80C
gObjectEventFrame_JP_0849F80C: @ 0x0849F80C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 53; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_f.4bpp", 0x380, 0x80 @ gObjectEventPic_TuberF frame slice
	.globl gObjectEventFrame_JP_0849F88C
gObjectEventFrame_JP_0849F88C: @ 0x0849F88C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 53; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_f.4bpp", 0x400, 0x80 @ gObjectEventPic_TuberF frame slice
	.globl gObjectEventFrame_JP_0849F90C
gObjectEventFrame_JP_0849F90C: @ 0x0849F90C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 54; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_m.4bpp", 0x0, 0x80 @ gObjectEventPic_TuberM frame slice
	.globl gObjectEventFrame_JP_0849F98C
gObjectEventFrame_JP_0849F98C: @ 0x0849F98C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 54; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_m.4bpp", 0x80, 0x80 @ gObjectEventPic_TuberM frame slice
	.globl gObjectEventFrame_JP_0849FA0C
gObjectEventFrame_JP_0849FA0C: @ 0x0849FA0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 54; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_m.4bpp", 0x100, 0x80 @ gObjectEventPic_TuberM frame slice
	.globl gObjectEventFrame_JP_0849FA8C
gObjectEventFrame_JP_0849FA8C: @ 0x0849FA8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 54; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_m.4bpp", 0x180, 0x80 @ gObjectEventPic_TuberM frame slice
	.globl gObjectEventFrame_JP_0849FB0C
gObjectEventFrame_JP_0849FB0C: @ 0x0849FB0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 54; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_m.4bpp", 0x200, 0x80 @ gObjectEventPic_TuberM frame slice
	.globl gObjectEventFrame_JP_0849FB8C
gObjectEventFrame_JP_0849FB8C: @ 0x0849FB8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 54; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_m.4bpp", 0x280, 0x80 @ gObjectEventPic_TuberM frame slice
	.globl gObjectEventFrame_JP_0849FC0C
gObjectEventFrame_JP_0849FC0C: @ 0x0849FC0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 54; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_m.4bpp", 0x300, 0x80 @ gObjectEventPic_TuberM frame slice
	.globl gObjectEventFrame_JP_0849FC8C
gObjectEventFrame_JP_0849FC8C: @ 0x0849FC8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 54; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_m.4bpp", 0x380, 0x80 @ gObjectEventPic_TuberM frame slice
	.globl gObjectEventFrame_JP_0849FD0C
gObjectEventFrame_JP_0849FD0C: @ 0x0849FD0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 54; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_m.4bpp", 0x400, 0x80 @ gObjectEventPic_TuberM frame slice
	.globl gObjectEventFrame_JP_0849FD8C
gObjectEventFrame_JP_0849FD8C: @ 0x0849FD8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 55; size=0x100
	.incbin "build/graphics/object_events/pics/people/hiker.4bpp", 0x0, 0x100 @ gObjectEventPic_Hiker frame slice
	.globl gObjectEventFrame_JP_0849FE8C
gObjectEventFrame_JP_0849FE8C: @ 0x0849FE8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 55; size=0x100
	.incbin "build/graphics/object_events/pics/people/hiker.4bpp", 0x100, 0x100 @ gObjectEventPic_Hiker frame slice
	.globl gObjectEventFrame_JP_0849FF8C
gObjectEventFrame_JP_0849FF8C: @ 0x0849FF8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 55; size=0x100
	.incbin "build/graphics/object_events/pics/people/hiker.4bpp", 0x200, 0x100 @ gObjectEventPic_Hiker frame slice
	.globl gObjectEventFrame_JP_084A008C
gObjectEventFrame_JP_084A008C: @ 0x084A008C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 55; size=0x100
	.incbin "build/graphics/object_events/pics/people/hiker.4bpp", 0x300, 0x100 @ gObjectEventPic_Hiker frame slice
	.globl gObjectEventFrame_JP_084A018C
gObjectEventFrame_JP_084A018C: @ 0x084A018C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 55; size=0x100
	.incbin "build/graphics/object_events/pics/people/hiker.4bpp", 0x400, 0x100 @ gObjectEventPic_Hiker frame slice
	.globl gObjectEventFrame_JP_084A028C
gObjectEventFrame_JP_084A028C: @ 0x084A028C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 55; size=0x100
	.incbin "build/graphics/object_events/pics/people/hiker.4bpp", 0x500, 0x100 @ gObjectEventPic_Hiker frame slice
	.globl gObjectEventFrame_JP_084A038C
gObjectEventFrame_JP_084A038C: @ 0x084A038C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 55; size=0x100
	.incbin "build/graphics/object_events/pics/people/hiker.4bpp", 0x600, 0x100 @ gObjectEventPic_Hiker frame slice
	.globl gObjectEventFrame_JP_084A048C
gObjectEventFrame_JP_084A048C: @ 0x084A048C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 55; size=0x100
	.incbin "build/graphics/object_events/pics/people/hiker.4bpp", 0x700, 0x100 @ gObjectEventPic_Hiker frame slice
	.globl gObjectEventFrame_JP_084A058C
gObjectEventFrame_JP_084A058C: @ 0x084A058C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 55; size=0x100
	.incbin "build/graphics/object_events/pics/people/hiker.4bpp", 0x800, 0x100 @ gObjectEventPic_Hiker frame slice
	.globl gObjectEventFrame_JP_084A068C
gObjectEventFrame_JP_084A068C: @ 0x084A068C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 56; size=0x200
	.incbin "build/graphics/object_events/pics/people/cycling_triathlete_m.4bpp", 0x0, 0x200 @ gObjectEventPic_CyclingTriathleteM frame slice
	.globl gObjectEventFrame_JP_084A088C
gObjectEventFrame_JP_084A088C: @ 0x084A088C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 56; size=0x200
	.incbin "build/graphics/object_events/pics/people/cycling_triathlete_m.4bpp", 0x200, 0x200 @ gObjectEventPic_CyclingTriathleteM frame slice
	.globl gObjectEventFrame_JP_084A0A8C
gObjectEventFrame_JP_084A0A8C: @ 0x084A0A8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 56; size=0x200
	.incbin "build/graphics/object_events/pics/people/cycling_triathlete_m.4bpp", 0x400, 0x200 @ gObjectEventPic_CyclingTriathleteM frame slice
	.globl gObjectEventFrame_JP_084A0C8C
gObjectEventFrame_JP_084A0C8C: @ 0x084A0C8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 56; size=0x200
	.incbin "build/graphics/object_events/pics/people/cycling_triathlete_m.4bpp", 0x600, 0x200 @ gObjectEventPic_CyclingTriathleteM frame slice
	.globl gObjectEventFrame_JP_084A0E8C
gObjectEventFrame_JP_084A0E8C: @ 0x084A0E8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 56; size=0x200
	.incbin "build/graphics/object_events/pics/people/cycling_triathlete_m.4bpp", 0x800, 0x200 @ gObjectEventPic_CyclingTriathleteM frame slice
	.globl gObjectEventFrame_JP_084A108C
gObjectEventFrame_JP_084A108C: @ 0x084A108C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 56; size=0x200
	.incbin "build/graphics/object_events/pics/people/cycling_triathlete_m.4bpp", 0xA00, 0x200 @ gObjectEventPic_CyclingTriathleteM frame slice
	.globl gObjectEventFrame_JP_084A128C
gObjectEventFrame_JP_084A128C: @ 0x084A128C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 56; size=0x200
	.incbin "build/graphics/object_events/pics/people/cycling_triathlete_m.4bpp", 0xC00, 0x200 @ gObjectEventPic_CyclingTriathleteM frame slice
	.globl gObjectEventFrame_JP_084A148C
gObjectEventFrame_JP_084A148C: @ 0x084A148C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 56; size=0x200
	.incbin "build/graphics/object_events/pics/people/cycling_triathlete_m.4bpp", 0xE00, 0x200 @ gObjectEventPic_CyclingTriathleteM frame slice
	.globl gObjectEventFrame_JP_084A168C
gObjectEventFrame_JP_084A168C: @ 0x084A168C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 56; size=0x200
	.incbin "build/graphics/object_events/pics/people/cycling_triathlete_m.4bpp", 0x1000, 0x200 @ gObjectEventPic_CyclingTriathleteM frame slice
	.globl gObjectEventFrame_JP_084A188C
gObjectEventFrame_JP_084A188C: @ 0x084A188C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 57; size=0x200
	.incbin "build/graphics/object_events/pics/people/cycling_triathlete_f.4bpp", 0x0, 0x200 @ gObjectEventPic_CyclingTriathleteF frame slice
	.globl gObjectEventFrame_JP_084A1A8C
gObjectEventFrame_JP_084A1A8C: @ 0x084A1A8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 57; size=0x200
	.incbin "build/graphics/object_events/pics/people/cycling_triathlete_f.4bpp", 0x200, 0x200 @ gObjectEventPic_CyclingTriathleteF frame slice
	.globl gObjectEventFrame_JP_084A1C8C
gObjectEventFrame_JP_084A1C8C: @ 0x084A1C8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 57; size=0x200
	.incbin "build/graphics/object_events/pics/people/cycling_triathlete_f.4bpp", 0x400, 0x200 @ gObjectEventPic_CyclingTriathleteF frame slice
	.globl gObjectEventFrame_JP_084A1E8C
gObjectEventFrame_JP_084A1E8C: @ 0x084A1E8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 57; size=0x200
	.incbin "build/graphics/object_events/pics/people/cycling_triathlete_f.4bpp", 0x600, 0x200 @ gObjectEventPic_CyclingTriathleteF frame slice
	.globl gObjectEventFrame_JP_084A208C
gObjectEventFrame_JP_084A208C: @ 0x084A208C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 57; size=0x200
	.incbin "build/graphics/object_events/pics/people/cycling_triathlete_f.4bpp", 0x800, 0x200 @ gObjectEventPic_CyclingTriathleteF frame slice
	.globl gObjectEventFrame_JP_084A228C
gObjectEventFrame_JP_084A228C: @ 0x084A228C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 57; size=0x200
	.incbin "build/graphics/object_events/pics/people/cycling_triathlete_f.4bpp", 0xA00, 0x200 @ gObjectEventPic_CyclingTriathleteF frame slice
	.globl gObjectEventFrame_JP_084A248C
gObjectEventFrame_JP_084A248C: @ 0x084A248C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 57; size=0x200
	.incbin "build/graphics/object_events/pics/people/cycling_triathlete_f.4bpp", 0xC00, 0x200 @ gObjectEventPic_CyclingTriathleteF frame slice
	.globl gObjectEventFrame_JP_084A268C
gObjectEventFrame_JP_084A268C: @ 0x084A268C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 57; size=0x200
	.incbin "build/graphics/object_events/pics/people/cycling_triathlete_f.4bpp", 0xE00, 0x200 @ gObjectEventPic_CyclingTriathleteF frame slice
	.globl gObjectEventFrame_JP_084A288C
gObjectEventFrame_JP_084A288C: @ 0x084A288C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 57; size=0x200
	.incbin "build/graphics/object_events/pics/people/cycling_triathlete_f.4bpp", 0x1000, 0x200 @ gObjectEventPic_CyclingTriathleteF frame slice
	.globl gObjectEventFrame_JP_084A2A8C
gObjectEventFrame_JP_084A2A8C: @ 0x084A2A8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 65; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_4.4bpp", 0x0, 0x100 @ gObjectEventPic_Man4 frame slice
	.globl gObjectEventFrame_JP_084A2B8C
gObjectEventFrame_JP_084A2B8C: @ 0x084A2B8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 65; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_4.4bpp", 0x100, 0x100 @ gObjectEventPic_Man4 frame slice
	.globl gObjectEventFrame_JP_084A2C8C
gObjectEventFrame_JP_084A2C8C: @ 0x084A2C8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 65; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_4.4bpp", 0x200, 0x100 @ gObjectEventPic_Man4 frame slice
	.globl gObjectEventFrame_JP_084A2D8C
gObjectEventFrame_JP_084A2D8C: @ 0x084A2D8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 65; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_4.4bpp", 0x300, 0x100 @ gObjectEventPic_Man4 frame slice
	.globl gObjectEventFrame_JP_084A2E8C
gObjectEventFrame_JP_084A2E8C: @ 0x084A2E8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 65; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_4.4bpp", 0x400, 0x100 @ gObjectEventPic_Man4 frame slice
	.globl gObjectEventFrame_JP_084A2F8C
gObjectEventFrame_JP_084A2F8C: @ 0x084A2F8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 65; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_4.4bpp", 0x500, 0x100 @ gObjectEventPic_Man4 frame slice
	.globl gObjectEventFrame_JP_084A308C
gObjectEventFrame_JP_084A308C: @ 0x084A308C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 65; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_4.4bpp", 0x600, 0x100 @ gObjectEventPic_Man4 frame slice
	.globl gObjectEventFrame_JP_084A318C
gObjectEventFrame_JP_084A318C: @ 0x084A318C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 65; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_4.4bpp", 0x700, 0x100 @ gObjectEventPic_Man4 frame slice
	.globl gObjectEventFrame_JP_084A328C
gObjectEventFrame_JP_084A328C: @ 0x084A328C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 65; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_4.4bpp", 0x800, 0x100 @ gObjectEventPic_Man4 frame slice
	.globl gObjectEventFrame_JP_084A338C
gObjectEventFrame_JP_084A338C: @ 0x084A338C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 66; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_5.4bpp", 0x0, 0x100 @ gObjectEventPic_Man5 frame slice
	.globl gObjectEventFrame_JP_084A348C
gObjectEventFrame_JP_084A348C: @ 0x084A348C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 66; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_5.4bpp", 0x100, 0x100 @ gObjectEventPic_Man5 frame slice
	.globl gObjectEventFrame_JP_084A358C
gObjectEventFrame_JP_084A358C: @ 0x084A358C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 66; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_5.4bpp", 0x200, 0x100 @ gObjectEventPic_Man5 frame slice
	.globl gObjectEventFrame_JP_084A368C
gObjectEventFrame_JP_084A368C: @ 0x084A368C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 66; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_5.4bpp", 0x300, 0x100 @ gObjectEventPic_Man5 frame slice
	.globl gObjectEventFrame_JP_084A378C
gObjectEventFrame_JP_084A378C: @ 0x084A378C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 66; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_5.4bpp", 0x400, 0x100 @ gObjectEventPic_Man5 frame slice
	.globl gObjectEventFrame_JP_084A388C
gObjectEventFrame_JP_084A388C: @ 0x084A388C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 66; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_5.4bpp", 0x500, 0x100 @ gObjectEventPic_Man5 frame slice
	.globl gObjectEventFrame_JP_084A398C
gObjectEventFrame_JP_084A398C: @ 0x084A398C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 66; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_5.4bpp", 0x600, 0x100 @ gObjectEventPic_Man5 frame slice
	.globl gObjectEventFrame_JP_084A3A8C
gObjectEventFrame_JP_084A3A8C: @ 0x084A3A8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 66; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_5.4bpp", 0x700, 0x100 @ gObjectEventPic_Man5 frame slice
	.globl gObjectEventFrame_JP_084A3B8C
gObjectEventFrame_JP_084A3B8C: @ 0x084A3B8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 66; size=0x100
	.incbin "build/graphics/object_events/pics/people/man_5.4bpp", 0x800, 0x100 @ gObjectEventPic_Man5 frame slice
	.globl gObjectEventFrame_JP_084A3C8C
gObjectEventFrame_JP_084A3C8C: @ 0x084A3C8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 58; size=0x100
	.incbin "build/graphics/object_events/pics/people/nurse.4bpp", 0x0, 0x100 @ gObjectEventPic_Nurse frame slice
	.globl gObjectEventFrame_JP_084A3D8C
gObjectEventFrame_JP_084A3D8C: @ 0x084A3D8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 58; size=0x100
	.incbin "build/graphics/object_events/pics/people/nurse.4bpp", 0x100, 0x100 @ gObjectEventPic_Nurse frame slice
	.globl gObjectEventFrame_JP_084A3E8C
gObjectEventFrame_JP_084A3E8C: @ 0x084A3E8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 58; size=0x100
	.incbin "build/graphics/object_events/pics/people/nurse.4bpp", 0x200, 0x100 @ gObjectEventPic_Nurse frame slice
	.globl gObjectEventFrame_JP_084A3F8C
gObjectEventFrame_JP_084A3F8C: @ 0x084A3F8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 58; size=0x100
	.incbin "build/graphics/object_events/pics/people/nurse.4bpp", 0x300, 0x100 @ gObjectEventPic_Nurse frame slice
	.globl gObjectEventFrame_JP_084A408C
gObjectEventFrame_JP_084A408C: @ 0x084A408C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 59; size=0x80
	.incbin "build/graphics/object_events/pics/misc/item_ball.4bpp", 0x0, 0x80 @ gObjectEventPic_ItemBall frame slice
	.globl gObjectEventFrame_JP_084A410C
gObjectEventFrame_JP_084A410C: @ 0x084A410C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 64; size=0x100
	.incbin "build/graphics/object_events/pics/people/prof_birch.4bpp", 0x0, 0x100 @ gObjectEventPic_ProfBirch frame slice
	.globl gObjectEventFrame_JP_084A420C
gObjectEventFrame_JP_084A420C: @ 0x084A420C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 64; size=0x100
	.incbin "build/graphics/object_events/pics/people/prof_birch.4bpp", 0x100, 0x100 @ gObjectEventPic_ProfBirch frame slice
	.globl gObjectEventFrame_JP_084A430C
gObjectEventFrame_JP_084A430C: @ 0x084A430C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 64; size=0x100
	.incbin "build/graphics/object_events/pics/people/prof_birch.4bpp", 0x200, 0x100 @ gObjectEventPic_ProfBirch frame slice
	.globl gObjectEventFrame_JP_084A440C
gObjectEventFrame_JP_084A440C: @ 0x084A440C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 64; size=0x100
	.incbin "build/graphics/object_events/pics/people/prof_birch.4bpp", 0x300, 0x100 @ gObjectEventPic_ProfBirch frame slice
	.globl gObjectEventFrame_JP_084A450C
gObjectEventFrame_JP_084A450C: @ 0x084A450C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 64; size=0x100
	.incbin "build/graphics/object_events/pics/people/prof_birch.4bpp", 0x400, 0x100 @ gObjectEventPic_ProfBirch frame slice
	.globl gObjectEventFrame_JP_084A460C
gObjectEventFrame_JP_084A460C: @ 0x084A460C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 64; size=0x100
	.incbin "build/graphics/object_events/pics/people/prof_birch.4bpp", 0x500, 0x100 @ gObjectEventPic_ProfBirch frame slice
	.globl gObjectEventFrame_JP_084A470C
gObjectEventFrame_JP_084A470C: @ 0x084A470C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 64; size=0x100
	.incbin "build/graphics/object_events/pics/people/prof_birch.4bpp", 0x600, 0x100 @ gObjectEventPic_ProfBirch frame slice
	.globl gObjectEventFrame_JP_084A480C
gObjectEventFrame_JP_084A480C: @ 0x084A480C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 64; size=0x100
	.incbin "build/graphics/object_events/pics/people/prof_birch.4bpp", 0x700, 0x100 @ gObjectEventPic_ProfBirch frame slice
	.globl gObjectEventFrame_JP_084A490C
gObjectEventFrame_JP_084A490C: @ 0x084A490C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 64; size=0x100
	.incbin "build/graphics/object_events/pics/people/prof_birch.4bpp", 0x800, 0x100 @ gObjectEventPic_ProfBirch frame slice
	.globl gObjectEventFrame_JP_084A4A0C
gObjectEventFrame_JP_084A4A0C: @ 0x084A4A0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 67; size=0x100
	.incbin "build/graphics/object_events/pics/people/reporter_m.4bpp", 0x0, 0x100 @ gObjectEventPic_ReporterM frame slice
	.globl gObjectEventFrame_JP_084A4B0C
gObjectEventFrame_JP_084A4B0C: @ 0x084A4B0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 67; size=0x100
	.incbin "build/graphics/object_events/pics/people/reporter_m.4bpp", 0x100, 0x100 @ gObjectEventPic_ReporterM frame slice
	.globl gObjectEventFrame_JP_084A4C0C
gObjectEventFrame_JP_084A4C0C: @ 0x084A4C0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 67; size=0x100
	.incbin "build/graphics/object_events/pics/people/reporter_m.4bpp", 0x200, 0x100 @ gObjectEventPic_ReporterM frame slice
	.globl gObjectEventFrame_JP_084A4D0C
gObjectEventFrame_JP_084A4D0C: @ 0x084A4D0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 67; size=0x100
	.incbin "build/graphics/object_events/pics/people/reporter_m.4bpp", 0x300, 0x100 @ gObjectEventPic_ReporterM frame slice
	.globl gObjectEventFrame_JP_084A4E0C
gObjectEventFrame_JP_084A4E0C: @ 0x084A4E0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 67; size=0x100
	.incbin "build/graphics/object_events/pics/people/reporter_m.4bpp", 0x400, 0x100 @ gObjectEventPic_ReporterM frame slice
	.globl gObjectEventFrame_JP_084A4F0C
gObjectEventFrame_JP_084A4F0C: @ 0x084A4F0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 67; size=0x100
	.incbin "build/graphics/object_events/pics/people/reporter_m.4bpp", 0x500, 0x100 @ gObjectEventPic_ReporterM frame slice
	.globl gObjectEventFrame_JP_084A500C
gObjectEventFrame_JP_084A500C: @ 0x084A500C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 67; size=0x100
	.incbin "build/graphics/object_events/pics/people/reporter_m.4bpp", 0x600, 0x100 @ gObjectEventPic_ReporterM frame slice
	.globl gObjectEventFrame_JP_084A510C
gObjectEventFrame_JP_084A510C: @ 0x084A510C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 67; size=0x100
	.incbin "build/graphics/object_events/pics/people/reporter_m.4bpp", 0x700, 0x100 @ gObjectEventPic_ReporterM frame slice
	.globl gObjectEventFrame_JP_084A520C
gObjectEventFrame_JP_084A520C: @ 0x084A520C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 67; size=0x100
	.incbin "build/graphics/object_events/pics/people/reporter_m.4bpp", 0x800, 0x100 @ gObjectEventPic_ReporterM frame slice
	.globl gObjectEventFrame_JP_084A530C
gObjectEventFrame_JP_084A530C: @ 0x084A530C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 68; size=0x100
	.incbin "build/graphics/object_events/pics/people/reporter_f.4bpp", 0x0, 0x100 @ gObjectEventPic_ReporterF frame slice
	.globl gObjectEventFrame_JP_084A540C
gObjectEventFrame_JP_084A540C: @ 0x084A540C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 68; size=0x100
	.incbin "build/graphics/object_events/pics/people/reporter_f.4bpp", 0x100, 0x100 @ gObjectEventPic_ReporterF frame slice
	.globl gObjectEventFrame_JP_084A550C
gObjectEventFrame_JP_084A550C: @ 0x084A550C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 68; size=0x100
	.incbin "build/graphics/object_events/pics/people/reporter_f.4bpp", 0x200, 0x100 @ gObjectEventPic_ReporterF frame slice
	.globl gObjectEventFrame_JP_084A560C
gObjectEventFrame_JP_084A560C: @ 0x084A560C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 68; size=0x100
	.incbin "build/graphics/object_events/pics/people/reporter_f.4bpp", 0x300, 0x100 @ gObjectEventPic_ReporterF frame slice
	.globl gObjectEventFrame_JP_084A570C
gObjectEventFrame_JP_084A570C: @ 0x084A570C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 68; size=0x100
	.incbin "build/graphics/object_events/pics/people/reporter_f.4bpp", 0x400, 0x100 @ gObjectEventPic_ReporterF frame slice
	.globl gObjectEventFrame_JP_084A580C
gObjectEventFrame_JP_084A580C: @ 0x084A580C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 68; size=0x100
	.incbin "build/graphics/object_events/pics/people/reporter_f.4bpp", 0x500, 0x100 @ gObjectEventPic_ReporterF frame slice
	.globl gObjectEventFrame_JP_084A590C
gObjectEventFrame_JP_084A590C: @ 0x084A590C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 68; size=0x100
	.incbin "build/graphics/object_events/pics/people/reporter_f.4bpp", 0x600, 0x100 @ gObjectEventPic_ReporterF frame slice
	.globl gObjectEventFrame_JP_084A5A0C
gObjectEventFrame_JP_084A5A0C: @ 0x084A5A0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 68; size=0x100
	.incbin "build/graphics/object_events/pics/people/reporter_f.4bpp", 0x700, 0x100 @ gObjectEventPic_ReporterF frame slice
	.globl gObjectEventFrame_JP_084A5B0C
gObjectEventFrame_JP_084A5B0C: @ 0x084A5B0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 68; size=0x100
	.incbin "build/graphics/object_events/pics/people/reporter_f.4bpp", 0x800, 0x100 @ gObjectEventPic_ReporterF frame slice
	.globl gObjectEventFrame_JP_084A5C0C
gObjectEventFrame_JP_084A5C0C: @ 0x084A5C0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 69, 239, 240, 241; size=0x100
	.incbin "build/graphics/object_events/pics/people/mauville_old_man_1.4bpp", 0x0, 0x100 @ gObjectEventPic_MauvilleOldMan1 frame slice
	.globl gObjectEventFrame_JP_084A5D0C
gObjectEventFrame_JP_084A5D0C: @ 0x084A5D0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 69, 239, 240, 241; size=0x100
	.incbin "build/graphics/object_events/pics/people/mauville_old_man_1.4bpp", 0x100, 0x100 @ gObjectEventPic_MauvilleOldMan1 frame slice
	.globl gObjectEventFrame_JP_084A5E0C
gObjectEventFrame_JP_084A5E0C: @ 0x084A5E0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 69, 239, 240, 241; size=0x100
	.incbin "build/graphics/object_events/pics/people/mauville_old_man_1.4bpp", 0x200, 0x100 @ gObjectEventPic_MauvilleOldMan1 frame slice
	.globl gObjectEventFrame_JP_084A5F0C
gObjectEventFrame_JP_084A5F0C: @ 0x084A5F0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 69, 239, 240, 241; size=0x100
	.incbin "build/graphics/object_events/pics/people/mauville_old_man_1.4bpp", 0x300, 0x100 @ gObjectEventPic_MauvilleOldMan1 frame slice
	.globl gObjectEventFrame_JP_084A600C
gObjectEventFrame_JP_084A600C: @ 0x084A600C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 69, 239, 240, 241; size=0x100
	.incbin "build/graphics/object_events/pics/people/mauville_old_man_1.4bpp", 0x400, 0x100 @ gObjectEventPic_MauvilleOldMan1 frame slice
	.globl gObjectEventFrame_JP_084A610C
gObjectEventFrame_JP_084A610C: @ 0x084A610C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 69, 239, 240, 241; size=0x100
	.incbin "build/graphics/object_events/pics/people/mauville_old_man_1.4bpp", 0x500, 0x100 @ gObjectEventPic_MauvilleOldMan1 frame slice
	.globl gObjectEventFrame_JP_084A620C
gObjectEventFrame_JP_084A620C: @ 0x084A620C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 69, 239, 240, 241; size=0x100
	.incbin "build/graphics/object_events/pics/people/mauville_old_man_1.4bpp", 0x600, 0x100 @ gObjectEventPic_MauvilleOldMan1 frame slice
	.globl gObjectEventFrame_JP_084A630C
gObjectEventFrame_JP_084A630C: @ 0x084A630C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 69, 239, 240, 241; size=0x100
	.incbin "build/graphics/object_events/pics/people/mauville_old_man_1.4bpp", 0x700, 0x100 @ gObjectEventPic_MauvilleOldMan1 frame slice
	.globl gObjectEventFrame_JP_084A640C
gObjectEventFrame_JP_084A640C: @ 0x084A640C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 69, 239, 240, 241; size=0x100
	.incbin "build/graphics/object_events/pics/people/mauville_old_man_1.4bpp", 0x800, 0x100 @ gObjectEventPic_MauvilleOldMan1 frame slice
	.globl gObjectEventFrame_JP_084A650C
gObjectEventFrame_JP_084A650C: @ 0x084A650C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 242, 243, 244, 245; size=0x100
	.incbin "build/graphics/object_events/pics/people/mauville_old_man_2.4bpp", 0x0, 0x100 @ gObjectEventPic_MauvilleOldMan2 frame slice
	.globl gObjectEventFrame_JP_084A660C
gObjectEventFrame_JP_084A660C: @ 0x084A660C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 242, 243, 244, 245; size=0x100
	.incbin "build/graphics/object_events/pics/people/mauville_old_man_2.4bpp", 0x100, 0x100 @ gObjectEventPic_MauvilleOldMan2 frame slice
	.globl gObjectEventFrame_JP_084A670C
gObjectEventFrame_JP_084A670C: @ 0x084A670C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 242, 243, 244, 245; size=0x100
	.incbin "build/graphics/object_events/pics/people/mauville_old_man_2.4bpp", 0x200, 0x100 @ gObjectEventPic_MauvilleOldMan2 frame slice
	.globl gObjectEventFrame_JP_084A680C
gObjectEventFrame_JP_084A680C: @ 0x084A680C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 242, 243, 244, 245; size=0x100
	.incbin "build/graphics/object_events/pics/people/mauville_old_man_2.4bpp", 0x300, 0x100 @ gObjectEventPic_MauvilleOldMan2 frame slice
	.globl gObjectEventFrame_JP_084A690C
gObjectEventFrame_JP_084A690C: @ 0x084A690C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 242, 243, 244, 245; size=0x100
	.incbin "build/graphics/object_events/pics/people/mauville_old_man_2.4bpp", 0x400, 0x100 @ gObjectEventPic_MauvilleOldMan2 frame slice
	.globl gObjectEventFrame_JP_084A6A0C
gObjectEventFrame_JP_084A6A0C: @ 0x084A6A0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 242, 243, 244, 245; size=0x100
	.incbin "build/graphics/object_events/pics/people/mauville_old_man_2.4bpp", 0x500, 0x100 @ gObjectEventPic_MauvilleOldMan2 frame slice
	.globl gObjectEventFrame_JP_084A6B0C
gObjectEventFrame_JP_084A6B0C: @ 0x084A6B0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 242, 243, 244, 245; size=0x100
	.incbin "build/graphics/object_events/pics/people/mauville_old_man_2.4bpp", 0x600, 0x100 @ gObjectEventPic_MauvilleOldMan2 frame slice
	.globl gObjectEventFrame_JP_084A6C0C
gObjectEventFrame_JP_084A6C0C: @ 0x084A6C0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 242, 243, 244, 245; size=0x100
	.incbin "build/graphics/object_events/pics/people/mauville_old_man_2.4bpp", 0x700, 0x100 @ gObjectEventPic_MauvilleOldMan2 frame slice
	.globl gObjectEventFrame_JP_084A6D0C
gObjectEventFrame_JP_084A6D0C: @ 0x084A6D0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 242, 243, 244, 245; size=0x100
	.incbin "build/graphics/object_events/pics/people/mauville_old_man_2.4bpp", 0x800, 0x100 @ gObjectEventPic_MauvilleOldMan2 frame slice
	.globl gObjectEventFrame_JP_084A6E0C
gObjectEventFrame_JP_084A6E0C: @ 0x084A6E0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 83; size=0x100
	.incbin "build/graphics/object_events/pics/people/mart_employee.4bpp", 0x0, 0x100 @ gObjectEventPic_MartEmployee frame slice
	.globl gObjectEventFrame_JP_084A6F0C
gObjectEventFrame_JP_084A6F0C: @ 0x084A6F0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 83; size=0x100
	.incbin "build/graphics/object_events/pics/people/mart_employee.4bpp", 0x100, 0x100 @ gObjectEventPic_MartEmployee frame slice
	.globl gObjectEventFrame_JP_084A700C
gObjectEventFrame_JP_084A700C: @ 0x084A700C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 83; size=0x100
	.incbin "build/graphics/object_events/pics/people/mart_employee.4bpp", 0x200, 0x100 @ gObjectEventPic_MartEmployee frame slice
	.globl gObjectEventFrame_JP_084A710C
gObjectEventFrame_JP_084A710C: @ 0x084A710C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 83; size=0x100
	.incbin "build/graphics/object_events/pics/people/mart_employee.4bpp", 0x300, 0x100 @ gObjectEventPic_MartEmployee frame slice
	.globl gObjectEventFrame_JP_084A720C
gObjectEventFrame_JP_084A720C: @ 0x084A720C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 83; size=0x100
	.incbin "build/graphics/object_events/pics/people/mart_employee.4bpp", 0x400, 0x100 @ gObjectEventPic_MartEmployee frame slice
	.globl gObjectEventFrame_JP_084A730C
gObjectEventFrame_JP_084A730C: @ 0x084A730C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 83; size=0x100
	.incbin "build/graphics/object_events/pics/people/mart_employee.4bpp", 0x500, 0x100 @ gObjectEventPic_MartEmployee frame slice
	.globl gObjectEventFrame_JP_084A740C
gObjectEventFrame_JP_084A740C: @ 0x084A740C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 83; size=0x100
	.incbin "build/graphics/object_events/pics/people/mart_employee.4bpp", 0x600, 0x100 @ gObjectEventPic_MartEmployee frame slice
	.globl gObjectEventFrame_JP_084A750C
gObjectEventFrame_JP_084A750C: @ 0x084A750C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 83; size=0x100
	.incbin "build/graphics/object_events/pics/people/mart_employee.4bpp", 0x700, 0x100 @ gObjectEventPic_MartEmployee frame slice
	.globl gObjectEventFrame_JP_084A760C
gObjectEventFrame_JP_084A760C: @ 0x084A760C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 83; size=0x100
	.incbin "build/graphics/object_events/pics/people/mart_employee.4bpp", 0x800, 0x100 @ gObjectEventPic_MartEmployee frame slice
	.globl gObjectEventFrame_JP_084A770C
gObjectEventFrame_JP_084A770C: @ 0x084A770C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 84; size=0x100
	.incbin "build/graphics/object_events/pics/people/rooftop_sale_woman.4bpp", 0x0, 0x100 @ gObjectEventPic_RooftopSaleWoman frame slice
	.globl gObjectEventFrame_JP_084A780C
gObjectEventFrame_JP_084A780C: @ 0x084A780C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 84; size=0x100
	.incbin "build/graphics/object_events/pics/people/rooftop_sale_woman.4bpp", 0x100, 0x100 @ gObjectEventPic_RooftopSaleWoman frame slice
	.globl gObjectEventFrame_JP_084A790C
gObjectEventFrame_JP_084A790C: @ 0x084A790C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 84; size=0x100
	.incbin "build/graphics/object_events/pics/people/rooftop_sale_woman.4bpp", 0x200, 0x100 @ gObjectEventPic_RooftopSaleWoman frame slice
	.globl gObjectEventFrame_JP_084A7A0C
gObjectEventFrame_JP_084A7A0C: @ 0x084A7A0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 84; size=0x100
	.incbin "build/graphics/object_events/pics/people/rooftop_sale_woman.4bpp", 0x300, 0x100 @ gObjectEventPic_RooftopSaleWoman frame slice
	.globl gObjectEventFrame_JP_084A7B0C
gObjectEventFrame_JP_084A7B0C: @ 0x084A7B0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 84; size=0x100
	.incbin "build/graphics/object_events/pics/people/rooftop_sale_woman.4bpp", 0x400, 0x100 @ gObjectEventPic_RooftopSaleWoman frame slice
	.globl gObjectEventFrame_JP_084A7C0C
gObjectEventFrame_JP_084A7C0C: @ 0x084A7C0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 84; size=0x100
	.incbin "build/graphics/object_events/pics/people/rooftop_sale_woman.4bpp", 0x500, 0x100 @ gObjectEventPic_RooftopSaleWoman frame slice
	.globl gObjectEventFrame_JP_084A7D0C
gObjectEventFrame_JP_084A7D0C: @ 0x084A7D0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 84; size=0x100
	.incbin "build/graphics/object_events/pics/people/rooftop_sale_woman.4bpp", 0x600, 0x100 @ gObjectEventPic_RooftopSaleWoman frame slice
	.globl gObjectEventFrame_JP_084A7E0C
gObjectEventFrame_JP_084A7E0C: @ 0x084A7E0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 84; size=0x100
	.incbin "build/graphics/object_events/pics/people/rooftop_sale_woman.4bpp", 0x700, 0x100 @ gObjectEventPic_RooftopSaleWoman frame slice
	.globl gObjectEventFrame_JP_084A7F0C
gObjectEventFrame_JP_084A7F0C: @ 0x084A7F0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 84; size=0x100
	.incbin "build/graphics/object_events/pics/people/rooftop_sale_woman.4bpp", 0x800, 0x100 @ gObjectEventPic_RooftopSaleWoman frame slice
	.globl gObjectEventFrame_JP_084A800C
gObjectEventFrame_JP_084A800C: @ 0x084A800C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 85; size=0x100
	.incbin "build/graphics/object_events/pics/people/teala.4bpp", 0x0, 0x100 @ gObjectEventPic_Teala frame slice
	.globl gObjectEventFrame_JP_084A810C
gObjectEventFrame_JP_084A810C: @ 0x084A810C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 85; size=0x100
	.incbin "build/graphics/object_events/pics/people/teala.4bpp", 0x100, 0x100 @ gObjectEventPic_Teala frame slice
	.globl gObjectEventFrame_JP_084A820C
gObjectEventFrame_JP_084A820C: @ 0x084A820C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 85; size=0x100
	.incbin "build/graphics/object_events/pics/people/teala.4bpp", 0x200, 0x100 @ gObjectEventPic_Teala frame slice
	.globl gObjectEventFrame_JP_084A830C
gObjectEventFrame_JP_084A830C: @ 0x084A830C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 85; size=0x100
	.incbin "build/graphics/object_events/pics/people/teala.4bpp", 0x300, 0x100 @ gObjectEventPic_Teala frame slice
	.globl gObjectEventFrame_JP_084A840C
gObjectEventFrame_JP_084A840C: @ 0x084A840C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 85; size=0x100
	.incbin "build/graphics/object_events/pics/people/teala.4bpp", 0x400, 0x100 @ gObjectEventPic_Teala frame slice
	.globl gObjectEventFrame_JP_084A850C
gObjectEventFrame_JP_084A850C: @ 0x084A850C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 85; size=0x100
	.incbin "build/graphics/object_events/pics/people/teala.4bpp", 0x500, 0x100 @ gObjectEventPic_Teala frame slice
	.globl gObjectEventFrame_JP_084A860C
gObjectEventFrame_JP_084A860C: @ 0x084A860C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 85; size=0x100
	.incbin "build/graphics/object_events/pics/people/teala.4bpp", 0x600, 0x100 @ gObjectEventPic_Teala frame slice
	.globl gObjectEventFrame_JP_084A870C
gObjectEventFrame_JP_084A870C: @ 0x084A870C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 85; size=0x100
	.incbin "build/graphics/object_events/pics/people/teala.4bpp", 0x700, 0x100 @ gObjectEventPic_Teala frame slice
	.globl gObjectEventFrame_JP_084A880C
gObjectEventFrame_JP_084A880C: @ 0x084A880C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 85; size=0x100
	.incbin "build/graphics/object_events/pics/people/teala.4bpp", 0x800, 0x100 @ gObjectEventPic_Teala frame slice
	.globl gObjectEventFrame_JP_084A890C
gObjectEventFrame_JP_084A890C: @ 0x084A890C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 99; size=0x100
	.incbin "build/graphics/object_events/pics/people/artist.4bpp", 0x0, 0x100 @ gObjectEventPic_Artist frame slice
	.globl gObjectEventFrame_JP_084A8A0C
gObjectEventFrame_JP_084A8A0C: @ 0x084A8A0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 99; size=0x100
	.incbin "build/graphics/object_events/pics/people/artist.4bpp", 0x100, 0x100 @ gObjectEventPic_Artist frame slice
	.globl gObjectEventFrame_JP_084A8B0C
gObjectEventFrame_JP_084A8B0C: @ 0x084A8B0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 99; size=0x100
	.incbin "build/graphics/object_events/pics/people/artist.4bpp", 0x200, 0x100 @ gObjectEventPic_Artist frame slice
	.globl gObjectEventFrame_JP_084A8C0C
gObjectEventFrame_JP_084A8C0C: @ 0x084A8C0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 99; size=0x100
	.incbin "build/graphics/object_events/pics/people/artist.4bpp", 0x300, 0x100 @ gObjectEventPic_Artist frame slice
	.globl gObjectEventFrame_JP_084A8D0C
gObjectEventFrame_JP_084A8D0C: @ 0x084A8D0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 99; size=0x100
	.incbin "build/graphics/object_events/pics/people/artist.4bpp", 0x400, 0x100 @ gObjectEventPic_Artist frame slice
	.globl gObjectEventFrame_JP_084A8E0C
gObjectEventFrame_JP_084A8E0C: @ 0x084A8E0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 99; size=0x100
	.incbin "build/graphics/object_events/pics/people/artist.4bpp", 0x500, 0x100 @ gObjectEventPic_Artist frame slice
	.globl gObjectEventFrame_JP_084A8F0C
gObjectEventFrame_JP_084A8F0C: @ 0x084A8F0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 99; size=0x100
	.incbin "build/graphics/object_events/pics/people/artist.4bpp", 0x600, 0x100 @ gObjectEventPic_Artist frame slice
	.globl gObjectEventFrame_JP_084A900C
gObjectEventFrame_JP_084A900C: @ 0x084A900C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 99; size=0x100
	.incbin "build/graphics/object_events/pics/people/artist.4bpp", 0x700, 0x100 @ gObjectEventPic_Artist frame slice
	.globl gObjectEventFrame_JP_084A910C
gObjectEventFrame_JP_084A910C: @ 0x084A910C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 99; size=0x100
	.incbin "build/graphics/object_events/pics/people/artist.4bpp", 0x800, 0x100 @ gObjectEventPic_Artist frame slice
	.globl gObjectEventFrame_JP_084A920C
gObjectEventFrame_JP_084A920C: @ 0x084A920C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 110; size=0x100
	.incbin "build/graphics/object_events/pics/people/cameraman.4bpp", 0x0, 0x100 @ gObjectEventPic_Cameraman frame slice
	.globl gObjectEventFrame_JP_084A930C
gObjectEventFrame_JP_084A930C: @ 0x084A930C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 110; size=0x100
	.incbin "build/graphics/object_events/pics/people/cameraman.4bpp", 0x100, 0x100 @ gObjectEventPic_Cameraman frame slice
	.globl gObjectEventFrame_JP_084A940C
gObjectEventFrame_JP_084A940C: @ 0x084A940C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 110; size=0x100
	.incbin "build/graphics/object_events/pics/people/cameraman.4bpp", 0x200, 0x100 @ gObjectEventPic_Cameraman frame slice
	.globl gObjectEventFrame_JP_084A950C
gObjectEventFrame_JP_084A950C: @ 0x084A950C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 110; size=0x100
	.incbin "build/graphics/object_events/pics/people/cameraman.4bpp", 0x300, 0x100 @ gObjectEventPic_Cameraman frame slice
	.globl gObjectEventFrame_JP_084A960C
gObjectEventFrame_JP_084A960C: @ 0x084A960C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 110; size=0x100
	.incbin "build/graphics/object_events/pics/people/cameraman.4bpp", 0x400, 0x100 @ gObjectEventPic_Cameraman frame slice
	.globl gObjectEventFrame_JP_084A970C
gObjectEventFrame_JP_084A970C: @ 0x084A970C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 110; size=0x100
	.incbin "build/graphics/object_events/pics/people/cameraman.4bpp", 0x500, 0x100 @ gObjectEventPic_Cameraman frame slice
	.globl gObjectEventFrame_JP_084A980C
gObjectEventFrame_JP_084A980C: @ 0x084A980C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 110; size=0x100
	.incbin "build/graphics/object_events/pics/people/cameraman.4bpp", 0x600, 0x100 @ gObjectEventPic_Cameraman frame slice
	.globl gObjectEventFrame_JP_084A990C
gObjectEventFrame_JP_084A990C: @ 0x084A990C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 110; size=0x100
	.incbin "build/graphics/object_events/pics/people/cameraman.4bpp", 0x700, 0x100 @ gObjectEventPic_Cameraman frame slice
	.globl gObjectEventFrame_JP_084A9A0C
gObjectEventFrame_JP_084A9A0C: @ 0x084A9A0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 110; size=0x100
	.incbin "build/graphics/object_events/pics/people/cameraman.4bpp", 0x800, 0x100 @ gObjectEventPic_Cameraman frame slice
	.globl gObjectEventFrame_JP_084A9B0C
gObjectEventFrame_JP_084A9B0C: @ 0x084A9B0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 115; size=0x100
	.incbin "build/graphics/object_events/pics/people/scientist_2.4bpp", 0x0, 0x100 @ gObjectEventPic_Scientist2 frame slice
	.globl gObjectEventFrame_JP_084A9C0C
gObjectEventFrame_JP_084A9C0C: @ 0x084A9C0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 115; size=0x100
	.incbin "build/graphics/object_events/pics/people/scientist_2.4bpp", 0x100, 0x100 @ gObjectEventPic_Scientist2 frame slice
	.globl gObjectEventFrame_JP_084A9D0C
gObjectEventFrame_JP_084A9D0C: @ 0x084A9D0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 115; size=0x100
	.incbin "build/graphics/object_events/pics/people/scientist_2.4bpp", 0x200, 0x100 @ gObjectEventPic_Scientist2 frame slice
	.globl gObjectEventFrame_JP_084A9E0C
gObjectEventFrame_JP_084A9E0C: @ 0x084A9E0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 115; size=0x100
	.incbin "build/graphics/object_events/pics/people/scientist_2.4bpp", 0x300, 0x100 @ gObjectEventPic_Scientist2 frame slice
	.globl gObjectEventFrame_JP_084A9F0C
gObjectEventFrame_JP_084A9F0C: @ 0x084A9F0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 115; size=0x100
	.incbin "build/graphics/object_events/pics/people/scientist_2.4bpp", 0x400, 0x100 @ gObjectEventPic_Scientist2 frame slice
	.globl gObjectEventFrame_JP_084AA00C
gObjectEventFrame_JP_084AA00C: @ 0x084AA00C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 115; size=0x100
	.incbin "build/graphics/object_events/pics/people/scientist_2.4bpp", 0x500, 0x100 @ gObjectEventPic_Scientist2 frame slice
	.globl gObjectEventFrame_JP_084AA10C
gObjectEventFrame_JP_084AA10C: @ 0x084AA10C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 115; size=0x100
	.incbin "build/graphics/object_events/pics/people/scientist_2.4bpp", 0x600, 0x100 @ gObjectEventPic_Scientist2 frame slice
	.globl gObjectEventFrame_JP_084AA20C
gObjectEventFrame_JP_084AA20C: @ 0x084AA20C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 115; size=0x100
	.incbin "build/graphics/object_events/pics/people/scientist_2.4bpp", 0x700, 0x100 @ gObjectEventPic_Scientist2 frame slice
	.globl gObjectEventFrame_JP_084AA30C
gObjectEventFrame_JP_084AA30C: @ 0x084AA30C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 115; size=0x100
	.incbin "build/graphics/object_events/pics/people/scientist_2.4bpp", 0x800, 0x100 @ gObjectEventPic_Scientist2 frame slice
	.globl gObjectEventFrame_JP_084AA40C
gObjectEventFrame_JP_084AA40C: @ 0x084AA40C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 116; size=0x100
	.incbin "build/graphics/object_events/pics/people/devon_employee.4bpp", 0x0, 0x100 @ gObjectEventPic_DevonEmployee frame slice
	.globl gObjectEventFrame_JP_084AA50C
gObjectEventFrame_JP_084AA50C: @ 0x084AA50C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 116; size=0x100
	.incbin "build/graphics/object_events/pics/people/devon_employee.4bpp", 0x100, 0x100 @ gObjectEventPic_DevonEmployee frame slice
	.globl gObjectEventFrame_JP_084AA60C
gObjectEventFrame_JP_084AA60C: @ 0x084AA60C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 116; size=0x100
	.incbin "build/graphics/object_events/pics/people/devon_employee.4bpp", 0x200, 0x100 @ gObjectEventPic_DevonEmployee frame slice
	.globl gObjectEventFrame_JP_084AA70C
gObjectEventFrame_JP_084AA70C: @ 0x084AA70C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 116; size=0x100
	.incbin "build/graphics/object_events/pics/people/devon_employee.4bpp", 0x300, 0x100 @ gObjectEventPic_DevonEmployee frame slice
	.globl gObjectEventFrame_JP_084AA80C
gObjectEventFrame_JP_084AA80C: @ 0x084AA80C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 116; size=0x100
	.incbin "build/graphics/object_events/pics/people/devon_employee.4bpp", 0x400, 0x100 @ gObjectEventPic_DevonEmployee frame slice
	.globl gObjectEventFrame_JP_084AA90C
gObjectEventFrame_JP_084AA90C: @ 0x084AA90C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 116; size=0x100
	.incbin "build/graphics/object_events/pics/people/devon_employee.4bpp", 0x500, 0x100 @ gObjectEventPic_DevonEmployee frame slice
	.globl gObjectEventFrame_JP_084AAA0C
gObjectEventFrame_JP_084AAA0C: @ 0x084AAA0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 116; size=0x100
	.incbin "build/graphics/object_events/pics/people/devon_employee.4bpp", 0x600, 0x100 @ gObjectEventPic_DevonEmployee frame slice
	.globl gObjectEventFrame_JP_084AAB0C
gObjectEventFrame_JP_084AAB0C: @ 0x084AAB0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 116; size=0x100
	.incbin "build/graphics/object_events/pics/people/devon_employee.4bpp", 0x700, 0x100 @ gObjectEventPic_DevonEmployee frame slice
	.globl gObjectEventFrame_JP_084AAC0C
gObjectEventFrame_JP_084AAC0C: @ 0x084AAC0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 116; size=0x100
	.incbin "build/graphics/object_events/pics/people/devon_employee.4bpp", 0x800, 0x100 @ gObjectEventPic_DevonEmployee frame slice
	.globl gObjectEventFrame_JP_084AAD0C
gObjectEventFrame_JP_084AAD0C: @ 0x084AAD0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 117; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/aqua_member_m.4bpp", 0x0, 0x100 @ gObjectEventPic_AquaMemberM frame slice
	.globl gObjectEventFrame_JP_084AAE0C
gObjectEventFrame_JP_084AAE0C: @ 0x084AAE0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 117; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/aqua_member_m.4bpp", 0x100, 0x100 @ gObjectEventPic_AquaMemberM frame slice
	.globl gObjectEventFrame_JP_084AAF0C
gObjectEventFrame_JP_084AAF0C: @ 0x084AAF0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 117; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/aqua_member_m.4bpp", 0x200, 0x100 @ gObjectEventPic_AquaMemberM frame slice
	.globl gObjectEventFrame_JP_084AB00C
gObjectEventFrame_JP_084AB00C: @ 0x084AB00C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 117; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/aqua_member_m.4bpp", 0x300, 0x100 @ gObjectEventPic_AquaMemberM frame slice
	.globl gObjectEventFrame_JP_084AB10C
gObjectEventFrame_JP_084AB10C: @ 0x084AB10C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 117; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/aqua_member_m.4bpp", 0x400, 0x100 @ gObjectEventPic_AquaMemberM frame slice
	.globl gObjectEventFrame_JP_084AB20C
gObjectEventFrame_JP_084AB20C: @ 0x084AB20C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 117; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/aqua_member_m.4bpp", 0x500, 0x100 @ gObjectEventPic_AquaMemberM frame slice
	.globl gObjectEventFrame_JP_084AB30C
gObjectEventFrame_JP_084AB30C: @ 0x084AB30C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 117; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/aqua_member_m.4bpp", 0x600, 0x100 @ gObjectEventPic_AquaMemberM frame slice
	.globl gObjectEventFrame_JP_084AB40C
gObjectEventFrame_JP_084AB40C: @ 0x084AB40C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 117; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/aqua_member_m.4bpp", 0x700, 0x100 @ gObjectEventPic_AquaMemberM frame slice
	.globl gObjectEventFrame_JP_084AB50C
gObjectEventFrame_JP_084AB50C: @ 0x084AB50C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 117; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/aqua_member_m.4bpp", 0x800, 0x100 @ gObjectEventPic_AquaMemberM frame slice
	.globl gObjectEventFrame_JP_084AB60C
gObjectEventFrame_JP_084AB60C: @ 0x084AB60C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 118; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/aqua_member_f.4bpp", 0x0, 0x100 @ gObjectEventPic_AquaMemberF frame slice
	.globl gObjectEventFrame_JP_084AB70C
gObjectEventFrame_JP_084AB70C: @ 0x084AB70C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 118; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/aqua_member_f.4bpp", 0x100, 0x100 @ gObjectEventPic_AquaMemberF frame slice
	.globl gObjectEventFrame_JP_084AB80C
gObjectEventFrame_JP_084AB80C: @ 0x084AB80C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 118; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/aqua_member_f.4bpp", 0x200, 0x100 @ gObjectEventPic_AquaMemberF frame slice
	.globl gObjectEventFrame_JP_084AB90C
gObjectEventFrame_JP_084AB90C: @ 0x084AB90C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 118; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/aqua_member_f.4bpp", 0x300, 0x100 @ gObjectEventPic_AquaMemberF frame slice
	.globl gObjectEventFrame_JP_084ABA0C
gObjectEventFrame_JP_084ABA0C: @ 0x084ABA0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 118; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/aqua_member_f.4bpp", 0x400, 0x100 @ gObjectEventPic_AquaMemberF frame slice
	.globl gObjectEventFrame_JP_084ABB0C
gObjectEventFrame_JP_084ABB0C: @ 0x084ABB0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 118; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/aqua_member_f.4bpp", 0x500, 0x100 @ gObjectEventPic_AquaMemberF frame slice
	.globl gObjectEventFrame_JP_084ABC0C
gObjectEventFrame_JP_084ABC0C: @ 0x084ABC0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 118; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/aqua_member_f.4bpp", 0x600, 0x100 @ gObjectEventPic_AquaMemberF frame slice
	.globl gObjectEventFrame_JP_084ABD0C
gObjectEventFrame_JP_084ABD0C: @ 0x084ABD0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 118; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/aqua_member_f.4bpp", 0x700, 0x100 @ gObjectEventPic_AquaMemberF frame slice
	.globl gObjectEventFrame_JP_084ABE0C
gObjectEventFrame_JP_084ABE0C: @ 0x084ABE0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 118; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/aqua_member_f.4bpp", 0x800, 0x100 @ gObjectEventPic_AquaMemberF frame slice
	.globl gObjectEventFrame_JP_084ABF0C
gObjectEventFrame_JP_084ABF0C: @ 0x084ABF0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 119; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/magma_member_m.4bpp", 0x0, 0x100 @ gObjectEventPic_MagmaMemberM frame slice
	.globl gObjectEventFrame_JP_084AC00C
gObjectEventFrame_JP_084AC00C: @ 0x084AC00C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 119; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/magma_member_m.4bpp", 0x100, 0x100 @ gObjectEventPic_MagmaMemberM frame slice
	.globl gObjectEventFrame_JP_084AC10C
gObjectEventFrame_JP_084AC10C: @ 0x084AC10C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 119; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/magma_member_m.4bpp", 0x200, 0x100 @ gObjectEventPic_MagmaMemberM frame slice
	.globl gObjectEventFrame_JP_084AC20C
gObjectEventFrame_JP_084AC20C: @ 0x084AC20C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 119; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/magma_member_m.4bpp", 0x300, 0x100 @ gObjectEventPic_MagmaMemberM frame slice
	.globl gObjectEventFrame_JP_084AC30C
gObjectEventFrame_JP_084AC30C: @ 0x084AC30C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 119; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/magma_member_m.4bpp", 0x400, 0x100 @ gObjectEventPic_MagmaMemberM frame slice
	.globl gObjectEventFrame_JP_084AC40C
gObjectEventFrame_JP_084AC40C: @ 0x084AC40C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 119; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/magma_member_m.4bpp", 0x500, 0x100 @ gObjectEventPic_MagmaMemberM frame slice
	.globl gObjectEventFrame_JP_084AC50C
gObjectEventFrame_JP_084AC50C: @ 0x084AC50C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 119; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/magma_member_m.4bpp", 0x600, 0x100 @ gObjectEventPic_MagmaMemberM frame slice
	.globl gObjectEventFrame_JP_084AC60C
gObjectEventFrame_JP_084AC60C: @ 0x084AC60C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 119; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/magma_member_m.4bpp", 0x700, 0x100 @ gObjectEventPic_MagmaMemberM frame slice
	.globl gObjectEventFrame_JP_084AC70C
gObjectEventFrame_JP_084AC70C: @ 0x084AC70C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 119; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/magma_member_m.4bpp", 0x800, 0x100 @ gObjectEventPic_MagmaMemberM frame slice
	.globl gObjectEventFrame_JP_084AC80C
gObjectEventFrame_JP_084AC80C: @ 0x084AC80C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 120; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/magma_member_f.4bpp", 0x0, 0x100 @ gObjectEventPic_MagmaMemberF frame slice
	.globl gObjectEventFrame_JP_084AC90C
gObjectEventFrame_JP_084AC90C: @ 0x084AC90C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 120; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/magma_member_f.4bpp", 0x100, 0x100 @ gObjectEventPic_MagmaMemberF frame slice
	.globl gObjectEventFrame_JP_084ACA0C
gObjectEventFrame_JP_084ACA0C: @ 0x084ACA0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 120; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/magma_member_f.4bpp", 0x200, 0x100 @ gObjectEventPic_MagmaMemberF frame slice
	.globl gObjectEventFrame_JP_084ACB0C
gObjectEventFrame_JP_084ACB0C: @ 0x084ACB0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 120; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/magma_member_f.4bpp", 0x300, 0x100 @ gObjectEventPic_MagmaMemberF frame slice
	.globl gObjectEventFrame_JP_084ACC0C
gObjectEventFrame_JP_084ACC0C: @ 0x084ACC0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 120; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/magma_member_f.4bpp", 0x400, 0x100 @ gObjectEventPic_MagmaMemberF frame slice
	.globl gObjectEventFrame_JP_084ACD0C
gObjectEventFrame_JP_084ACD0C: @ 0x084ACD0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 120; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/magma_member_f.4bpp", 0x500, 0x100 @ gObjectEventPic_MagmaMemberF frame slice
	.globl gObjectEventFrame_JP_084ACE0C
gObjectEventFrame_JP_084ACE0C: @ 0x084ACE0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 120; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/magma_member_f.4bpp", 0x600, 0x100 @ gObjectEventPic_MagmaMemberF frame slice
	.globl gObjectEventFrame_JP_084ACF0C
gObjectEventFrame_JP_084ACF0C: @ 0x084ACF0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 120; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/magma_member_f.4bpp", 0x700, 0x100 @ gObjectEventPic_MagmaMemberF frame slice
	.globl gObjectEventFrame_JP_084AD00C
gObjectEventFrame_JP_084AD00C: @ 0x084AD00C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 120; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/magma_member_f.4bpp", 0x800, 0x100 @ gObjectEventPic_MagmaMemberF frame slice
	.globl gObjectEventFrame_JP_084AD10C
gObjectEventFrame_JP_084AD10C: @ 0x084AD10C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 121; size=0x100
	.incbin "build/graphics/object_events/pics/people/elite_four/sidney.4bpp", 0x0, 0x100 @ gObjectEventPic_Sidney frame slice
	.globl gObjectEventFrame_JP_084AD20C
gObjectEventFrame_JP_084AD20C: @ 0x084AD20C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 121; size=0x100
	.incbin "build/graphics/object_events/pics/people/elite_four/sidney.4bpp", 0x100, 0x100 @ gObjectEventPic_Sidney frame slice
	.globl gObjectEventFrame_JP_084AD30C
gObjectEventFrame_JP_084AD30C: @ 0x084AD30C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 121; size=0x100
	.incbin "build/graphics/object_events/pics/people/elite_four/sidney.4bpp", 0x200, 0x100 @ gObjectEventPic_Sidney frame slice
	.globl gObjectEventFrame_JP_084AD40C
gObjectEventFrame_JP_084AD40C: @ 0x084AD40C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 122; size=0x100
	.incbin "build/graphics/object_events/pics/people/elite_four/phoebe.4bpp", 0x0, 0x100 @ gObjectEventPic_Phoebe frame slice
	.globl gObjectEventFrame_JP_084AD50C
gObjectEventFrame_JP_084AD50C: @ 0x084AD50C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 122; size=0x100
	.incbin "build/graphics/object_events/pics/people/elite_four/phoebe.4bpp", 0x100, 0x100 @ gObjectEventPic_Phoebe frame slice
	.globl gObjectEventFrame_JP_084AD60C
gObjectEventFrame_JP_084AD60C: @ 0x084AD60C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 122; size=0x100
	.incbin "build/graphics/object_events/pics/people/elite_four/phoebe.4bpp", 0x200, 0x100 @ gObjectEventPic_Phoebe frame slice
	.globl gObjectEventFrame_JP_084AD70C
gObjectEventFrame_JP_084AD70C: @ 0x084AD70C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 123; size=0x100
	.incbin "build/graphics/object_events/pics/people/elite_four/glacia.4bpp", 0x0, 0x100 @ gObjectEventPic_Glacia frame slice
	.globl gObjectEventFrame_JP_084AD80C
gObjectEventFrame_JP_084AD80C: @ 0x084AD80C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 123; size=0x100
	.incbin "build/graphics/object_events/pics/people/elite_four/glacia.4bpp", 0x100, 0x100 @ gObjectEventPic_Glacia frame slice
	.globl gObjectEventFrame_JP_084AD90C
gObjectEventFrame_JP_084AD90C: @ 0x084AD90C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 123; size=0x100
	.incbin "build/graphics/object_events/pics/people/elite_four/glacia.4bpp", 0x200, 0x100 @ gObjectEventPic_Glacia frame slice
	.globl gObjectEventFrame_JP_084ADA0C
gObjectEventFrame_JP_084ADA0C: @ 0x084ADA0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 124; size=0x100
	.incbin "build/graphics/object_events/pics/people/elite_four/drake.4bpp", 0x0, 0x100 @ gObjectEventPic_Drake frame slice
	.globl gObjectEventFrame_JP_084ADB0C
gObjectEventFrame_JP_084ADB0C: @ 0x084ADB0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 124; size=0x100
	.incbin "build/graphics/object_events/pics/people/elite_four/drake.4bpp", 0x100, 0x100 @ gObjectEventPic_Drake frame slice
	.globl gObjectEventFrame_JP_084ADC0C
gObjectEventFrame_JP_084ADC0C: @ 0x084ADC0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 124; size=0x100
	.incbin "build/graphics/object_events/pics/people/elite_four/drake.4bpp", 0x200, 0x100 @ gObjectEventPic_Drake frame slice
	.globl gObjectEventFrame_JP_084ADD0C
gObjectEventFrame_JP_084ADD0C: @ 0x084ADD0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 125; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/roxanne.4bpp", 0x0, 0x100 @ gObjectEventPic_Roxanne frame slice
	.globl gObjectEventFrame_JP_084ADE0C
gObjectEventFrame_JP_084ADE0C: @ 0x084ADE0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 125; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/roxanne.4bpp", 0x100, 0x100 @ gObjectEventPic_Roxanne frame slice
	.globl gObjectEventFrame_JP_084ADF0C
gObjectEventFrame_JP_084ADF0C: @ 0x084ADF0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 125; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/roxanne.4bpp", 0x200, 0x100 @ gObjectEventPic_Roxanne frame slice
	.globl gObjectEventFrame_JP_084AE00C
gObjectEventFrame_JP_084AE00C: @ 0x084AE00C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 126; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/brawly.4bpp", 0x0, 0x100 @ gObjectEventPic_Brawly frame slice
	.globl gObjectEventFrame_JP_084AE10C
gObjectEventFrame_JP_084AE10C: @ 0x084AE10C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 126; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/brawly.4bpp", 0x100, 0x100 @ gObjectEventPic_Brawly frame slice
	.globl gObjectEventFrame_JP_084AE20C
gObjectEventFrame_JP_084AE20C: @ 0x084AE20C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 126; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/brawly.4bpp", 0x200, 0x100 @ gObjectEventPic_Brawly frame slice
	.globl gObjectEventFrame_JP_084AE30C
gObjectEventFrame_JP_084AE30C: @ 0x084AE30C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 127; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/wattson.4bpp", 0x0, 0x100 @ gObjectEventPic_Wattson frame slice
	.globl gObjectEventFrame_JP_084AE40C
gObjectEventFrame_JP_084AE40C: @ 0x084AE40C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 127; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/wattson.4bpp", 0x100, 0x100 @ gObjectEventPic_Wattson frame slice
	.globl gObjectEventFrame_JP_084AE50C
gObjectEventFrame_JP_084AE50C: @ 0x084AE50C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 127; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/wattson.4bpp", 0x200, 0x100 @ gObjectEventPic_Wattson frame slice
	.globl gObjectEventFrame_JP_084AE60C
gObjectEventFrame_JP_084AE60C: @ 0x084AE60C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 128; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/flannery.4bpp", 0x0, 0x100 @ gObjectEventPic_Flannery frame slice
	.globl gObjectEventFrame_JP_084AE70C
gObjectEventFrame_JP_084AE70C: @ 0x084AE70C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 128; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/flannery.4bpp", 0x100, 0x100 @ gObjectEventPic_Flannery frame slice
	.globl gObjectEventFrame_JP_084AE80C
gObjectEventFrame_JP_084AE80C: @ 0x084AE80C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 128; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/flannery.4bpp", 0x200, 0x100 @ gObjectEventPic_Flannery frame slice
	.globl gObjectEventFrame_JP_084AE90C
gObjectEventFrame_JP_084AE90C: @ 0x084AE90C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 129; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/norman.4bpp", 0x0, 0x100 @ gObjectEventPic_Norman frame slice
	.globl gObjectEventFrame_JP_084AEA0C
gObjectEventFrame_JP_084AEA0C: @ 0x084AEA0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 129; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/norman.4bpp", 0x100, 0x100 @ gObjectEventPic_Norman frame slice
	.globl gObjectEventFrame_JP_084AEB0C
gObjectEventFrame_JP_084AEB0C: @ 0x084AEB0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 129; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/norman.4bpp", 0x200, 0x100 @ gObjectEventPic_Norman frame slice
	.globl gObjectEventFrame_JP_084AEC0C
gObjectEventFrame_JP_084AEC0C: @ 0x084AEC0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 129; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/norman.4bpp", 0x300, 0x100 @ gObjectEventPic_Norman frame slice
	.globl gObjectEventFrame_JP_084AED0C
gObjectEventFrame_JP_084AED0C: @ 0x084AED0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 129; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/norman.4bpp", 0x400, 0x100 @ gObjectEventPic_Norman frame slice
	.globl gObjectEventFrame_JP_084AEE0C
gObjectEventFrame_JP_084AEE0C: @ 0x084AEE0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 129; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/norman.4bpp", 0x500, 0x100 @ gObjectEventPic_Norman frame slice
	.globl gObjectEventFrame_JP_084AEF0C
gObjectEventFrame_JP_084AEF0C: @ 0x084AEF0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 129; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/norman.4bpp", 0x600, 0x100 @ gObjectEventPic_Norman frame slice
	.globl gObjectEventFrame_JP_084AF00C
gObjectEventFrame_JP_084AF00C: @ 0x084AF00C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 129; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/norman.4bpp", 0x700, 0x100 @ gObjectEventPic_Norman frame slice
	.globl gObjectEventFrame_JP_084AF10C
gObjectEventFrame_JP_084AF10C: @ 0x084AF10C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 129; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/norman.4bpp", 0x800, 0x100 @ gObjectEventPic_Norman frame slice
	.globl gObjectEventFrame_JP_084AF20C
gObjectEventFrame_JP_084AF20C: @ 0x084AF20C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 130; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/winona.4bpp", 0x0, 0x100 @ gObjectEventPic_Winona frame slice
	.globl gObjectEventFrame_JP_084AF30C
gObjectEventFrame_JP_084AF30C: @ 0x084AF30C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 130; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/winona.4bpp", 0x100, 0x100 @ gObjectEventPic_Winona frame slice
	.globl gObjectEventFrame_JP_084AF40C
gObjectEventFrame_JP_084AF40C: @ 0x084AF40C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 130; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/winona.4bpp", 0x200, 0x100 @ gObjectEventPic_Winona frame slice
	.globl gObjectEventFrame_JP_084AF50C
gObjectEventFrame_JP_084AF50C: @ 0x084AF50C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 131; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/liza.4bpp", 0x0, 0x100 @ gObjectEventPic_Liza frame slice
	.globl gObjectEventFrame_JP_084AF60C
gObjectEventFrame_JP_084AF60C: @ 0x084AF60C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 131; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/liza.4bpp", 0x100, 0x100 @ gObjectEventPic_Liza frame slice
	.globl gObjectEventFrame_JP_084AF70C
gObjectEventFrame_JP_084AF70C: @ 0x084AF70C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 131; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/liza.4bpp", 0x200, 0x100 @ gObjectEventPic_Liza frame slice
	.globl gObjectEventFrame_JP_084AF80C
gObjectEventFrame_JP_084AF80C: @ 0x084AF80C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 132; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/tate.4bpp", 0x0, 0x100 @ gObjectEventPic_Tate frame slice
	.globl gObjectEventFrame_JP_084AF90C
gObjectEventFrame_JP_084AF90C: @ 0x084AF90C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 132; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/tate.4bpp", 0x100, 0x100 @ gObjectEventPic_Tate frame slice
	.globl gObjectEventFrame_JP_084AFA0C
gObjectEventFrame_JP_084AFA0C: @ 0x084AFA0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 132; size=0x100
	.incbin "build/graphics/object_events/pics/people/gym_leaders/tate.4bpp", 0x200, 0x100 @ gObjectEventPic_Tate frame slice
	.globl gObjectEventFrame_JP_084AFB0C
gObjectEventFrame_JP_084AFB0C: @ 0x084AFB0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 133; size=0x100
	.incbin "build/graphics/object_events/pics/people/wallace.4bpp", 0x0, 0x100 @ gObjectEventPic_Wallace frame slice
	.globl gObjectEventFrame_JP_084AFC0C
gObjectEventFrame_JP_084AFC0C: @ 0x084AFC0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 133; size=0x100
	.incbin "build/graphics/object_events/pics/people/wallace.4bpp", 0x100, 0x100 @ gObjectEventPic_Wallace frame slice
	.globl gObjectEventFrame_JP_084AFD0C
gObjectEventFrame_JP_084AFD0C: @ 0x084AFD0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 133; size=0x100
	.incbin "build/graphics/object_events/pics/people/wallace.4bpp", 0x200, 0x100 @ gObjectEventPic_Wallace frame slice
	.globl gObjectEventFrame_JP_084AFE0C
gObjectEventFrame_JP_084AFE0C: @ 0x084AFE0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 133; size=0x100
	.incbin "build/graphics/object_events/pics/people/wallace.4bpp", 0x300, 0x100 @ gObjectEventPic_Wallace frame slice
	.globl gObjectEventFrame_JP_084AFF0C
gObjectEventFrame_JP_084AFF0C: @ 0x084AFF0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 133; size=0x100
	.incbin "build/graphics/object_events/pics/people/wallace.4bpp", 0x400, 0x100 @ gObjectEventPic_Wallace frame slice
	.globl gObjectEventFrame_JP_084B000C
gObjectEventFrame_JP_084B000C: @ 0x084B000C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 133; size=0x100
	.incbin "build/graphics/object_events/pics/people/wallace.4bpp", 0x500, 0x100 @ gObjectEventPic_Wallace frame slice
	.globl gObjectEventFrame_JP_084B010C
gObjectEventFrame_JP_084B010C: @ 0x084B010C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 133; size=0x100
	.incbin "build/graphics/object_events/pics/people/wallace.4bpp", 0x600, 0x100 @ gObjectEventPic_Wallace frame slice
	.globl gObjectEventFrame_JP_084B020C
gObjectEventFrame_JP_084B020C: @ 0x084B020C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 133; size=0x100
	.incbin "build/graphics/object_events/pics/people/wallace.4bpp", 0x700, 0x100 @ gObjectEventPic_Wallace frame slice
	.globl gObjectEventFrame_JP_084B030C
gObjectEventFrame_JP_084B030C: @ 0x084B030C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 133; size=0x100
	.incbin "build/graphics/object_events/pics/people/wallace.4bpp", 0x800, 0x100 @ gObjectEventPic_Wallace frame slice
	.globl gObjectEventFrame_JP_084B040C
gObjectEventFrame_JP_084B040C: @ 0x084B040C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 134; size=0x100
	.incbin "build/graphics/object_events/pics/people/steven.4bpp", 0x0, 0x100 @ gObjectEventPic_Steven frame slice
	.globl gObjectEventFrame_JP_084B050C
gObjectEventFrame_JP_084B050C: @ 0x084B050C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 134; size=0x100
	.incbin "build/graphics/object_events/pics/people/steven.4bpp", 0x100, 0x100 @ gObjectEventPic_Steven frame slice
	.globl gObjectEventFrame_JP_084B060C
gObjectEventFrame_JP_084B060C: @ 0x084B060C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 134; size=0x100
	.incbin "build/graphics/object_events/pics/people/steven.4bpp", 0x200, 0x100 @ gObjectEventPic_Steven frame slice
	.globl gObjectEventFrame_JP_084B070C
gObjectEventFrame_JP_084B070C: @ 0x084B070C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 134; size=0x100
	.incbin "build/graphics/object_events/pics/people/steven.4bpp", 0x300, 0x100 @ gObjectEventPic_Steven frame slice
	.globl gObjectEventFrame_JP_084B080C
gObjectEventFrame_JP_084B080C: @ 0x084B080C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 134; size=0x100
	.incbin "build/graphics/object_events/pics/people/steven.4bpp", 0x400, 0x100 @ gObjectEventPic_Steven frame slice
	.globl gObjectEventFrame_JP_084B090C
gObjectEventFrame_JP_084B090C: @ 0x084B090C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 134; size=0x100
	.incbin "build/graphics/object_events/pics/people/steven.4bpp", 0x500, 0x100 @ gObjectEventPic_Steven frame slice
	.globl gObjectEventFrame_JP_084B0A0C
gObjectEventFrame_JP_084B0A0C: @ 0x084B0A0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 134; size=0x100
	.incbin "build/graphics/object_events/pics/people/steven.4bpp", 0x600, 0x100 @ gObjectEventPic_Steven frame slice
	.globl gObjectEventFrame_JP_084B0B0C
gObjectEventFrame_JP_084B0B0C: @ 0x084B0B0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 134; size=0x100
	.incbin "build/graphics/object_events/pics/people/steven.4bpp", 0x700, 0x100 @ gObjectEventPic_Steven frame slice
	.globl gObjectEventFrame_JP_084B0C0C
gObjectEventFrame_JP_084B0C0C: @ 0x084B0C0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 134; size=0x100
	.incbin "build/graphics/object_events/pics/people/steven.4bpp", 0x800, 0x100 @ gObjectEventPic_Steven frame slice
	.globl gObjectEventFrame_JP_084B0D0C
gObjectEventFrame_JP_084B0D0C: @ 0x084B0D0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 135; size=0x100
	.incbin "build/graphics/object_events/pics/people/wally.4bpp", 0x0, 0x100 @ gObjectEventPic_Wally frame slice
	.globl gObjectEventFrame_JP_084B0E0C
gObjectEventFrame_JP_084B0E0C: @ 0x084B0E0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 135; size=0x100
	.incbin "build/graphics/object_events/pics/people/wally.4bpp", 0x100, 0x100 @ gObjectEventPic_Wally frame slice
	.globl gObjectEventFrame_JP_084B0F0C
gObjectEventFrame_JP_084B0F0C: @ 0x084B0F0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 135; size=0x100
	.incbin "build/graphics/object_events/pics/people/wally.4bpp", 0x200, 0x100 @ gObjectEventPic_Wally frame slice
	.globl gObjectEventFrame_JP_084B100C
gObjectEventFrame_JP_084B100C: @ 0x084B100C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 135; size=0x100
	.incbin "build/graphics/object_events/pics/people/wally.4bpp", 0x300, 0x100 @ gObjectEventPic_Wally frame slice
	.globl gObjectEventFrame_JP_084B110C
gObjectEventFrame_JP_084B110C: @ 0x084B110C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 135; size=0x100
	.incbin "build/graphics/object_events/pics/people/wally.4bpp", 0x400, 0x100 @ gObjectEventPic_Wally frame slice
	.globl gObjectEventFrame_JP_084B120C
gObjectEventFrame_JP_084B120C: @ 0x084B120C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 135; size=0x100
	.incbin "build/graphics/object_events/pics/people/wally.4bpp", 0x500, 0x100 @ gObjectEventPic_Wally frame slice
	.globl gObjectEventFrame_JP_084B130C
gObjectEventFrame_JP_084B130C: @ 0x084B130C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 135; size=0x100
	.incbin "build/graphics/object_events/pics/people/wally.4bpp", 0x600, 0x100 @ gObjectEventPic_Wally frame slice
	.globl gObjectEventFrame_JP_084B140C
gObjectEventFrame_JP_084B140C: @ 0x084B140C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 135; size=0x100
	.incbin "build/graphics/object_events/pics/people/wally.4bpp", 0x700, 0x100 @ gObjectEventPic_Wally frame slice
	.globl gObjectEventFrame_JP_084B150C
gObjectEventFrame_JP_084B150C: @ 0x084B150C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 135; size=0x100
	.incbin "build/graphics/object_events/pics/people/wally.4bpp", 0x800, 0x100 @ gObjectEventPic_Wally frame slice
	.globl gObjectEventFrame_JP_084B160C
gObjectEventFrame_JP_084B160C: @ 0x084B160C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 136; size=0x80
	.incbin "build/graphics/object_events/pics/people/rs_little_boy.4bpp", 0x0, 0x80 @ gObjectEventPic_RubySapphireLittleBoy frame slice
	.globl gObjectEventFrame_JP_084B168C
gObjectEventFrame_JP_084B168C: @ 0x084B168C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 136; size=0x80
	.incbin "build/graphics/object_events/pics/people/rs_little_boy.4bpp", 0x80, 0x80 @ gObjectEventPic_RubySapphireLittleBoy frame slice
	.globl gObjectEventFrame_JP_084B170C
gObjectEventFrame_JP_084B170C: @ 0x084B170C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 136; size=0x80
	.incbin "build/graphics/object_events/pics/people/rs_little_boy.4bpp", 0x100, 0x80 @ gObjectEventPic_RubySapphireLittleBoy frame slice
	.globl gObjectEventFrame_JP_084B178C
gObjectEventFrame_JP_084B178C: @ 0x084B178C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 136; size=0x80
	.incbin "build/graphics/object_events/pics/people/rs_little_boy.4bpp", 0x180, 0x80 @ gObjectEventPic_RubySapphireLittleBoy frame slice
	.globl gObjectEventFrame_JP_084B180C
gObjectEventFrame_JP_084B180C: @ 0x084B180C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 136; size=0x80
	.incbin "build/graphics/object_events/pics/people/rs_little_boy.4bpp", 0x200, 0x80 @ gObjectEventPic_RubySapphireLittleBoy frame slice
	.globl gObjectEventFrame_JP_084B188C
gObjectEventFrame_JP_084B188C: @ 0x084B188C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 136; size=0x80
	.incbin "build/graphics/object_events/pics/people/rs_little_boy.4bpp", 0x280, 0x80 @ gObjectEventPic_RubySapphireLittleBoy frame slice
	.globl gObjectEventFrame_JP_084B190C
gObjectEventFrame_JP_084B190C: @ 0x084B190C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 136; size=0x80
	.incbin "build/graphics/object_events/pics/people/rs_little_boy.4bpp", 0x300, 0x80 @ gObjectEventPic_RubySapphireLittleBoy frame slice
	.globl gObjectEventFrame_JP_084B198C
gObjectEventFrame_JP_084B198C: @ 0x084B198C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 136; size=0x80
	.incbin "build/graphics/object_events/pics/people/rs_little_boy.4bpp", 0x380, 0x80 @ gObjectEventPic_RubySapphireLittleBoy frame slice
	.globl gObjectEventFrame_JP_084B1A0C
gObjectEventFrame_JP_084B1A0C: @ 0x084B1A0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 136; size=0x80
	.incbin "build/graphics/object_events/pics/people/rs_little_boy.4bpp", 0x400, 0x80 @ gObjectEventPic_RubySapphireLittleBoy frame slice
	.globl gObjectEventFrame_JP_084B1A8C
gObjectEventFrame_JP_084B1A8C: @ 0x084B1A8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 139; size=0x100
	.incbin "build/graphics/object_events/pics/people/hot_springs_old_woman.4bpp", 0x0, 0x100 @ gObjectEventPic_HotSpringsOldWoman frame slice
	.globl gObjectEventFrame_JP_084B1B8C
gObjectEventFrame_JP_084B1B8C: @ 0x084B1B8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 139; size=0x100
	.incbin "build/graphics/object_events/pics/people/hot_springs_old_woman.4bpp", 0x100, 0x100 @ gObjectEventPic_HotSpringsOldWoman frame slice
	.globl gObjectEventFrame_JP_084B1C8C
gObjectEventFrame_JP_084B1C8C: @ 0x084B1C8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 139; size=0x100
	.incbin "build/graphics/object_events/pics/people/hot_springs_old_woman.4bpp", 0x200, 0x100 @ gObjectEventPic_HotSpringsOldWoman frame slice
	.globl gObjectEventFrame_JP_084B1D8C
gObjectEventFrame_JP_084B1D8C: @ 0x084B1D8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 139; size=0x100
	.incbin "build/graphics/object_events/pics/people/hot_springs_old_woman.4bpp", 0x300, 0x100 @ gObjectEventPic_HotSpringsOldWoman frame slice
	.globl gObjectEventFrame_JP_084B1E8C
gObjectEventFrame_JP_084B1E8C: @ 0x084B1E8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 139; size=0x100
	.incbin "build/graphics/object_events/pics/people/hot_springs_old_woman.4bpp", 0x400, 0x100 @ gObjectEventPic_HotSpringsOldWoman frame slice
	.globl gObjectEventFrame_JP_084B1F8C
gObjectEventFrame_JP_084B1F8C: @ 0x084B1F8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 139; size=0x100
	.incbin "build/graphics/object_events/pics/people/hot_springs_old_woman.4bpp", 0x500, 0x100 @ gObjectEventPic_HotSpringsOldWoman frame slice
	.globl gObjectEventFrame_JP_084B208C
gObjectEventFrame_JP_084B208C: @ 0x084B208C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 139; size=0x100
	.incbin "build/graphics/object_events/pics/people/hot_springs_old_woman.4bpp", 0x600, 0x100 @ gObjectEventPic_HotSpringsOldWoman frame slice
	.globl gObjectEventFrame_JP_084B218C
gObjectEventFrame_JP_084B218C: @ 0x084B218C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 139; size=0x100
	.incbin "build/graphics/object_events/pics/people/hot_springs_old_woman.4bpp", 0x700, 0x100 @ gObjectEventPic_HotSpringsOldWoman frame slice
	.globl gObjectEventFrame_JP_084B228C
gObjectEventFrame_JP_084B228C: @ 0x084B228C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 139; size=0x100
	.incbin "build/graphics/object_events/pics/people/hot_springs_old_woman.4bpp", 0x800, 0x100 @ gObjectEventPic_HotSpringsOldWoman frame slice
	.globl gObjectEventFrame_JP_084B238C
gObjectEventFrame_JP_084B238C: @ 0x084B238C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 187, 188; size=0x200
	.incbin "build/graphics/object_events/pics/pokemon/latias_latios.4bpp", 0x0, 0x200 @ gObjectEventPic_LatiasLatios frame slice
	.globl gObjectEventFrame_JP_084B258C
gObjectEventFrame_JP_084B258C: @ 0x084B258C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 187, 188; size=0x200
	.incbin "build/graphics/object_events/pics/pokemon/latias_latios.4bpp", 0x200, 0x200 @ gObjectEventPic_LatiasLatios frame slice
	.globl gObjectEventFrame_JP_084B278C
gObjectEventFrame_JP_084B278C: @ 0x084B278C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 187, 188; size=0x200
	.incbin "build/graphics/object_events/pics/pokemon/latias_latios.4bpp", 0x400, 0x200 @ gObjectEventPic_LatiasLatios frame slice
	.globl gObjectEventFrame_JP_084B298C
gObjectEventFrame_JP_084B298C: @ 0x084B298C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 189; size=0x100
	.incbin "build/graphics/object_events/pics/people/gameboy_kid.4bpp", 0x0, 0x100 @ gObjectEventPic_GameboyKid frame slice
	.globl gObjectEventFrame_JP_084B2A8C
gObjectEventFrame_JP_084B2A8C: @ 0x084B2A8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 189; size=0x100
	.incbin "build/graphics/object_events/pics/people/gameboy_kid.4bpp", 0x100, 0x100 @ gObjectEventPic_GameboyKid frame slice
	.globl gObjectEventFrame_JP_084B2B8C
gObjectEventFrame_JP_084B2B8C: @ 0x084B2B8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 189; size=0x100
	.incbin "build/graphics/object_events/pics/people/gameboy_kid.4bpp", 0x200, 0x100 @ gObjectEventPic_GameboyKid frame slice
	.globl gObjectEventFrame_JP_084B2C8C
gObjectEventFrame_JP_084B2C8C: @ 0x084B2C8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 190; size=0x100
	.incbin "build/graphics/object_events/pics/people/contest_judge.4bpp", 0x0, 0x100 @ gObjectEventPic_ContestJudge frame slice
	.globl gObjectEventFrame_JP_084B2D8C
gObjectEventFrame_JP_084B2D8C: @ 0x084B2D8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 190; size=0x100
	.incbin "build/graphics/object_events/pics/people/contest_judge.4bpp", 0x100, 0x100 @ gObjectEventPic_ContestJudge frame slice
	.globl gObjectEventFrame_JP_084B2E8C
gObjectEventFrame_JP_084B2E8C: @ 0x084B2E8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 190; size=0x100
	.incbin "build/graphics/object_events/pics/people/contest_judge.4bpp", 0x200, 0x100 @ gObjectEventPic_ContestJudge frame slice
	.globl gObjectEventFrame_JP_084B2F8C
gObjectEventFrame_JP_084B2F8C: @ 0x084B2F8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 190; size=0x100
	.incbin "build/graphics/object_events/pics/people/contest_judge.4bpp", 0x300, 0x100 @ gObjectEventPic_ContestJudge frame slice
	.globl gObjectEventFrame_JP_084B308C
gObjectEventFrame_JP_084B308C: @ 0x084B308C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 190; size=0x100
	.incbin "build/graphics/object_events/pics/people/contest_judge.4bpp", 0x400, 0x100 @ gObjectEventPic_ContestJudge frame slice
	.globl gObjectEventFrame_JP_084B318C
gObjectEventFrame_JP_084B318C: @ 0x084B318C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 190; size=0x100
	.incbin "build/graphics/object_events/pics/people/contest_judge.4bpp", 0x500, 0x100 @ gObjectEventPic_ContestJudge frame slice
	.globl gObjectEventFrame_JP_084B328C
gObjectEventFrame_JP_084B328C: @ 0x084B328C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 190; size=0x100
	.incbin "build/graphics/object_events/pics/people/contest_judge.4bpp", 0x600, 0x100 @ gObjectEventPic_ContestJudge frame slice
	.globl gObjectEventFrame_JP_084B338C
gObjectEventFrame_JP_084B338C: @ 0x084B338C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 190; size=0x100
	.incbin "build/graphics/object_events/pics/people/contest_judge.4bpp", 0x700, 0x100 @ gObjectEventPic_ContestJudge frame slice
	.globl gObjectEventFrame_JP_084B348C
gObjectEventFrame_JP_084B348C: @ 0x084B348C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 190; size=0x100
	.incbin "build/graphics/object_events/pics/people/contest_judge.4bpp", 0x800, 0x100 @ gObjectEventPic_ContestJudge frame slice
	.globl gObjectEventFrame_JP_084B358C
gObjectEventFrame_JP_084B358C: @ 0x084B358C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 195; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/archie.4bpp", 0x0, 0x100 @ gObjectEventPic_Archie frame slice
	.globl gObjectEventFrame_JP_084B368C
gObjectEventFrame_JP_084B368C: @ 0x084B368C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 195; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/archie.4bpp", 0x100, 0x100 @ gObjectEventPic_Archie frame slice
	.globl gObjectEventFrame_JP_084B378C
gObjectEventFrame_JP_084B378C: @ 0x084B378C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 195; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/archie.4bpp", 0x200, 0x100 @ gObjectEventPic_Archie frame slice
	.globl gObjectEventFrame_JP_084B388C
gObjectEventFrame_JP_084B388C: @ 0x084B388C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 195; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/archie.4bpp", 0x300, 0x100 @ gObjectEventPic_Archie frame slice
	.globl gObjectEventFrame_JP_084B398C
gObjectEventFrame_JP_084B398C: @ 0x084B398C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 195; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/archie.4bpp", 0x400, 0x100 @ gObjectEventPic_Archie frame slice
	.globl gObjectEventFrame_JP_084B3A8C
gObjectEventFrame_JP_084B3A8C: @ 0x084B3A8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 195; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/archie.4bpp", 0x500, 0x100 @ gObjectEventPic_Archie frame slice
	.globl gObjectEventFrame_JP_084B3B8C
gObjectEventFrame_JP_084B3B8C: @ 0x084B3B8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 195; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/archie.4bpp", 0x600, 0x100 @ gObjectEventPic_Archie frame slice
	.globl gObjectEventFrame_JP_084B3C8C
gObjectEventFrame_JP_084B3C8C: @ 0x084B3C8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 195; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/archie.4bpp", 0x700, 0x100 @ gObjectEventPic_Archie frame slice
	.globl gObjectEventFrame_JP_084B3D8C
gObjectEventFrame_JP_084B3D8C: @ 0x084B3D8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 195; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_aqua/archie.4bpp", 0x800, 0x100 @ gObjectEventPic_Archie frame slice
	.globl gObjectEventFrame_JP_084B3E8C
gObjectEventFrame_JP_084B3E8C: @ 0x084B3E8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 196; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/maxie.4bpp", 0x0, 0x100 @ gObjectEventPic_Maxie frame slice
	.globl gObjectEventFrame_JP_084B3F8C
gObjectEventFrame_JP_084B3F8C: @ 0x084B3F8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 196; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/maxie.4bpp", 0x100, 0x100 @ gObjectEventPic_Maxie frame slice
	.globl gObjectEventFrame_JP_084B408C
gObjectEventFrame_JP_084B408C: @ 0x084B408C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 196; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/maxie.4bpp", 0x200, 0x100 @ gObjectEventPic_Maxie frame slice
	.globl gObjectEventFrame_JP_084B418C
gObjectEventFrame_JP_084B418C: @ 0x084B418C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 196; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/maxie.4bpp", 0x300, 0x100 @ gObjectEventPic_Maxie frame slice
	.globl gObjectEventFrame_JP_084B428C
gObjectEventFrame_JP_084B428C: @ 0x084B428C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 196; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/maxie.4bpp", 0x400, 0x100 @ gObjectEventPic_Maxie frame slice
	.globl gObjectEventFrame_JP_084B438C
gObjectEventFrame_JP_084B438C: @ 0x084B438C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 196; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/maxie.4bpp", 0x500, 0x100 @ gObjectEventPic_Maxie frame slice
	.globl gObjectEventFrame_JP_084B448C
gObjectEventFrame_JP_084B448C: @ 0x084B448C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 196; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/maxie.4bpp", 0x600, 0x100 @ gObjectEventPic_Maxie frame slice
	.globl gObjectEventFrame_JP_084B458C
gObjectEventFrame_JP_084B458C: @ 0x084B458C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 196; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/maxie.4bpp", 0x700, 0x100 @ gObjectEventPic_Maxie frame slice
	.globl gObjectEventFrame_JP_084B468C
gObjectEventFrame_JP_084B468C: @ 0x084B468C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 196; size=0x100
	.incbin "build/graphics/object_events/pics/people/team_magma/maxie.4bpp", 0x800, 0x100 @ gObjectEventPic_Maxie frame slice
	.globl gObjectEventFrame_JP_084B478C
gObjectEventFrame_JP_084B478C: @ 0x084B478C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 197, 205; size=0x200
	.incbin "build/graphics/object_events/pics/pokemon/kyogre.4bpp", 0x0, 0x200 @ gObjectEventPic_Kyogre frame slice
	.globl gObjectEventFrame_JP_084B498C
gObjectEventFrame_JP_084B498C: @ 0x084B498C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 197, 205; size=0x200
	.incbin "build/graphics/object_events/pics/pokemon/kyogre.4bpp", 0x200, 0x200 @ gObjectEventPic_Kyogre frame slice
	.globl gObjectEventFrame_JP_084B4B8C
gObjectEventFrame_JP_084B4B8C: @ 0x084B4B8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 221; size=0x200
	.incbin "build/graphics/object_events/pics/pokemon/kyogre.4bpp", 0x400, 0x200 @ gObjectEventPic_Kyogre frame slice
	.globl gObjectEventFrame_JP_084B4D8C
gObjectEventFrame_JP_084B4D8C: @ 0x084B4D8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 221; size=0x200
	.incbin "build/graphics/object_events/pics/pokemon/kyogre.4bpp", 0x600, 0x200 @ gObjectEventPic_Kyogre frame slice
	.globl gObjectEventFrame_JP_084B4F8C
gObjectEventFrame_JP_084B4F8C: @ 0x084B4F8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 198, 206; size=0x200
	.incbin "build/graphics/object_events/pics/pokemon/groudon.4bpp", 0x0, 0x200 @ gObjectEventPic_Groudon frame slice
	.globl gObjectEventFrame_JP_084B518C
gObjectEventFrame_JP_084B518C: @ 0x084B518C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 198, 206; size=0x200
	.incbin "build/graphics/object_events/pics/pokemon/groudon.4bpp", 0x200, 0x200 @ gObjectEventPic_Groudon frame slice
	.globl gObjectEventFrame_JP_084B538C
gObjectEventFrame_JP_084B538C: @ 0x084B538C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 222; size=0x200
	.incbin "build/graphics/object_events/pics/pokemon/groudon.4bpp", 0x400, 0x200 @ gObjectEventPic_Groudon frame slice
	.globl gObjectEventFrame_JP_084B558C
gObjectEventFrame_JP_084B558C: @ 0x084B558C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 222; size=0x200
	.incbin "build/graphics/object_events/pics/pokemon/groudon.4bpp", 0x600, 0x200 @ gObjectEventPic_Groudon frame slice
	.globl gObjectEventFrame_JP_084B578C
gObjectEventFrame_JP_084B578C: @ 0x084B578C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 200, 201, 202; size=0x200
	.incbin "build/graphics/object_events/pics/pokemon/regi.4bpp", 0x0, 0x200 @ gObjectEventPic_Regi frame slice
	.globl gObjectEventFrame_JP_084B598C
gObjectEventFrame_JP_084B598C: @ 0x084B598C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 203; size=0x80
	.incbin "build/graphics/object_events/pics/pokemon/skitty.4bpp", 0x0, 0x80 @ gObjectEventPic_Skitty frame slice
	.globl gObjectEventFrame_JP_084B5A0C
gObjectEventFrame_JP_084B5A0C: @ 0x084B5A0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 203; size=0x80
	.incbin "build/graphics/object_events/pics/pokemon/skitty.4bpp", 0x80, 0x80 @ gObjectEventPic_Skitty frame slice
	.globl gObjectEventFrame_JP_084B5A8C
gObjectEventFrame_JP_084B5A8C: @ 0x084B5A8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 203; size=0x80
	.incbin "build/graphics/object_events/pics/pokemon/skitty.4bpp", 0x100, 0x80 @ gObjectEventPic_Skitty frame slice
	.globl gObjectEventFrame_JP_084B5B0C
gObjectEventFrame_JP_084B5B0C: @ 0x084B5B0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 204, 212; size=0x80
	.incbin "build/graphics/object_events/pics/pokemon/kecleon.4bpp", 0x0, 0x80 @ gObjectEventPic_Kecleon frame slice
	.globl gObjectEventFrame_JP_084B5B8C
gObjectEventFrame_JP_084B5B8C: @ 0x084B5B8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 204, 212; size=0x80
	.incbin "build/graphics/object_events/pics/pokemon/kecleon.4bpp", 0x80, 0x80 @ gObjectEventPic_Kecleon frame slice
	.globl gObjectEventFrame_JP_084B5C0C
gObjectEventFrame_JP_084B5C0C: @ 0x084B5C0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 204, 212; size=0x80
	.incbin "build/graphics/object_events/pics/pokemon/kecleon.4bpp", 0x100, 0x80 @ gObjectEventPic_Kecleon frame slice
	.globl gObjectEventFrame_JP_084B5C8C
gObjectEventFrame_JP_084B5C8C: @ 0x084B5C8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 207; size=0x800
	.incbin "build/graphics/object_events/pics/pokemon/rayquaza.4bpp", 0x0, 0x800 @ gObjectEventPic_Rayquaza frame slice
	.globl gObjectEventFrame_JP_084B648C
gObjectEventFrame_JP_084B648C: @ 0x084B648C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 207; size=0x800
	.incbin "build/graphics/object_events/pics/pokemon/rayquaza.4bpp", 0x800, 0x800 @ gObjectEventPic_Rayquaza frame slice
	.globl gObjectEventFrame_JP_084B6C8C
gObjectEventFrame_JP_084B6C8C: @ 0x084B6C8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 207; size=0x800
	.incbin "build/graphics/object_events/pics/pokemon/rayquaza.4bpp", 0x1000, 0x800 @ gObjectEventPic_Rayquaza frame slice
	.globl gObjectEventFrame_JP_084B748C
gObjectEventFrame_JP_084B748C: @ 0x084B748C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 207; size=0x800
	.incbin "build/graphics/object_events/pics/pokemon/rayquaza.4bpp", 0x1800, 0x800 @ gObjectEventPic_Rayquaza frame slice
	.globl gObjectEventFrame_JP_084B7C8C
gObjectEventFrame_JP_084B7C8C: @ 0x084B7C8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 207; size=0x800
	.incbin "build/graphics/object_events/pics/pokemon/rayquaza.4bpp", 0x2000, 0x800 @ gObjectEventPic_Rayquaza frame slice
	.globl gObjectEventFrame_JP_084B848C
gObjectEventFrame_JP_084B848C: @ 0x084B848C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 41; size=0x800
	.incbin "build/graphics/object_events/pics/pokemon/rayquaza_still.4bpp", 0x0, 0x800 @ gObjectEventPic_RayquazaStill frame slice
	.globl gObjectEventFrame_JP_084B8C8C
gObjectEventFrame_JP_084B8C8C: @ 0x084B8C8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 208; size=0x80
	.incbin "build/graphics/object_events/pics/pokemon/zigzagoon.4bpp", 0x0, 0x80 @ gObjectEventPic_Zigzagoon frame slice
	.globl gObjectEventFrame_JP_084B8D0C
gObjectEventFrame_JP_084B8D0C: @ 0x084B8D0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 208; size=0x80
	.incbin "build/graphics/object_events/pics/pokemon/zigzagoon.4bpp", 0x80, 0x80 @ gObjectEventPic_Zigzagoon frame slice
	.globl gObjectEventFrame_JP_084B8D8C
gObjectEventFrame_JP_084B8D8C: @ 0x084B8D8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 208; size=0x80
	.incbin "build/graphics/object_events/pics/pokemon/zigzagoon.4bpp", 0x100, 0x80 @ gObjectEventPic_Zigzagoon frame slice
	.globl gObjectEventFrame_JP_084B8E0C
gObjectEventFrame_JP_084B8E0C: @ 0x084B8E0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 209; size=0x80
	.incbin "build/graphics/object_events/pics/pokemon/pikachu.4bpp", 0x0, 0x80 @ gObjectEventPic_Pikachu frame slice
	.globl gObjectEventFrame_JP_084B8E8C
gObjectEventFrame_JP_084B8E8C: @ 0x084B8E8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 209; size=0x80
	.incbin "build/graphics/object_events/pics/pokemon/pikachu.4bpp", 0x80, 0x80 @ gObjectEventPic_Pikachu frame slice
	.globl gObjectEventFrame_JP_084B8F0C
gObjectEventFrame_JP_084B8F0C: @ 0x084B8F0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 209; size=0x80
	.incbin "build/graphics/object_events/pics/pokemon/pikachu.4bpp", 0x100, 0x80 @ gObjectEventPic_Pikachu frame slice
	.globl gObjectEventFrame_JP_084B8F8C
gObjectEventFrame_JP_084B8F8C: @ 0x084B8F8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 210; size=0x80
	.incbin "build/graphics/object_events/pics/pokemon/azumarill.4bpp", 0x0, 0x80 @ gObjectEventPic_Azumarill frame slice
	.globl gObjectEventFrame_JP_084B900C
gObjectEventFrame_JP_084B900C: @ 0x084B900C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 210; size=0x80
	.incbin "build/graphics/object_events/pics/pokemon/azumarill.4bpp", 0x80, 0x80 @ gObjectEventPic_Azumarill frame slice
	.globl gObjectEventFrame_JP_084B908C
gObjectEventFrame_JP_084B908C: @ 0x084B908C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 210; size=0x80
	.incbin "build/graphics/object_events/pics/pokemon/azumarill.4bpp", 0x100, 0x80 @ gObjectEventPic_Azumarill frame slice
	.globl gObjectEventFrame_JP_084B910C
gObjectEventFrame_JP_084B910C: @ 0x084B910C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 211; size=0x80
	.incbin "build/graphics/object_events/pics/pokemon/wingull.4bpp", 0x0, 0x80 @ gObjectEventPic_Wingull frame slice
	.globl gObjectEventFrame_JP_084B918C
gObjectEventFrame_JP_084B918C: @ 0x084B918C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 211; size=0x80
	.incbin "build/graphics/object_events/pics/pokemon/wingull.4bpp", 0x80, 0x80 @ gObjectEventPic_Wingull frame slice
	.globl gObjectEventFrame_JP_084B920C
gObjectEventFrame_JP_084B920C: @ 0x084B920C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 211; size=0x80
	.incbin "build/graphics/object_events/pics/pokemon/wingull.4bpp", 0x100, 0x80 @ gObjectEventPic_Wingull frame slice
	.globl gObjectEventFrame_JP_084B928C
gObjectEventFrame_JP_084B928C: @ 0x084B928C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 211; size=0x80
	.incbin "build/graphics/object_events/pics/pokemon/wingull.4bpp", 0x180, 0x80 @ gObjectEventPic_Wingull frame slice
	.globl gObjectEventFrame_JP_084B930C
gObjectEventFrame_JP_084B930C: @ 0x084B930C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 211; size=0x80
	.incbin "build/graphics/object_events/pics/pokemon/wingull.4bpp", 0x200, 0x80 @ gObjectEventPic_Wingull frame slice
	.globl gObjectEventFrame_JP_084B938C
gObjectEventFrame_JP_084B938C: @ 0x084B938C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 211; size=0x80
	.incbin "build/graphics/object_events/pics/pokemon/wingull.4bpp", 0x280, 0x80 @ gObjectEventPic_Wingull frame slice
	.globl gObjectEventFrame_JP_084B940C
gObjectEventFrame_JP_084B940C: @ 0x084B940C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 213; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_m_swimming.4bpp", 0x0, 0x80 @ gObjectEventPic_TuberMSwimming frame slice
	.globl gObjectEventFrame_JP_084B948C
gObjectEventFrame_JP_084B948C: @ 0x084B948C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 213; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_m_swimming.4bpp", 0x80, 0x80 @ gObjectEventPic_TuberMSwimming frame slice
	.globl gObjectEventFrame_JP_084B950C
gObjectEventFrame_JP_084B950C: @ 0x084B950C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 213; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_m_swimming.4bpp", 0x100, 0x80 @ gObjectEventPic_TuberMSwimming frame slice
	.globl gObjectEventFrame_JP_084B958C
gObjectEventFrame_JP_084B958C: @ 0x084B958C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 213; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_m_swimming.4bpp", 0x180, 0x80 @ gObjectEventPic_TuberMSwimming frame slice
	.globl gObjectEventFrame_JP_084B960C
gObjectEventFrame_JP_084B960C: @ 0x084B960C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 213; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_m_swimming.4bpp", 0x200, 0x80 @ gObjectEventPic_TuberMSwimming frame slice
	.globl gObjectEventFrame_JP_084B968C
gObjectEventFrame_JP_084B968C: @ 0x084B968C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 213; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_m_swimming.4bpp", 0x280, 0x80 @ gObjectEventPic_TuberMSwimming frame slice
	.globl gObjectEventFrame_JP_084B970C
gObjectEventFrame_JP_084B970C: @ 0x084B970C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 213; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_m_swimming.4bpp", 0x300, 0x80 @ gObjectEventPic_TuberMSwimming frame slice
	.globl gObjectEventFrame_JP_084B978C
gObjectEventFrame_JP_084B978C: @ 0x084B978C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 213; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_m_swimming.4bpp", 0x380, 0x80 @ gObjectEventPic_TuberMSwimming frame slice
	.globl gObjectEventFrame_JP_084B980C
gObjectEventFrame_JP_084B980C: @ 0x084B980C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 213; size=0x80
	.incbin "build/graphics/object_events/pics/people/tuber_m_swimming.4bpp", 0x400, 0x80 @ gObjectEventPic_TuberMSwimming frame slice
	.globl gObjectEventFrame_JP_084B988C
gObjectEventFrame_JP_084B988C: @ 0x084B988C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 214; size=0x80
	.incbin "build/graphics/object_events/pics/pokemon/azurill.4bpp", 0x0, 0x80 @ gObjectEventPic_Azurill frame slice
	.globl gObjectEventFrame_JP_084B990C
gObjectEventFrame_JP_084B990C: @ 0x084B990C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 214; size=0x80
	.incbin "build/graphics/object_events/pics/pokemon/azurill.4bpp", 0x80, 0x80 @ gObjectEventPic_Azurill frame slice
	.globl gObjectEventFrame_JP_084B998C
gObjectEventFrame_JP_084B998C: @ 0x084B998C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 214; size=0x80
	.incbin "build/graphics/object_events/pics/pokemon/azurill.4bpp", 0x100, 0x80 @ gObjectEventPic_Azurill frame slice
	.globl gObjectEventFrame_JP_084B9A0C
gObjectEventFrame_JP_084B9A0C: @ 0x084B9A0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 215; size=0x100
	.incbin "build/graphics/object_events/pics/people/mom.4bpp", 0x0, 0x100 @ gObjectEventPic_Mom frame slice
	.globl gObjectEventFrame_JP_084B9B0C
gObjectEventFrame_JP_084B9B0C: @ 0x084B9B0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 215; size=0x100
	.incbin "build/graphics/object_events/pics/people/mom.4bpp", 0x100, 0x100 @ gObjectEventPic_Mom frame slice
	.globl gObjectEventFrame_JP_084B9C0C
gObjectEventFrame_JP_084B9C0C: @ 0x084B9C0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 215; size=0x100
	.incbin "build/graphics/object_events/pics/people/mom.4bpp", 0x200, 0x100 @ gObjectEventPic_Mom frame slice
	.globl gObjectEventFrame_JP_084B9D0C
gObjectEventFrame_JP_084B9D0C: @ 0x084B9D0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 215; size=0x100
	.incbin "build/graphics/object_events/pics/people/mom.4bpp", 0x300, 0x100 @ gObjectEventPic_Mom frame slice
	.globl gObjectEventFrame_JP_084B9E0C
gObjectEventFrame_JP_084B9E0C: @ 0x084B9E0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 215; size=0x100
	.incbin "build/graphics/object_events/pics/people/mom.4bpp", 0x400, 0x100 @ gObjectEventPic_Mom frame slice
	.globl gObjectEventFrame_JP_084B9F0C
gObjectEventFrame_JP_084B9F0C: @ 0x084B9F0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 215; size=0x100
	.incbin "build/graphics/object_events/pics/people/mom.4bpp", 0x500, 0x100 @ gObjectEventPic_Mom frame slice
	.globl gObjectEventFrame_JP_084BA00C
gObjectEventFrame_JP_084BA00C: @ 0x084BA00C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 215; size=0x100
	.incbin "build/graphics/object_events/pics/people/mom.4bpp", 0x600, 0x100 @ gObjectEventPic_Mom frame slice
	.globl gObjectEventFrame_JP_084BA10C
gObjectEventFrame_JP_084BA10C: @ 0x084BA10C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 215; size=0x100
	.incbin "build/graphics/object_events/pics/people/mom.4bpp", 0x700, 0x100 @ gObjectEventPic_Mom frame slice
	.globl gObjectEventFrame_JP_084BA20C
gObjectEventFrame_JP_084BA20C: @ 0x084BA20C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 215; size=0x100
	.incbin "build/graphics/object_events/pics/people/mom.4bpp", 0x800, 0x100 @ gObjectEventPic_Mom frame slice
	.globl gObjectEventPal_JP_084BA30C
gObjectEventPal_JP_084BA30C: @ 0x084BA30C
	@ 16-color object-event palette
	.globl gObjectEventGfxUnreferenced_JP_084BA30C
gObjectEventGfxUnreferenced_JP_084BA30C: @ 0x084BA30C
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_GRAPHICS
	@ object-event graphics/palette payload not reached by current graphics-info table
	.byte 0x0E, 0x53, 0x5A, 0x6B, 0x18, 0x63, 0x73, 0x4E, 0x4A, 0x29, 0x94, 0x52, 0x29, 0x25, 0x42, 0x08
	.byte 0x94, 0x52, 0xCE, 0x39, 0xE7, 0x1C, 0x5A, 0x6B, 0x10, 0x42, 0x08, 0x21, 0xFF, 0x7F, 0x00, 0x00
	.globl gObjectEventPal_JP_084BA32C
gObjectEventPal_JP_084BA32C: @ 0x084BA32C
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_PALETTE
	@ 16-color object-event palette
	.byte 0x0E, 0x53, 0x5A, 0x7B, 0x18, 0x73, 0x73, 0x5E, 0x4A, 0x39, 0x94, 0x62, 0x29, 0x35, 0x42, 0x18
	.byte 0x94, 0x62, 0xCE, 0x49, 0xE7, 0x2C, 0x5A, 0x7B, 0x10, 0x52, 0x08, 0x31, 0xFF, 0x7F, 0x00, 0x10
	.globl gObjectEventPal_JP_084BA34C
gObjectEventPal_JP_084BA34C: @ 0x084BA34C
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_PALETTE
	@ 16-color object-event palette
	.byte 0x0E, 0x53, 0x5A, 0x6F, 0x18, 0x63, 0x73, 0x4E, 0x4A, 0x29, 0x94, 0x52, 0x10, 0x42, 0xE7, 0x1C
	.byte 0x10, 0x42, 0x4A, 0x29, 0xA5, 0x14, 0xAD, 0x35, 0x29, 0x25, 0x63, 0x0C, 0xFF, 0x7F, 0x00, 0x00
	.globl gObjectEventPal_JP_084BA36C
gObjectEventPal_JP_084BA36C: @ 0x084BA36C
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_PALETTE
	@ 16-color object-event palette
	.byte 0x0E, 0x53, 0x5A, 0x7F, 0x18, 0x73, 0x73, 0x5E, 0x4A, 0x39, 0x94, 0x62, 0x10, 0x52, 0xE7, 0x2C
	.byte 0x10, 0x52, 0x4A, 0x39, 0xA5, 0x24, 0xAD, 0x45, 0x29, 0x35, 0x63, 0x1C, 0xFF, 0x7F, 0x00, 0x10
	.globl gObjectEventFrame_JP_084BA38C
gObjectEventFrame_JP_084BA38C: @ 0x084BA38C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 76; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/unused_natu_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_UnusedNatuDoll frame slice
	.globl gObjectEventFrame_JP_084BA40C
gObjectEventFrame_JP_084BA40C: @ 0x084BA40C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 77; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/unused_magnemite_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_UnusedMagnemiteDoll frame slice
	.globl gObjectEventFrame_JP_084BA48C
gObjectEventFrame_JP_084BA48C: @ 0x084BA48C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 78; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/unused_squirtle_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_UnusedSquirtleDoll frame slice
	.globl gObjectEventFrame_JP_084BA50C
gObjectEventFrame_JP_084BA50C: @ 0x084BA50C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 79; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/unused_wooper_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_UnusedWooperDoll frame slice
	.globl gObjectEventFrame_JP_084BA58C
gObjectEventFrame_JP_084BA58C: @ 0x084BA58C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 80; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/unused_pikachu_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_UnusedPikachuDoll frame slice
	.globl gObjectEventFrame_JP_084BA60C
gObjectEventFrame_JP_084BA60C: @ 0x084BA60C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 81; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/unused_porygon2_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_UnusedPorygon2Doll frame slice
	.globl gObjectEventFrame_JP_084BA68C
gObjectEventFrame_JP_084BA68C: @ 0x084BA68C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 142; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/pichu_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_PichuDoll frame slice
	.globl gObjectEventFrame_JP_084BA70C
gObjectEventFrame_JP_084BA70C: @ 0x084BA70C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 143; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/pikachu_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_PikachuDoll frame slice
	.globl gObjectEventFrame_JP_084BA78C
gObjectEventFrame_JP_084BA78C: @ 0x084BA78C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 144; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/marill_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_MarillDoll frame slice
	.globl gObjectEventFrame_JP_084BA80C
gObjectEventFrame_JP_084BA80C: @ 0x084BA80C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 145; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/togepi_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_TogepiDoll frame slice
	.globl gObjectEventFrame_JP_084BA88C
gObjectEventFrame_JP_084BA88C: @ 0x084BA88C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 146; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/cyndaquil_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_CyndaquilDoll frame slice
	.globl gObjectEventFrame_JP_084BA90C
gObjectEventFrame_JP_084BA90C: @ 0x084BA90C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 147; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/chikorita_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_ChikoritaDoll frame slice
	.globl gObjectEventFrame_JP_084BA98C
gObjectEventFrame_JP_084BA98C: @ 0x084BA98C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 148; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/totodile_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_TotodileDoll frame slice
	.globl gObjectEventFrame_JP_084BAA0C
gObjectEventFrame_JP_084BAA0C: @ 0x084BAA0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 149; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/jigglypuff_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_JigglypuffDoll frame slice
	.globl gObjectEventFrame_JP_084BAA8C
gObjectEventFrame_JP_084BAA8C: @ 0x084BAA8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 150; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/meowth_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_MeowthDoll frame slice
	.globl gObjectEventFrame_JP_084BAB0C
gObjectEventFrame_JP_084BAB0C: @ 0x084BAB0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 151; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/clefairy_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_ClefairyDoll frame slice
	.globl gObjectEventFrame_JP_084BAB8C
gObjectEventFrame_JP_084BAB8C: @ 0x084BAB8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 152; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/ditto_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_DittoDoll frame slice
	.globl gObjectEventFrame_JP_084BAC0C
gObjectEventFrame_JP_084BAC0C: @ 0x084BAC0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 153; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/smoochum_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_SmoochumDoll frame slice
	.globl gObjectEventFrame_JP_084BAC8C
gObjectEventFrame_JP_084BAC8C: @ 0x084BAC8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 154; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/treecko_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_TreeckoDoll frame slice
	.globl gObjectEventFrame_JP_084BAD0C
gObjectEventFrame_JP_084BAD0C: @ 0x084BAD0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 155; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/torchic_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_TorchicDoll frame slice
	.globl gObjectEventFrame_JP_084BAD8C
gObjectEventFrame_JP_084BAD8C: @ 0x084BAD8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 156; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/mudkip_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_MudkipDoll frame slice
	.globl gObjectEventFrame_JP_084BAE0C
gObjectEventFrame_JP_084BAE0C: @ 0x084BAE0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 157; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/duskull_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_DuskullDoll frame slice
	.globl gObjectEventFrame_JP_084BAE8C
gObjectEventFrame_JP_084BAE8C: @ 0x084BAE8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 158; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/wynaut_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_WynautDoll frame slice
	.globl gObjectEventFrame_JP_084BAF0C
gObjectEventFrame_JP_084BAF0C: @ 0x084BAF0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 159; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/baltoy_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_BaltoyDoll frame slice
	.globl gObjectEventFrame_JP_084BAF8C
gObjectEventFrame_JP_084BAF8C: @ 0x084BAF8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 160; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/kecleon_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_KecleonDoll frame slice
	.globl gObjectEventFrame_JP_084BB00C
gObjectEventFrame_JP_084BB00C: @ 0x084BB00C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 161; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/azurill_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_AzurillDoll frame slice
	.globl gObjectEventFrame_JP_084BB08C
gObjectEventFrame_JP_084BB08C: @ 0x084BB08C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 162; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/skitty_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_SkittyDoll frame slice
	.globl gObjectEventFrame_JP_084BB10C
gObjectEventFrame_JP_084BB10C: @ 0x084BB10C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 163; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/swablu_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_SwabluDoll frame slice
	.globl gObjectEventFrame_JP_084BB18C
gObjectEventFrame_JP_084BB18C: @ 0x084BB18C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 164; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/gulpin_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_GulpinDoll frame slice
	.globl gObjectEventFrame_JP_084BB20C
gObjectEventFrame_JP_084BB20C: @ 0x084BB20C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 165; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/lotad_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_LotadDoll frame slice
	.globl gObjectEventFrame_JP_084BB28C
gObjectEventFrame_JP_084BB28C: @ 0x084BB28C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 166; size=0x80
	.incbin "build/graphics/object_events/pics/dolls/seedot_doll.4bpp", 0x0, 0x80 @ gObjectEventPic_SeedotDoll frame slice
	.globl gObjectEventFrame_JP_084BB30C
gObjectEventFrame_JP_084BB30C: @ 0x084BB30C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 167; size=0x80
	.incbin "build/graphics/object_events/pics/cushions/pika_cushion.4bpp", 0x0, 0x80 @ gObjectEventPic_PikaCushion frame slice
	.globl gObjectEventFrame_JP_084BB38C
gObjectEventFrame_JP_084BB38C: @ 0x084BB38C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 168; size=0x80
	.incbin "build/graphics/object_events/pics/cushions/round_cushion.4bpp", 0x0, 0x80 @ gObjectEventPic_RoundCushion frame slice
	.globl gObjectEventFrame_JP_084BB40C
gObjectEventFrame_JP_084BB40C: @ 0x084BB40C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 169; size=0x80
	.incbin "build/graphics/object_events/pics/cushions/kiss_cushion.4bpp", 0x0, 0x80 @ gObjectEventPic_KissCushion frame slice
	.globl gObjectEventFrame_JP_084BB48C
gObjectEventFrame_JP_084BB48C: @ 0x084BB48C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 170; size=0x80
	.incbin "build/graphics/object_events/pics/cushions/zigzag_cushion.4bpp", 0x0, 0x80 @ gObjectEventPic_ZigzagCushion frame slice
	.globl gObjectEventFrame_JP_084BB50C
gObjectEventFrame_JP_084BB50C: @ 0x084BB50C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 171; size=0x80
	.incbin "build/graphics/object_events/pics/cushions/spin_cushion.4bpp", 0x0, 0x80 @ gObjectEventPic_SpinCushion frame slice
	.globl gObjectEventFrame_JP_084BB58C
gObjectEventFrame_JP_084BB58C: @ 0x084BB58C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 172; size=0x80
	.incbin "build/graphics/object_events/pics/cushions/diamond_cushion.4bpp", 0x0, 0x80 @ gObjectEventPic_DiamondCushion frame slice
	.globl gObjectEventFrame_JP_084BB60C
gObjectEventFrame_JP_084BB60C: @ 0x084BB60C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 173; size=0x80
	.incbin "build/graphics/object_events/pics/cushions/ball_cushion.4bpp", 0x0, 0x80 @ gObjectEventPic_BallCushion frame slice
	.globl gObjectEventFrame_JP_084BB68C
gObjectEventFrame_JP_084BB68C: @ 0x084BB68C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 174; size=0x80
	.incbin "build/graphics/object_events/pics/cushions/grass_cushion.4bpp", 0x0, 0x80 @ gObjectEventPic_GrassCushion frame slice
	.globl gObjectEventFrame_JP_084BB70C
gObjectEventFrame_JP_084BB70C: @ 0x084BB70C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 175; size=0x80
	.incbin "build/graphics/object_events/pics/cushions/fire_cushion.4bpp", 0x0, 0x80 @ gObjectEventPic_FireCushion frame slice
	.globl gObjectEventFrame_JP_084BB78C
gObjectEventFrame_JP_084BB78C: @ 0x084BB78C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 176; size=0x80
	.incbin "build/graphics/object_events/pics/cushions/water_cushion.4bpp", 0x0, 0x80 @ gObjectEventPic_WaterCushion frame slice
	.globl gObjectEventFrame_JP_084BB80C
gObjectEventFrame_JP_084BB80C: @ 0x084BB80C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 177; size=0x200
	.incbin "build/graphics/object_events/pics/dolls/big_snorlax_doll.4bpp", 0x0, 0x200 @ gObjectEventPic_BigSnorlaxDoll frame slice
	.globl gObjectEventFrame_JP_084BBA0C
gObjectEventFrame_JP_084BBA0C: @ 0x084BBA0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 178; size=0x200
	.incbin "build/graphics/object_events/pics/dolls/big_rhydon_doll.4bpp", 0x0, 0x200 @ gObjectEventPic_BigRhydonDoll frame slice
	.globl gObjectEventFrame_JP_084BBC0C
gObjectEventFrame_JP_084BBC0C: @ 0x084BBC0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 179; size=0x200
	.incbin "build/graphics/object_events/pics/dolls/big_lapras_doll.4bpp", 0x0, 0x200 @ gObjectEventPic_BigLaprasDoll frame slice
	.globl gObjectEventFrame_JP_084BBE0C
gObjectEventFrame_JP_084BBE0C: @ 0x084BBE0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 180; size=0x200
	.incbin "build/graphics/object_events/pics/dolls/big_venusaur_doll.4bpp", 0x0, 0x200 @ gObjectEventPic_BigVenusaurDoll frame slice
	.globl gObjectEventFrame_JP_084BC00C
gObjectEventFrame_JP_084BC00C: @ 0x084BC00C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 181; size=0x200
	.incbin "build/graphics/object_events/pics/dolls/big_charizard_doll.4bpp", 0x0, 0x200 @ gObjectEventPic_BigCharizardDoll frame slice
	.globl gObjectEventFrame_JP_084BC20C
gObjectEventFrame_JP_084BC20C: @ 0x084BC20C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 182; size=0x200
	.incbin "build/graphics/object_events/pics/dolls/big_blastoise_doll.4bpp", 0x0, 0x200 @ gObjectEventPic_BigBlastoiseDoll frame slice
	.globl gObjectEventFrame_JP_084BC40C
gObjectEventFrame_JP_084BC40C: @ 0x084BC40C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 183; size=0x200
	.incbin "build/graphics/object_events/pics/dolls/big_wailmer_doll.4bpp", 0x0, 0x200 @ gObjectEventPic_BigWailmerDoll frame slice
	.globl gObjectEventFrame_JP_084BC60C
gObjectEventFrame_JP_084BC60C: @ 0x084BC60C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 184; size=0x200
	.incbin "build/graphics/object_events/pics/dolls/big_regirock_doll.4bpp", 0x0, 0x200 @ gObjectEventPic_BigRegirockDoll frame slice
	.globl gObjectEventFrame_JP_084BC80C
gObjectEventFrame_JP_084BC80C: @ 0x084BC80C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 185; size=0x200
	.incbin "build/graphics/object_events/pics/dolls/big_regice_doll.4bpp", 0x0, 0x200 @ gObjectEventPic_BigRegiceDoll frame slice
	.globl gObjectEventFrame_JP_084BCA0C
gObjectEventFrame_JP_084BCA0C: @ 0x084BCA0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 186; size=0x200
	.incbin "build/graphics/object_events/pics/dolls/big_registeel_doll.4bpp", 0x0, 0x200 @ gObjectEventPic_BigRegisteelDoll frame slice
	.globl gObjectEventFrame_JP_084BCC0C
gObjectEventFrame_JP_084BCC0C: @ 0x084BCC0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 82; size=0x80
	.incbin "build/graphics/object_events/pics/misc/cuttable_tree.4bpp", 0x0, 0x80 @ gObjectEventPic_CuttableTree frame slice
	.globl gObjectEventFrame_JP_084BCC8C
gObjectEventFrame_JP_084BCC8C: @ 0x084BCC8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 82; size=0x80
	.incbin "build/graphics/object_events/pics/misc/cuttable_tree.4bpp", 0x80, 0x80 @ gObjectEventPic_CuttableTree frame slice
	.globl gObjectEventFrame_JP_084BCD0C
gObjectEventFrame_JP_084BCD0C: @ 0x084BCD0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 82; size=0x80
	.incbin "build/graphics/object_events/pics/misc/cuttable_tree.4bpp", 0x100, 0x80 @ gObjectEventPic_CuttableTree frame slice
	.globl gObjectEventFrame_JP_084BCD8C
gObjectEventFrame_JP_084BCD8C: @ 0x084BCD8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 82; size=0x80
	.incbin "build/graphics/object_events/pics/misc/cuttable_tree.4bpp", 0x180, 0x80 @ gObjectEventPic_CuttableTree frame slice
	.globl gObjectEventFrame_JP_084BCE0C
gObjectEventFrame_JP_084BCE0C: @ 0x084BCE0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 86; size=0x80
	.incbin "build/graphics/object_events/pics/misc/breakable_rock.4bpp", 0x0, 0x80 @ gObjectEventPic_BreakableRock frame slice
	.globl gObjectEventFrame_JP_084BCE8C
gObjectEventFrame_JP_084BCE8C: @ 0x084BCE8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 86; size=0x80
	.incbin "build/graphics/object_events/pics/misc/breakable_rock.4bpp", 0x80, 0x80 @ gObjectEventPic_BreakableRock frame slice
	.globl gObjectEventFrame_JP_084BCF0C
gObjectEventFrame_JP_084BCF0C: @ 0x084BCF0C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 86; size=0x80
	.incbin "build/graphics/object_events/pics/misc/breakable_rock.4bpp", 0x100, 0x80 @ gObjectEventPic_BreakableRock frame slice
	.globl gObjectEventFrame_JP_084BCF8C
gObjectEventFrame_JP_084BCF8C: @ 0x084BCF8C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 86; size=0x80
	.incbin "build/graphics/object_events/pics/misc/breakable_rock.4bpp", 0x180, 0x80 @ gObjectEventPic_BreakableRock frame slice
	.globl gObjectEventFrame_JP_084BD00C
gObjectEventFrame_JP_084BD00C: @ 0x084BD00C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 87; size=0x80
	.incbin "build/graphics/object_events/pics/misc/pushable_boulder.4bpp", 0x0, 0x80 @ gObjectEventPic_PushableBoulder frame slice
	.globl gObjectEventFrame_JP_084BD08C
gObjectEventFrame_JP_084BD08C: @ 0x084BD08C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 88; size=0x200
	.incbin "build/graphics/object_events/pics/misc/mr_brineys_boat.4bpp", 0x0, 0x200 @ gObjectEventPic_MrBrineysBoat frame slice
	.globl gObjectEventFrame_JP_084BD28C
gObjectEventFrame_JP_084BD28C: @ 0x084BD28C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 88; size=0x200
	.incbin "build/graphics/object_events/pics/misc/mr_brineys_boat.4bpp", 0x200, 0x200 @ gObjectEventPic_MrBrineysBoat frame slice
	.globl gObjectEventFrame_JP_084BD48C
gObjectEventFrame_JP_084BD48C: @ 0x084BD48C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 88; size=0x200
	.incbin "build/graphics/object_events/pics/misc/mr_brineys_boat.4bpp", 0x400, 0x200 @ gObjectEventPic_MrBrineysBoat frame slice
	.globl gObjectEventFrame_JP_084BD68C
gObjectEventFrame_JP_084BD68C: @ 0x084BD68C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 199; size=0x80
	.incbin "build/graphics/object_events/pics/misc/fossil.4bpp", 0x0, 0x80 @ gObjectEventPic_Fossil frame slice
	.globl gObjectEventFrame_JP_084BD70C
gObjectEventFrame_JP_084BD70C: @ 0x084BD70C
	@ SpriteFrameImage 4bpp data; object gfx id(s): 141; size=0x580
	.incbin "build/graphics/object_events/pics/misc/submarine_shadow.4bpp", 0x0, 0x580 @ gObjectEventPic_SubmarineShadow frame slice
	.globl gObjectEventPal_JP_084BDC8C
gObjectEventPal_JP_084BDC8C: @ 0x084BDC8C
	@ 16-color object-event palette
	.globl gObjectEventGfxUnreferenced_JP_084BDC8C
gObjectEventGfxUnreferenced_JP_084BDC8C: @ 0x084BDC8C
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_GRAPHICS
	@ object-event graphics/palette payload not reached by current graphics-info table
	.byte 0xE0, 0x61, 0xFF, 0x7F, 0x9B, 0x77, 0x37, 0x73, 0x93, 0x5E, 0x31, 0x4E, 0x8C, 0x3D, 0x28, 0x35
	.byte 0x98, 0x31, 0x15, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC9, 0x72
	.globl gObjectEventFrame_JP_084BDCAC
gObjectEventFrame_JP_084BDCAC: @ 0x084BDCAC
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_GFX
	@ Object-event sprite frame graphics/data.
	@ Overlapping ObjectEvent frame prefix; object gfx id 94 declares a 0x480-byte frame.
	@ The declared range crosses text slots and payload gaps in later includes
	@ (0x084BE091-0x084BE12B), so only the local prefix is kept here.
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x70, 0x77, 0x00, 0x00, 0x57, 0x55, 0x00, 0x70, 0x56, 0x55, 0x00, 0xF0, 0x5E, 0x55
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x77, 0x77, 0x77, 0x87, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55
	.byte 0xBC, 0xBB, 0xBB, 0xBB, 0xAC, 0xAA, 0xAA, 0xAA, 0xAC, 0xAA, 0xAA, 0xAA, 0xBC, 0xBB, 0xBB, 0xBB
	.byte 0xAC, 0xAA, 0xAA, 0xAA, 0xAC, 0xAA, 0xAA, 0xAA, 0xBC, 0xBB, 0xBB, 0xBB, 0xAC, 0xAA, 0xAA, 0xAA
	.byte 0xBB, 0xBB, 0xBB, 0xBB, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xBB, 0xBB, 0xBB, 0xBB
	.byte 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xBB, 0xBB, 0xBB, 0xBB, 0xAA, 0xAA, 0xAA, 0xAA
	.byte 0xBB, 0xBB, 0xBB, 0xBB, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xBB, 0xBB, 0xBB, 0xBB
	.byte 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xBB, 0xBB, 0xBB, 0xBB, 0xAA, 0xAA, 0xAA, 0xAA
	.byte 0xBB, 0xBB, 0xCB, 0xCC, 0xAA, 0xAA, 0xAA, 0xFA, 0xAA, 0xAA, 0xAA, 0xFA, 0xBB, 0xBB, 0xBB, 0xFB
	.byte 0xAA, 0xAA, 0xAA, 0xFA, 0xAA, 0xAA, 0xAA, 0xFA, 0xBB, 0xBB, 0xBB, 0xFB, 0xAA, 0xAA, 0xAA, 0xFA
	.byte 0x00, 0xF0, 0x5E, 0x55, 0x00, 0xF0, 0x5E, 0x55, 0x00, 0xF0, 0x5E, 0x55, 0x00, 0xF0, 0x5E, 0x55
	.byte 0x00, 0xF0, 0x5E, 0x55, 0x00, 0xF7, 0x5E, 0x55, 0x70, 0xF5, 0x5E, 0x55, 0x57, 0xF5, 0x5E, 0x55
	.byte 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55
	.byte 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55
	.byte 0xAC, 0xAA, 0xAA, 0xAA, 0xBC, 0xBB, 0xBB, 0xBB, 0xAC, 0xAA, 0xAA, 0xAA, 0xAC, 0xAA, 0xAA, 0xAA
	.byte 0xBC, 0xBB, 0xBB, 0xBB, 0xAC, 0xAA, 0xAA, 0xAA, 0xAC, 0xAA, 0xAA, 0xAA, 0xBC, 0xBB, 0xBB, 0xBB
	.byte 0xAA, 0xAA, 0xAA, 0xAA, 0xBB, 0xBB, 0xBB, 0xBB, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA
	.byte 0xBB, 0xBB, 0xBB, 0xBB, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xBB, 0xBB, 0xBB, 0xBB
	.byte 0xAA, 0xAA, 0xAA, 0xAA, 0xBB, 0xBB, 0xBB, 0xBB, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA
	.byte 0xBB, 0xBB, 0xBB, 0xBB, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xBB, 0xBB, 0xBB, 0xBB
	.byte 0xAA, 0xAA, 0xAA, 0xFA, 0xBB, 0xBB, 0xBB, 0xFB, 0xAA, 0xAA, 0xAA, 0xFA, 0xAA, 0xAA, 0xAA, 0xFA
	.byte 0xBB, 0xBB, 0xBB, 0xFB, 0xAA, 0xAA, 0xAA, 0xFA, 0xAA, 0xAA, 0xAA, 0xFA, 0xBB, 0xBB, 0xBB, 0xFB
	.byte 0x58, 0xF5, 0x5E, 0x55, 0x58, 0xF5, 0x56, 0x55, 0x58, 0xF5, 0x67, 0x55, 0x58, 0x85, 0x7F, 0x66
	.byte 0x58, 0x85, 0xDD, 0x77, 0x58, 0x85, 0xDD, 0xDD, 0x58, 0x85, 0xDD, 0x77, 0x58, 0x85, 0xDD, 0x77
	.byte 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x66, 0x66, 0x66, 0x66
	.byte 0x77, 0x77, 0x77, 0x77, 0xDD, 0xDD, 0xFD, 0x77, 0x77, 0x87, 0xFD, 0x77, 0x77, 0xD8, 0xFD, 0x77
	.byte 0xCF, 0xCC, 0xCC, 0xCC, 0xCF, 0xCC, 0xCC, 0xCC, 0xCF, 0xCC, 0xCC, 0xCC, 0xCF, 0xCC, 0xCC, 0xCC
	.byte 0xCF, 0xCC, 0xCC, 0xCC, 0xCF, 0xCC, 0xCC, 0xCC, 0xCF, 0xCC, 0xCC, 0x7C, 0xCF, 0xCC, 0xCC, 0x77
	.byte 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC
	.byte 0xCC, 0x7C, 0x77, 0x77, 0x7C, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77
	.byte 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x77, 0x77, 0x77, 0xCC, 0xCC, 0x7C, 0x77
	.byte 0x77, 0xCC, 0xCC, 0xCC, 0x77, 0x77, 0xCC, 0xCC, 0x77, 0x77, 0x77, 0xCC, 0x77, 0x77, 0x77, 0xCC
	.byte 0xCC, 0xCC, 0xCC, 0xFC, 0xCC, 0xCC, 0xCC, 0xFC, 0x77, 0x77, 0x77, 0xF7, 0x77, 0x77, 0x77, 0xF7
	.byte 0xCC, 0xCC, 0xCC, 0xFC, 0x77, 0x77, 0x77, 0xF7, 0xCC, 0xCC, 0xCC, 0xFC, 0xCC, 0x77, 0x77, 0xF7
	.byte 0x58, 0xD5, 0xDD, 0x77, 0x58, 0xF6, 0xDD, 0x77, 0x58, 0xF6, 0xDD, 0x87, 0x58, 0xF6, 0xDD, 0xD8
	.byte 0x68, 0xD7, 0xDF, 0xDD, 0x7D, 0x77, 0xFD, 0xFD, 0x7D, 0x77, 0xD7, 0xFF, 0x7D, 0x77, 0x77, 0x77
	.byte 0x87, 0xDD, 0xFF, 0x77, 0xD8, 0xFD, 0xFF, 0x77, 0xDD, 0xFF, 0xFF, 0x77, 0xFD, 0xFF, 0xFF, 0x77
	.byte 0xFF, 0xFF, 0xFF, 0x77, 0xFF, 0xFF, 0xFF, 0x88, 0xFF, 0xFF, 0x7D, 0x77, 0x77, 0x77, 0x77, 0x77
	.byte 0xCF, 0xCC, 0x7C, 0x77, 0xCF, 0xCC, 0x77, 0x77, 0xCF, 0x7C, 0x77, 0x77, 0xCF, 0x7C, 0x77, 0x77
	.byte 0xCF, 0x77, 0x77, 0x77, 0xCF, 0x77, 0x77, 0x77, 0xCF, 0x77, 0x77, 0x77, 0x8F, 0x88, 0x88, 0x88
	.byte 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0xCC, 0xCC, 0x77, 0xCC, 0xCC, 0xCC
	.byte 0xC7, 0xCC, 0x7C, 0x77, 0xCC, 0x7C, 0x77, 0x77, 0xCC, 0x77, 0x77, 0x77, 0x88, 0x88, 0x88, 0x88
	.byte 0x77, 0x77, 0xC7, 0xCC, 0x77, 0x77, 0xCC, 0x7C, 0x7C, 0xC7, 0xCC, 0x77, 0xCC, 0xCC, 0x7C, 0x77
	.byte 0xCC, 0xCC, 0x77, 0x77, 0x77, 0xCC, 0x7C, 0x77, 0x77, 0xC7, 0x7C, 0x77, 0x88, 0x88, 0x88, 0x88
	.byte 0xCC, 0xCC, 0xCC, 0xFC, 0xC7, 0x7C, 0x77, 0xF7, 0x77, 0xCC, 0x77, 0xF7, 0x77, 0xCC, 0xCC, 0xFC
	.byte 0x77, 0xC7, 0xCC, 0xFC, 0x77, 0xC7, 0xCC, 0xFC, 0x77, 0xC7, 0xCC, 0xFC, 0x88, 0x88, 0x88, 0xF8
	.byte 0x7D, 0x77, 0x77, 0x77, 0x8D, 0x88, 0x77, 0x77, 0x6D, 0x86, 0x77, 0xD7, 0x6D, 0x86, 0x77, 0xFD
	.byte 0xD0, 0x8D, 0x88, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xDD, 0xDD, 0xFF, 0x00, 0xDD, 0xDD, 0xFD
	.byte 0x77, 0x77, 0x77, 0x77, 0x77
.endif
