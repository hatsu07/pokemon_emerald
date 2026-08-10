	@ gText_Rom_45DFDA intentionally aliases the boundary between two MapHeaders
	.globl gText_Rom_45DFDA
gText_Rom_45DFDA: @ 0x0845DFDA
	.set MapHeader_JP_0845DFDC, gText_Rom_45DFDA + 2
	.string "  ？$"
	.if (. - gText_Rom_45DFDA) != 0x4
	.error "gText_Rom_45DFDA must remain exactly 4 bytes"
	.endif

	@ continuation of MapHeader_JP_0845DFDC (first 2 bytes are AC FF from the string above)
	.2byte 0x0841
	.4byte MapEvents_JP_08516930
	.4byte 0x0823E04F
	.4byte 0
	.2byte 0x01C0, 0x00F8
	.byte 0x19, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00

MapHeader_JP_0845DFF8: @ 0x0845DFF8
	@ struct MapHeader
	.4byte MapLayout_JP_08420260
	.4byte MapEvents_JP_08516A50
	.4byte 0x0823E2D4
	.4byte 0
	.2byte 0x01C0, 0x00F9
	.byte 0x19, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00

MapHeader_JP_0845E014: @ 0x0845E014
	@ struct MapHeader
	.4byte MapLayout_JP_08420514
	.4byte MapEvents_JP_08516BF0
	.4byte 0x0823EB42
	.4byte 0
	.2byte 0x01C0, 0x00FA
	.byte 0x19, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00

MapHeader_JP_0845E030: @ 0x0845E030
	@ struct MapHeader
	.4byte MapLayout_JP_084207C8
	.4byte MapEvents_JP_08516E00
	.4byte 0x0823ECE1
	.4byte 0
	.2byte 0x01C0, 0x00FB
	.byte 0x19, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00

MapHeader_JP_0845E04C: @ 0x0845E04C
	@ struct MapHeader
	.4byte MapLayout_JP_08420A7C
	.4byte MapEvents_JP_08516E98
	.4byte 0x0823FD00
	.4byte 0
	.2byte 0x01C0, 0x00FC
	.byte 0x19, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00

MapHeader_JP_0845E068: @ 0x0845E068
	@ struct MapHeader
	.4byte MapLayout_JP_08420D30
	.4byte MapEvents_JP_08517038
	.4byte 0x0823FEBC
	.4byte 0
	.2byte 0x01C0, 0x00FD
	.byte 0x19, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00

MapHeader_JP_0845E084: @ 0x0845E084
	@ struct MapHeader
	.4byte MapLayout_JP_08420FE4
	.4byte MapEvents_JP_085170D0
	.4byte 0x0824045B
	.4byte 0
	.2byte 0x01C0, 0x00FE
	.byte 0x19, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00

MapHeader_JP_0845E0A0: @ 0x0845E0A0
	@ struct MapHeader
	.4byte MapLayout_JP_08421138
	.4byte MapEvents_JP_0851713C
	.4byte 0x08240605
	.4byte 0
	.2byte 0x01B1, 0x0100
	.byte 0x19, 0x00, 0x00, 0x08, 0x00, 0x00, 0x01, 0x00

MapHeader_JP_0845E0BC: @ 0x0845E0BC
	@ struct MapHeader
	.4byte MapLayout_JP_08421138
	.4byte MapEvents_JP_085171A8
	.4byte 0x082406C2
	.4byte 0
	.2byte 0x01B1, 0x0100
	.byte 0x19, 0x00, 0x00, 0x08, 0x00, 0x00, 0x01, 0x00

MapHeader_JP_0845E0D8: @ 0x0845E0D8
	@ struct MapHeader
	.4byte MapLayout_JP_083FFC68
	.4byte MapEvents_JP_085171FC
	.4byte 0x082407B7
	.4byte 0
	.2byte 0x018F, 0x0043
	.byte 0x1C, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00

MapHeader_JP_0845E0F4: @ 0x0845E0F4
	@ struct MapHeader
	.4byte MapLayout_JP_083FF24C
	.4byte MapEvents_JP_08517250
	.4byte 0x08240F98
	.4byte 0
	.2byte 0x018F, 0x003C
	.byte 0x26, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00

