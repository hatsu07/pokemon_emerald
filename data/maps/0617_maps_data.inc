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