MapHeader_JP_0845E110: @ 0x0845E110
	@ struct MapHeader
	.4byte MapLayout_JP_08425BAC
	.4byte MapEvents_JP_08517324
	.4byte 0x082411E3
	.4byte 0
	.2byte 0x018F, 0x010F
	.byte 0x22, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00

MapHeader_JP_0845E12C: @ 0x0845E12C
	@ struct MapHeader
	.4byte MapLayout_JP_08425D84
	.4byte MapEvents_JP_08517400
	.4byte 0x082414E5
	.4byte 0
	.2byte 0x018F, 0x0110
	.byte 0x22, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00

MapHeader_JP_0845E148: @ 0x0845E148
	@ struct MapHeader
	.4byte MapLayout_JP_083FF17C
	.4byte MapEvents_JP_085174CC
	.4byte 0x08241BD0
	.4byte 0
	.2byte 0x018F, 0x003B
	.byte 0x22, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00

MapHeader_JP_0845E164: @ 0x0845E164
	@ struct MapHeader
	.4byte MapLayout_JP_0842F788
	.4byte MapEvents_JP_08517514
	.4byte 0x08241C4F
	.4byte 0
	.2byte 0x0198, 0x012D
	.byte 0x27, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00

MapGroup_JP_00: @ 0x0845E180
	@ 57 MapHeader pointers
	.4byte MapHeader_JP_0845A8D8, MapHeader_JP_0845A8F4, MapHeader_JP_0845A910, MapHeader_JP_0845A92C, MapHeader_JP_0845A948, MapHeader_JP_0845A964
	.4byte MapHeader_JP_0845A980, MapHeader_JP_0845A99C, MapHeader_JP_0845A9B8, MapHeader_JP_0845A9D4, MapHeader_JP_0845A9F0, MapHeader_JP_0845AA0C
	.4byte MapHeader_JP_0845AA28, MapHeader_JP_0845AA44, MapHeader_JP_0845AA60, MapHeader_JP_0845AA7C, MapHeader_JP_0845AA98, MapHeader_JP_0845AAB4
	.4byte MapHeader_JP_0845AAD0, MapHeader_JP_0845AAEC, MapHeader_JP_0845AB08, MapHeader_JP_0845AB24, MapHeader_JP_0845AB40, MapHeader_JP_0845AB5C
	.4byte MapHeader_JP_0845AB78, MapHeader_JP_0845AB94, MapHeader_JP_0845ABB0, MapHeader_JP_0845ABCC, MapHeader_JP_0845ABE8, MapHeader_JP_0845AC04
	.4byte MapHeader_JP_0845AC20, MapHeader_JP_0845AC3C, MapHeader_JP_0845AC58, MapHeader_JP_0845AC74, MapHeader_JP_0845AC90, MapHeader_JP_0845ACAC
	.4byte MapHeader_JP_0845ACC8, MapHeader_JP_0845ACE4, MapHeader_JP_0845AD00, MapHeader_JP_0845AD1C, MapHeader_JP_0845AD38, MapHeader_JP_0845AD54
	.4byte MapHeader_JP_0845AD70, MapHeader_JP_0845AD8C, MapHeader_JP_0845ADA8, MapHeader_JP_0845ADC4, MapHeader_JP_0845ADE0, MapHeader_JP_0845ADFC
	.4byte MapHeader_JP_0845AE18, MapHeader_JP_0845AE34, MapHeader_JP_0845AE50, MapHeader_JP_0845AE6C, MapHeader_JP_0845AE88, MapHeader_JP_0845AEA4
	.4byte MapHeader_JP_0845AEC0, MapHeader_JP_0845AEDC, MapHeader_JP_0845AEF8

MapGroup_JP_01: @ 0x0845E264
	@ 5 MapHeader pointers
	.4byte MapHeader_JP_0845AF14, MapHeader_JP_0845AF30, MapHeader_JP_0845AF4C, MapHeader_JP_0845AF68, MapHeader_JP_0845AF84

MapGroup_JP_02: @ 0x0845E278
	@ 5 MapHeader pointers
	.4byte MapHeader_JP_0845AFA0, MapHeader_JP_0845AFBC, MapHeader_JP_0845AFD8, MapHeader_JP_0845AFF4, MapHeader_JP_0845B010

MapGroup_JP_03: @ 0x0845E28C
	@ 6 MapHeader pointers
	.4byte MapHeader_JP_0845B02C, MapHeader_JP_0845B048, MapHeader_JP_0845B064, MapHeader_JP_0845B080, MapHeader_JP_0845B09C, MapHeader_JP_0845B0B8

MapGroup_JP_04: @ 0x0845E2A4
	@ 7 MapHeader pointers
	.4byte MapHeader_JP_0845B0D4, MapHeader_JP_0845B0F0, MapHeader_JP_0845B10C, MapHeader_JP_0845B128, MapHeader_JP_0845B144, MapHeader_JP_0845B160
	.4byte MapHeader_JP_0845B17C

MapGroup_JP_05: @ 0x0845E2C0
	@ 8 MapHeader pointers
	.4byte MapHeader_JP_0845B198, MapHeader_JP_0845B1B4, MapHeader_JP_0845B1D0, MapHeader_JP_0845B1EC, MapHeader_JP_0845B208, MapHeader_JP_0845B224
	.4byte MapHeader_JP_0845B240, MapHeader_JP_0845B25C

MapGroup_JP_06: @ 0x0845E2E0
	@ 9 MapHeader pointers
	.4byte MapHeader_JP_0845B278, MapHeader_JP_0845B294, MapHeader_JP_0845B2B0, MapHeader_JP_0845B2CC, MapHeader_JP_0845B2E8, MapHeader_JP_0845B304
	.4byte MapHeader_JP_0845B320, MapHeader_JP_0845B33C, MapHeader_JP_0845B358

MapGroup_JP_07: @ 0x0845E304
	@ 7 MapHeader pointers
	.4byte MapHeader_JP_0845B374, MapHeader_JP_0845B390, MapHeader_JP_0845B3AC, MapHeader_JP_0845B3C8, MapHeader_JP_0845B3E4, MapHeader_JP_0845B400
	.4byte MapHeader_JP_0845B41C

MapGroup_JP_08: @ 0x0845E320
	@ 7 MapHeader pointers
	.4byte MapHeader_JP_0845B438, MapHeader_JP_0845B454, MapHeader_JP_0845B470, MapHeader_JP_0845B48C, MapHeader_JP_0845B4A8, MapHeader_JP_0845B4C4
	.4byte MapHeader_JP_0845B4E0

MapGroup_JP_09: @ 0x0845E33C
	@ 14 MapHeader pointers
	.4byte MapHeader_JP_0845B4FC, MapHeader_JP_0845B518, MapHeader_JP_0845B534, MapHeader_JP_0845B550, MapHeader_JP_0845B56C, MapHeader_JP_0845B588
	.4byte MapHeader_JP_0845B5A4, MapHeader_JP_0845B5C0, MapHeader_JP_0845B5DC, MapHeader_JP_0845B5F8, MapHeader_JP_0845B614, MapHeader_JP_0845B630
	.4byte MapHeader_JP_0845B64C, MapHeader_JP_0845B668

MapGroup_JP_10: @ 0x0845E374
	@ 8 MapHeader pointers
	.4byte MapHeader_JP_0845B684, MapHeader_JP_0845B6A0, MapHeader_JP_0845B6BC, MapHeader_JP_0845B6D8, MapHeader_JP_0845B6F4, MapHeader_JP_0845B710
	.4byte MapHeader_JP_0845B72C, MapHeader_JP_0845B748

MapGroup_JP_11: @ 0x0845E394
	@ 17 MapHeader pointers
	.4byte MapHeader_JP_0845B764, MapHeader_JP_0845B780, MapHeader_JP_0845B79C, MapHeader_JP_0845B7B8, MapHeader_JP_0845B7D4, MapHeader_JP_0845B7F0
	.4byte MapHeader_JP_0845B80C, MapHeader_JP_0845B828, MapHeader_JP_0845B844, MapHeader_JP_0845B860, MapHeader_JP_0845B87C, MapHeader_JP_0845B898
	.4byte MapHeader_JP_0845B8B4, MapHeader_JP_0845B8D0, MapHeader_JP_0845B8EC, MapHeader_JP_0845B908, MapHeader_JP_0845B924

MapGroup_JP_12: @ 0x0845E3D8
	@ 10 MapHeader pointers
	.4byte MapHeader_JP_0845B940, MapHeader_JP_0845B95C, MapHeader_JP_0845B978, MapHeader_JP_0845B994, MapHeader_JP_0845B9B0, MapHeader_JP_0845B9CC
	.4byte MapHeader_JP_0845B9E8, MapHeader_JP_0845BA04, MapHeader_JP_0845BA20, MapHeader_JP_0845BA3C

MapGroup_JP_13: @ 0x0845E400
	@ 23 MapHeader pointers
	.4byte MapHeader_JP_0845BA58, MapHeader_JP_0845BA74, MapHeader_JP_0845BA90, MapHeader_JP_0845BAAC, MapHeader_JP_0845BAC8, MapHeader_JP_0845BAE4
	.4byte MapHeader_JP_0845BB00, MapHeader_JP_0845BB1C, MapHeader_JP_0845BB38, MapHeader_JP_0845BB54, MapHeader_JP_0845BB70, MapHeader_JP_0845BB8C
	.4byte MapHeader_JP_0845BBA8, MapHeader_JP_0845BBC4, MapHeader_JP_0845BBE0, MapHeader_JP_0845BBFC, MapHeader_JP_0845BC18, MapHeader_JP_0845BC34
	.4byte MapHeader_JP_0845BC50, MapHeader_JP_0845BC6C, MapHeader_JP_0845BC88, MapHeader_JP_0845BCA4, MapHeader_JP_0845BCC0

MapGroup_JP_14: @ 0x0845E45C
	@ 13 MapHeader pointers
	.4byte MapHeader_JP_0845BCDC, MapHeader_JP_0845BCF8, MapHeader_JP_0845BD14, MapHeader_JP_0845BD30, MapHeader_JP_0845BD4C, MapHeader_JP_0845BD68
	.4byte MapHeader_JP_0845BD84, MapHeader_JP_0845BDA0, MapHeader_JP_0845BDBC, MapHeader_JP_0845BDD8, MapHeader_JP_0845BDF4, MapHeader_JP_0845BE10
	.4byte MapHeader_JP_0845BE2C

MapGroup_JP_15: @ 0x0845E490
	@ 15 MapHeader pointers
	.4byte MapHeader_JP_0845BE48, MapHeader_JP_0845BE64, MapHeader_JP_0845BE80, MapHeader_JP_0845BE9C, MapHeader_JP_0845BEB8, MapHeader_JP_0845BED4
	.4byte MapHeader_JP_0845BEF0, MapHeader_JP_0845BF0C, MapHeader_JP_0845BF28, MapHeader_JP_0845BF44, MapHeader_JP_0845BF60, MapHeader_JP_0845BF7C
	.4byte MapHeader_JP_0845BF98, MapHeader_JP_0845BFB4, MapHeader_JP_0845BFD0

MapGroup_JP_16: @ 0x0845E4CC
	@ 15 MapHeader pointers
	.4byte MapHeader_JP_0845BFEC, MapHeader_JP_0845C008, MapHeader_JP_0845C024, MapHeader_JP_0845C040, MapHeader_JP_0845C05C, MapHeader_JP_0845C078
	.4byte MapHeader_JP_0845C094, MapHeader_JP_0845C0B0, MapHeader_JP_0845C0CC, MapHeader_JP_0845C0E8, MapHeader_JP_0845C104, MapHeader_JP_0845C120
	.4byte MapHeader_JP_0845C13C, MapHeader_JP_0845C158, MapHeader_JP_0845C174

MapGroup_JP_17: @ 0x0845E508
	@ 2 MapHeader pointers
	.4byte MapHeader_JP_0845C190, MapHeader_JP_0845C1AC

MapGroup_JP_18: @ 0x0845E510
	@ 2 MapHeader pointers
	.4byte MapHeader_JP_0845C1C8, MapHeader_JP_0845C1E4

MapGroup_JP_19: @ 0x0845E518
	@ 2 MapHeader pointers
	.4byte MapHeader_JP_0845C200, MapHeader_JP_0845C21C

MapGroup_JP_20: @ 0x0845E520
	@ 3 MapHeader pointers
	.4byte MapHeader_JP_0845C238, MapHeader_JP_0845C254, MapHeader_JP_0845C270

MapGroup_JP_21: @ 0x0845E52C
	@ 1 MapHeader pointers
	.4byte MapHeader_JP_0845C28C

MapGroup_JP_22: @ 0x0845E530
	@ 1 MapHeader pointers
	.4byte MapHeader_JP_0845C2A8

MapGroup_JP_23: @ 0x0845E534
	@ 1 MapHeader pointers
	.4byte MapHeader_JP_0845C2C4

MapGroup_JP_24: @ 0x0845E538
	@ 108 MapHeader pointers
	.4byte MapHeader_JP_0845C2E0, MapHeader_JP_0845C2FC, MapHeader_JP_0845C318, MapHeader_JP_0845C334, MapHeader_JP_0845C350, MapHeader_JP_0845C36C
	.4byte MapHeader_JP_0845C388, MapHeader_JP_0845C3A4, MapHeader_JP_0845C3C0, MapHeader_JP_0845C3DC, MapHeader_JP_0845C3F8, MapHeader_JP_0845C414
	.4byte MapHeader_JP_0845C430, MapHeader_JP_0845C44C, MapHeader_JP_0845C468, MapHeader_JP_0845C484, MapHeader_JP_0845C4A0, MapHeader_JP_0845C4BC
	.4byte MapHeader_JP_0845C4D8, MapHeader_JP_0845C4F4, MapHeader_JP_0845C510, MapHeader_JP_0845C52C, MapHeader_JP_0845C548, MapHeader_JP_0845C564
	.4byte MapHeader_JP_0845C580, MapHeader_JP_0845C59C, MapHeader_JP_0845C5B8, MapHeader_JP_0845C5D4, MapHeader_JP_0845C5F0, MapHeader_JP_0845C60C
	.4byte MapHeader_JP_0845C628, MapHeader_JP_0845C644, MapHeader_JP_0845C660, MapHeader_JP_0845C67C, MapHeader_JP_0845C698, MapHeader_JP_0845C6B4
	.4byte MapHeader_JP_0845C6D0, MapHeader_JP_0845C6EC, MapHeader_JP_0845C708, MapHeader_JP_0845C724, MapHeader_JP_0845C740, MapHeader_JP_0845C75C
	.4byte MapHeader_JP_0845C778, MapHeader_JP_0845C794, MapHeader_JP_0845C7B0, MapHeader_JP_0845C7CC, MapHeader_JP_0845C7E8, MapHeader_JP_0845C804
	.4byte MapHeader_JP_0845C820, MapHeader_JP_0845C83C, MapHeader_JP_0845C858, MapHeader_JP_0845C874, MapHeader_JP_0845C890, MapHeader_JP_0845C8AC
	.4byte MapHeader_JP_0845C8C8, MapHeader_JP_0845C8E4, MapHeader_JP_0845C900, MapHeader_JP_0845C91C, MapHeader_JP_0845C938, MapHeader_JP_0845C954
	.4byte MapHeader_JP_0845C970, MapHeader_JP_0845C98C, MapHeader_JP_0845C9A8, MapHeader_JP_0845C9C4, MapHeader_JP_0845C9E0, MapHeader_JP_0845C9FC
	.4byte MapHeader_JP_0845CA18, MapHeader_JP_0845CA34, MapHeader_JP_0845CA50, MapHeader_JP_0845CA6C, MapHeader_JP_0845CA88, MapHeader_JP_0845CAA4
	.4byte MapHeader_JP_0845CAC0, MapHeader_JP_0845CADC, MapHeader_JP_0845CAF8, MapHeader_JP_0845CB14, MapHeader_JP_0845CB30, MapHeader_JP_0845CB4C
	.4byte MapHeader_JP_0845CB68, MapHeader_JP_0845CB84, MapHeader_JP_0845CBA0, MapHeader_JP_0845CBBC, MapHeader_JP_0845CBD8, MapHeader_JP_0845CBF4
	.4byte MapHeader_JP_0845CC10, MapHeader_JP_0845CC2C, MapHeader_JP_0845CC48, MapHeader_JP_0845CC64, MapHeader_JP_0845CC80, MapHeader_JP_0845CC9C
	.4byte MapHeader_JP_0845CCB8, MapHeader_JP_0845CCD4, MapHeader_JP_0845CCF0, MapHeader_JP_0845CD0C, MapHeader_JP_0845CD28, MapHeader_JP_0845CD44
	.4byte MapHeader_JP_0845CD60, MapHeader_JP_0845CD7C, MapHeader_JP_0845CD98, MapHeader_JP_0845CDB4, MapHeader_JP_0845CDD0, MapHeader_JP_0845CDEC
	.4byte MapHeader_JP_0845CE08, MapHeader_JP_0845CE24, MapHeader_JP_0845CE40, MapHeader_JP_0845CE5C, MapHeader_JP_0845CE78, MapHeader_JP_0845CE94

MapGroup_JP_25: @ 0x0845E6E8
	@ 61 MapHeader pointers
	.4byte MapHeader_JP_0845CEB0, MapHeader_JP_0845CECC, MapHeader_JP_0845CEE8, MapHeader_JP_0845CF04, MapHeader_JP_0845CF20, MapHeader_JP_0845CF3C
	.4byte MapHeader_JP_0845CF58, MapHeader_JP_0845CF74, MapHeader_JP_0845CF90, MapHeader_JP_0845CFAC, MapHeader_JP_0845CFC8, MapHeader_JP_0845CFE4
	.4byte MapHeader_JP_0845D000, MapHeader_JP_0845D01C, MapHeader_JP_0845D038, MapHeader_JP_0845D054, MapHeader_JP_0845D070, MapHeader_JP_0845D08C
	.4byte MapHeader_JP_0845D0A8, MapHeader_JP_0845D0C4, MapHeader_JP_0845D0E0, MapHeader_JP_0845D0FC, MapHeader_JP_0845D118, MapHeader_JP_0845D134
	.4byte MapHeader_JP_0845D150, MapHeader_JP_0845D16C, MapHeader_JP_0845D188, MapHeader_JP_0845D1A4, MapHeader_JP_0845D1C0, MapHeader_JP_0845D1DC
	.4byte MapHeader_JP_0845D1F8, MapHeader_JP_0845D214, MapHeader_JP_0845D230, MapHeader_JP_0845D24C, MapHeader_JP_0845D268, MapHeader_JP_0845D284
	.4byte MapHeader_JP_0845D2A0, MapHeader_JP_0845D2BC, MapHeader_JP_0845D2D8, MapHeader_JP_0845D2F4, MapHeader_JP_0845D310, MapHeader_JP_0845D32C
	.4byte MapHeader_JP_0845D348, MapHeader_JP_0845D364, MapHeader_JP_0845D380, MapHeader_JP_0845D39C, MapHeader_JP_0845D3B8, MapHeader_JP_0845D3D4
	.4byte MapHeader_JP_0845D3F0, MapHeader_JP_0845D40C, MapHeader_JP_0845D428, MapHeader_JP_0845D444, MapHeader_JP_0845D460, MapHeader_JP_0845D47C
	.4byte MapHeader_JP_0845D498, MapHeader_JP_0845D4B4, MapHeader_JP_0845D4D0, MapHeader_JP_0845D4EC, MapHeader_JP_0845D508, MapHeader_JP_0845D524
	.4byte MapHeader_JP_0845D540

MapGroup_JP_26: @ 0x0845E7DC
	@ 89 MapHeader pointers
	.4byte MapHeader_JP_0845D55C, MapHeader_JP_0845D578, MapHeader_JP_0845D594, MapHeader_JP_0845D5B0, MapHeader_JP_0845D5CC, MapHeader_JP_0845D5E8
	.4byte MapHeader_JP_0845D604, MapHeader_JP_0845D620, MapHeader_JP_0845D63C, MapHeader_JP_0845D658, MapHeader_JP_0845D674, MapHeader_JP_0845D690
	.4byte MapHeader_JP_0845D6AC, MapHeader_JP_0845D6C8, MapHeader_JP_0845D6E4, MapHeader_JP_0845D700, MapHeader_JP_0845D71C, MapHeader_JP_0845D738
	.4byte MapHeader_JP_0845D754, MapHeader_JP_0845D770, MapHeader_JP_0845D78C, MapHeader_JP_0845D7A8, MapHeader_JP_0845D7C4, MapHeader_JP_0845D7E0
	.4byte MapHeader_JP_0845D7FC, MapHeader_JP_0845D818, MapHeader_JP_0845D834, MapHeader_JP_0845D850, MapHeader_JP_0845D86C, MapHeader_JP_0845D888
	.4byte MapHeader_JP_0845D8A4, MapHeader_JP_0845D8C0, MapHeader_JP_0845D8DC, MapHeader_JP_0845D8F8, MapHeader_JP_0845D914, MapHeader_JP_0845D930
	.4byte MapHeader_JP_0845D94C, MapHeader_JP_0845D968, MapHeader_JP_0845D984, MapHeader_JP_0845D9A0, MapHeader_JP_0845D9BC, MapHeader_JP_0845D9D8
	.4byte MapHeader_JP_0845D9F4, MapHeader_JP_0845DA10, MapHeader_JP_0845DA2C, MapHeader_JP_0845DA48, MapHeader_JP_0845DA64, MapHeader_JP_0845DA80
	.4byte MapHeader_JP_0845DA9C, MapHeader_JP_0845DAB8, MapHeader_JP_0845DAD4, MapHeader_JP_0845DAF0, MapHeader_JP_0845DB0C, MapHeader_JP_0845DB28
	.4byte MapHeader_JP_0845DB44, MapHeader_JP_0845DB60, MapHeader_JP_0845DB7C, MapHeader_JP_0845DB98, MapHeader_JP_0845DBB4, MapHeader_JP_0845DBD0
	.4byte MapHeader_JP_0845DBEC, MapHeader_JP_0845DC08, MapHeader_JP_0845DC24, MapHeader_JP_0845DC40, MapHeader_JP_0845DC5C, MapHeader_JP_0845DC78
	.4byte MapHeader_JP_0845DC94, MapHeader_JP_0845DCB0, MapHeader_JP_0845DCCC, MapHeader_JP_0845DCE8, MapHeader_JP_0845DD04, MapHeader_JP_0845DD20
	.4byte MapHeader_JP_0845DD3C, MapHeader_JP_0845DD58, MapHeader_JP_0845DD74, MapHeader_JP_0845DD90, MapHeader_JP_0845DDAC, MapHeader_JP_0845DDC8
	.4byte MapHeader_JP_0845DDE4, MapHeader_JP_0845DE00, MapHeader_JP_0845DE1C, MapHeader_JP_0845DE38, MapHeader_JP_0845DE54, MapHeader_JP_0845DE70
	.4byte MapHeader_JP_0845DE8C, MapHeader_JP_0845DEA8, MapHeader_JP_0845DEC4, MapHeader_JP_0845DEE0, MapHeader_JP_0845DEFC

MapGroup_JP_27: @ 0x0845E940
	@ 2 MapHeader pointers
	.4byte MapHeader_JP_0845DF18, MapHeader_JP_0845DF34

MapGroup_JP_28: @ 0x0845E948
	@ 1 MapHeader pointers
	.4byte MapHeader_JP_0845DF50

MapGroup_JP_29: @ 0x0845E94C
	@ 13 MapHeader pointers
	.4byte MapHeader_JP_0845DF6C, MapHeader_JP_0845DF88, MapHeader_JP_0845DFA4, MapHeader_JP_0845DFC0, MapHeader_JP_0845DFDC, MapHeader_JP_0845DFF8
	.4byte MapHeader_JP_0845E014, MapHeader_JP_0845E030, MapHeader_JP_0845E04C, MapHeader_JP_0845E068, MapHeader_JP_0845E084, MapHeader_JP_0845E0A0
	.4byte MapHeader_JP_0845E0BC

MapGroup_JP_30: @ 0x0845E980
	@ 1 MapHeader pointers
	.4byte MapHeader_JP_0845E0D8

MapGroup_JP_31: @ 0x0845E984
	@ 1 MapHeader pointers
	.4byte MapHeader_JP_0845E0F4

MapGroup_JP_32: @ 0x0845E988
	@ 3 MapHeader pointers
	.4byte MapHeader_JP_0845E110, MapHeader_JP_0845E12C, MapHeader_JP_0845E148

MapGroup_JP_33: @ 0x0845E994
	@ 1 MapHeader pointers
	.4byte MapHeader_JP_0845E164
