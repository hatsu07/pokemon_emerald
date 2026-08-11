.include "asm/macros/semantic_raw_structs.inc"
	.globl gUnknown_845A1F4
gUnknown_845A1F4: @ 0x0845A1F4
	@ analyzed canonical ROM range 0x0845A1F4-0x0845DFD9
	@ pass3: gMapLayouts + MapHeader table; byte-verified
	@ pret/pokeemerald-jp direct xref for 0x0845A1F4: battle_pyramid.s: GenerateBattlePyramidFloorLayout; overworld.s: GetMapLayout
	.globl gMapLayouts
gMapLayouts: @ 0x0845A1F4
	.4byte MapLayout_JP_083B8944, MapLayout_JP_083B9C24, MapLayout_JP_083BA284, MapLayout_JP_083BB564, MapLayout_JP_083BBBC4, MapLayout_JP_083BD4E4
	.4byte MapLayout_JP_083BEE04, MapLayout_JP_083C0A44, MapLayout_JP_083C2364, MapLayout_JP_083C26A4, MapLayout_JP_083C29E4, MapLayout_JP_083C2D24
	.4byte MapLayout_JP_083C3064, MapLayout_JP_083C33A4, MapLayout_JP_083C36E4, MapLayout_JP_083C3D44, MapLayout_JP_083C4084, MapLayout_JP_083C4874
	.4byte MapLayout_JP_083C5654, MapLayout_JP_083C6F74, MapLayout_JP_083C8894, MapLayout_JP_083C9534, MapLayout_JP_083C9EB4, MapLayout_JP_083CA834
	.4byte MapLayout_JP_083CBC04, MapLayout_JP_083CDB64, MapLayout_JP_083D0744, MapLayout_JP_083D1A24, MapLayout_JP_083D29E4, MapLayout_JP_083D4304
	.4byte MapLayout_JP_083D5C24, MapLayout_JP_083D6BE4, MapLayout_JP_083D7564, MapLayout_JP_083D8204, MapLayout_JP_083DADE4, MapLayout_JP_083DCD44
	.4byte MapLayout_JP_083DD9E4, MapLayout_JP_083DE684, MapLayout_JP_083DFC84, MapLayout_JP_083E2EA4, MapLayout_JP_083E47C4, MapLayout_JP_083E79E4
	.4byte MapLayout_JP_083EAC04, MapLayout_JP_083ED1A4, MapLayout_JP_083EEAC4, MapLayout_JP_083F03E4, MapLayout_JP_083F16C4, MapLayout_JP_083F2FE4
	.4byte MapLayout_JP_083F4904, MapLayout_JP_083F6224, MapLayout_JP_083F9444, MapLayout_JP_083FC664, MapLayout_JP_083FEC04, MapLayout_JP_083FECEC
	.4byte MapLayout_JP_083FED9C, MapLayout_JP_083FEE84, MapLayout_JP_083FEF34, MapLayout_JP_083FF0A8, MapLayout_JP_083FF17C, MapLayout_JP_083FF24C
	.4byte MapLayout_JP_083FF368, MapLayout_JP_083FF4A0, MapLayout_JP_083FF570, MapLayout_JP_083FF630, MapLayout_JP_083FFA40, MapLayout_JP_083FFB94
	.4byte MapLayout_JP_083FFC68, MapLayout_JP_083FFD38, MapLayout_JP_083FFFE0, MapLayout_JP_08400288, MapLayout_JP_084003A4, MapLayout_JP_08400498
	.4byte MapLayout_JP_084007AC, MapLayout_JP_0840084C, MapLayout_JP_08400870, MapLayout_JP_084009A0, MapLayout_JP_08400A74, MapLayout_JP_08400B48
	.4byte MapLayout_JP_08401348, MapLayout_JP_08401408, MapLayout_JP_084016A0, MapLayout_JP_084018C0, MapLayout_JP_084018E4, MapLayout_JP_08401908
	.4byte MapLayout_JP_08401A5C, MapLayout_JP_08401BE4, MapLayout_JP_08401D6C, MapLayout_JP_0840205C, MapLayout_JP_08402220, MapLayout_JP_08402318
	.4byte MapLayout_JP_0840251C, MapLayout_JP_08402694, MapLayout_JP_0840280C, MapLayout_JP_084029E4, MapLayout_JP_08402B0C, MapLayout_JP_08402C04
	.4byte MapLayout_JP_08402CF4, MapLayout_JP_08402DDC, MapLayout_JP_08402E5C, MapLayout_JP_08403264, MapLayout_JP_084032E4, MapLayout_JP_084033DC
	.4byte MapLayout_JP_08403648, MapLayout_JP_084038A4, MapLayout_JP_08403BAC, MapLayout_JP_084048F4, MapLayout_JP_08404A64, MapLayout_JP_084051D4
	.4byte MapLayout_JP_08405568, MapLayout_JP_084058FC, MapLayout_JP_08405A88, MapLayout_JP_08405C14, MapLayout_JP_08405DA0, MapLayout_JP_08405F2C
	.4byte MapLayout_JP_084060A0, MapLayout_JP_084061E0, MapLayout_JP_08406310, MapLayout_JP_08406468, MapLayout_JP_08406528, MapLayout_JP_084067EC
	.4byte MapLayout_JP_084068BC, MapLayout_JP_08406990, MapLayout_JP_08406A88, MapLayout_JP_08406CA0, MapLayout_JP_08407698, MapLayout_JP_08407E38
	.4byte MapLayout_JP_084086F4, MapLayout_JP_084088A0, MapLayout_JP_08408F80, MapLayout_JP_08409130, MapLayout_JP_084095B4, MapLayout_JP_08409AC0
	.4byte MapLayout_JP_0840A160, MapLayout_JP_0840A800, MapLayout_JP_0840B8A0, MapLayout_JP_0840C770, MapLayout_JP_0840CAD4, MapLayout_JP_0840CC48
	.4byte MapLayout_JP_0840CDBC, MapLayout_JP_0840CF30, MapLayout_JP_0840D0A4, MapLayout_JP_0840D218, MapLayout_JP_0840D8C8, MapLayout_JP_0840E278
	.4byte MapLayout_JP_0840E8F8, MapLayout_JP_0840EA14, MapLayout_JP_0840ED54, MapLayout_JP_0840F0BC, MapLayout_JP_0840F28C, MapLayout_JP_0840F4CC
	.4byte MapLayout_JP_0840F798, MapLayout_JP_0840FAD8, MapLayout_JP_0840FF48, MapLayout_JP_084103E8, MapLayout_JP_0841053C, MapLayout_JP_08410F10
	.4byte MapLayout_JP_0841130C, MapLayout_JP_08411750, MapLayout_JP_08411B94, MapLayout_JP_08411F28, MapLayout_JP_08412268, MapLayout_JP_0841255C
	.4byte MapLayout_JP_084135A8, MapLayout_JP_08413F5C, MapLayout_JP_08414D24, MapLayout_JP_08414FBC, MapLayout_JP_08415340, MapLayout_JP_08415CF4
	.4byte MapLayout_JP_08416ABC, MapLayout_JP_08416AE0, MapLayout_JP_08416B04, MapLayout_JP_08416B28, MapLayout_JP_08416B4C, MapLayout_JP_08416B70
	.4byte MapLayout_JP_08416B94, MapLayout_JP_08416BB8, MapLayout_JP_08416BDC, MapLayout_JP_08416C00, MapLayout_JP_08416C24, MapLayout_JP_08416C48
	.4byte MapLayout_JP_08416C6C, MapLayout_JP_08416C90, MapLayout_JP_08416CB4, MapLayout_JP_08416D78, MapLayout_JP_08417ABC, MapLayout_JP_08417EA4
	.4byte MapLayout_JP_08418074, MapLayout_JP_084182F8, MapLayout_JP_0841841C, MapLayout_JP_084185EC, MapLayout_JP_0841872C, MapLayout_JP_084187CC
	.4byte MapLayout_JP_0841887C, MapLayout_JP_084189D0, MapLayout_JP_08418A70, MapLayout_JP_08418BB8, MapLayout_JP_08418CA0, MapLayout_JP_08418D88
	.4byte MapLayout_JP_08418E70, MapLayout_JP_08418F58, MapLayout_JP_08419040, MapLayout_JP_08419128, MapLayout_JP_08419228, MapLayout_JP_08419344
	.4byte MapLayout_JP_08419438, MapLayout_JP_08419554, MapLayout_JP_08419654, MapLayout_JP_08419748, MapLayout_JP_08419858, MapLayout_JP_084199C4
	.4byte MapLayout_JP_08419B38, MapLayout_JP_08419C60, MapLayout_JP_08419D90, MapLayout_JP_08419ED0, MapLayout_JP_0841A000, MapLayout_JP_0841A170
	.4byte MapLayout_JP_0841A2C4, MapLayout_JP_0841A450, MapLayout_JP_0841A5F8, MapLayout_JP_0841A74C, MapLayout_JP_0841A868, MapLayout_JP_0841A960
	.4byte MapLayout_JP_0841AB10, MapLayout_JP_0841AC2C, MapLayout_JP_0841AD98, MapLayout_JP_0841ADBC, MapLayout_JP_0841ADE0, MapLayout_JP_0841AE04
	.4byte MapLayout_JP_0841AE28, MapLayout_JP_0841AE4C, MapLayout_JP_0841AE70, MapLayout_JP_0841AFDC, MapLayout_JP_0841B148, MapLayout_JP_0841B2B4
	.4byte MapLayout_JP_0841B420, MapLayout_JP_0841B58C, MapLayout_JP_0841B5E0, MapLayout_JP_0841C280, MapLayout_JP_0841CF20, MapLayout_JP_0841DBC0
	.4byte MapLayout_JP_0841E860, MapLayout_JP_0841F448, MapLayout_JP_0841F594, MapLayout_JP_0841F674, MapLayout_JP_0841F754, MapLayout_JP_0841FA44
	.4byte MapLayout_JP_0841FCF8, MapLayout_JP_0841FFAC, MapLayout_JP_08420260, MapLayout_JP_08420514, MapLayout_JP_084207C8, MapLayout_JP_08420A7C
	.4byte MapLayout_JP_08420D30, MapLayout_JP_08420FE4, MapLayout_JP_08421064, MapLayout_JP_08421138, MapLayout_JP_08421278, MapLayout_JP_084213B8
	.4byte MapLayout_JP_084214F8, MapLayout_JP_08421638, MapLayout_JP_08421778, MapLayout_JP_08421948, MapLayout_JP_08423268, MapLayout_JP_0842347C
	.4byte MapLayout_JP_0842541C, MapLayout_JP_08425484, MapLayout_JP_08425550, MapLayout_JP_08425624, MapLayout_JP_0842579C, MapLayout_JP_08425984
	.4byte MapLayout_JP_08425BAC, MapLayout_JP_08425D84, MapLayout_JP_08425DE0, MapLayout_JP_08429000, MapLayout_JP_08429160, MapLayout_JP_084292C0
	.4byte MapLayout_JP_084294B4, MapLayout_JP_08429690, MapLayout_JP_08429BC0, MapLayout_JP_0842A044, MapLayout_JP_0842A4C8, MapLayout_JP_0842A650
	.4byte MapLayout_JP_0842AEB0, MapLayout_JP_0842B298, MapLayout_JP_0842BDDC, MapLayout_JP_0842C920, MapLayout_JP_0842C944, MapLayout_JP_0842CB08
	.4byte MapLayout_JP_0842CC48, MapLayout_JP_0842D424, MapLayout_JP_0842D954, MapLayout_JP_0842E43C, MapLayout_JP_0842EEC0, MapLayout_JP_0842EFDC
	.4byte MapLayout_JP_0842F0F8, MapLayout_JP_0842F214, MapLayout_JP_0842F2A4, MapLayout_JP_0842F4C4, MapLayout_JP_0842F5BC, MapLayout_JP_0842F6B4
	.4byte MapLayout_JP_0842F788, MapLayout_JP_084306CC, MapLayout_JP_08431560, MapLayout_JP_08431948, MapLayout_JP_08431A58, MapLayout_JP_08431B50
	.4byte MapLayout_JP_08431BE0, MapLayout_JP_08431C70, MapLayout_JP_08431D00, MapLayout_JP_08432248, MapLayout_JP_084324C0, MapLayout_JP_084327B4
	.4byte MapLayout_JP_084328B4, MapLayout_JP_084329B4, MapLayout_JP_08432CC0, MapLayout_JP_08433370, MapLayout_JP_08433F30, MapLayout_JP_084345B0
	.4byte MapLayout_JP_08435890, MapLayout_JP_08435B38, MapLayout_JP_08436060, MapLayout_JP_08436208, MapLayout_JP_084363B0, MapLayout_JP_08436558
	.4byte MapLayout_JP_08436700, MapLayout_JP_084370D4, MapLayout_JP_084371A4, MapLayout_JP_08437674, MapLayout_JP_08437748, MapLayout_JP_084378F0
	.4byte MapLayout_JP_08437E20, MapLayout_JP_08438150, MapLayout_JP_08438410, MapLayout_JP_084384C0, MapLayout_JP_08438670, MapLayout_JP_0843918C
	.4byte MapLayout_JP_08439BBC, MapLayout_JP_0843A694, MapLayout_JP_0843ABF4, MapLayout_JP_0843AF44, MapLayout_JP_0843BC4C, MapLayout_JP_0843BEC4
	.4byte MapLayout_JP_0843C0C0, MapLayout_JP_0843C20C, MapLayout_JP_0843EAAC, MapLayout_JP_0843EC94, MapLayout_JP_0843EE90, MapLayout_JP_0843EFE8
	.4byte MapLayout_JP_0843F128, MapLayout_JP_0843F228, MapLayout_JP_0843F368, MapLayout_JP_0843F418, MapLayout_JP_0843F488, MapLayout_JP_0843F648
	.4byte MapLayout_JP_0843F860, MapLayout_JP_0843F9E0, MapLayout_JP_08441620, MapLayout_JP_084417A8, MapLayout_JP_084417CC, MapLayout_JP_08441A08
	.4byte MapLayout_JP_08441AA8, MapLayout_JP_08441B48, MapLayout_JP_08441BE8, MapLayout_JP_08441C88, MapLayout_JP_08441D28, MapLayout_JP_08441DC8
	.4byte MapLayout_JP_08441E68, MapLayout_JP_08441F08, MapLayout_JP_08441FA8, MapLayout_JP_08442048, MapLayout_JP_084420E8, MapLayout_JP_08442188
	.4byte MapLayout_JP_08442228, MapLayout_JP_084422C8, MapLayout_JP_08442368, MapLayout_JP_08442408, MapLayout_JP_084424A8, MapLayout_JP_08442AE4
	.4byte MapLayout_JP_08443134, MapLayout_JP_08443A3C, MapLayout_JP_08443D28, MapLayout_JP_08444014, MapLayout_JP_08444300, MapLayout_JP_08444424
	.4byte MapLayout_JP_08444494, MapLayout_JP_08444568, MapLayout_JP_08444674, MapLayout_JP_08444798, MapLayout_JP_084460B4, MapLayout_JP_0844634C
	.4byte MapLayout_JP_08446418, MapLayout_JP_08448FF8, MapLayout_JP_08449180, MapLayout_JP_08449E20, MapLayout_JP_0844AAC0, MapLayout_JP_0844B118
	.4byte MapLayout_JP_0844B208, MapLayout_JP_0844B374, MapLayout_JP_0844B490, MapLayout_JP_0844C818, MapLayout_JP_0844CBD4, MapLayout_JP_0844D82C
	.4byte MapLayout_JP_0844DE30, MapLayout_JP_0844E558, MapLayout_JP_0844E734, MapLayout_JP_0844E8E4, MapLayout_JP_0844EC24, MapLayout_JP_0844EF64
	.4byte MapLayout_JP_0844F5D8, MapLayout_JP_08450EF8, MapLayout_JP_08452818, MapLayout_JP_08454138, MapLayout_JP_084547AC, MapLayout_JP_08454A54
	.4byte MapLayout_JP_08454D14, MapLayout_JP_08454FD4, MapLayout_JP_08455294, MapLayout_JP_08455554, MapLayout_JP_08455894, MapLayout_JP_08455EB4
	.4byte MapLayout_JP_084562C4, MapLayout_JP_08456824, MapLayout_JP_08456DBC, MapLayout_JP_084571A4, MapLayout_JP_08457254, MapLayout_JP_08457304
	.4byte MapLayout_JP_08457520, MapLayout_JP_08458764, MapLayout_JP_08458838, MapLayout_JP_084588B8, MapLayout_JP_08459058, MapLayout_JP_084591CC
	.4byte MapLayout_JP_08459374, MapLayout_JP_0845951C, MapLayout_JP_084596C4, MapLayout_JP_0845986C, MapLayout_JP_08459A14, MapLayout_JP_08459F44
	.4byte MapLayout_JP_0845A014, MapLayout_JP_0845A10C, MapLayout_JP_0845A1DC

MapHeader_JP_0845A8D8: @ 0x0845A8D8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083B8944, MapEvents_JP_084FE8C4, 0x081DB7E8, MapConnections_JP_0845EB0C, 0x016A, 0x0001, 0x07, 0x00, 0x02, 0x02, 0x0D, 0x00

MapHeader_JP_0845A8F4: @ 0x0845A8F4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083B9C24, MapEvents_JP_084FED24, 0x081DBFD3, MapConnections_JP_0845EB38, 0x01B1, 0x0002, 0x08, 0x00, 0x02, 0x02, 0x0D, 0x00

MapHeader_JP_0845A910: @ 0x0845A910
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083BA284, MapEvents_JP_084FEED8, 0x081DD9BE, MapConnections_JP_0845EB70, 0x018F, 0x0003, 0x09, 0x00, 0x02, 0x02, 0x0D, 0x00

MapHeader_JP_0845A92C: @ 0x0845A92C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083BB564, MapEvents_JP_084FF294, 0x081DE6F6, MapConnections_JP_0845EB9C, 0x018F, 0x0004, 0x0A, 0x00, 0x02, 0x02, 0x0D, 0x00

MapHeader_JP_0845A948: @ 0x0845A948
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083BBBC4, MapEvents_JP_084FF3E0, 0x081DFDEE, MapConnections_JP_0845EBBC, 0x017E, 0x0005, 0x0B, 0x00, 0x02, 0x02, 0x0D, 0x00

MapHeader_JP_0845A964: @ 0x0845A964
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083BD4E4, MapEvents_JP_084FF710, 0x081E0171, MapConnections_JP_0845EBDC, 0x0198, 0x0006, 0x0C, 0x00, 0x02, 0x02, 0x0D, 0x00

MapHeader_JP_0845A980: @ 0x0845A980
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083BEE04, MapEvents_JP_084FFA0C, 0x081E1565, MapConnections_JP_0845EC08, 0x018F, 0x0007, 0x0D, 0x00, 0x02, 0x02, 0x0D, 0x00

MapHeader_JP_0845A99C: @ 0x0845A99C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083C0A44, MapEvents_JP_084FFC80, 0x081E1CF6, 0, 0x01BD, 0x0008, 0x0E, 0x00, 0x02, 0x02, 0x0D, 0x00

MapHeader_JP_0845A9B8: @ 0x0845A9B8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083C2364, MapEvents_JP_084FFDA0, 0x081E3979, MapConnections_JP_0845EC24, 0x01A6, 0x0009, 0x0F, 0x00, 0x02, 0x02, 0x0D, 0x00

MapHeader_JP_0845A9D4: @ 0x0845A9D4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083C26A4, MapEvents_JP_084FFF4C, 0x081E39F5, MapConnections_JP_0845EA2C, 0x0195, 0x000A, 0x00, 0x00, 0x02, 0x01, 0x0D, 0x00

MapHeader_JP_0845A9F0: @ 0x0845A9F0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083C29E4, MapEvents_JP_0850005C, 0x081E4782, MapConnections_JP_0845EA58, 0x016B, 0x000B, 0x01, 0x00, 0x02, 0x01, 0x0D, 0x00

MapHeader_JP_0845AA0C: @ 0x0845AA0C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083C2D24, MapEvents_JP_0850014C, 0x081E4C57, MapConnections_JP_0845EA78, 0x01AB, 0x000C, 0x02, 0x00, 0x02, 0x01, 0x0D, 0x00

MapHeader_JP_0845AA28: @ 0x0845AA28
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083C3064, MapEvents_JP_085002D8, 0x081E5662, MapConnections_JP_0845EA8C, 0x016B, 0x000D, 0x03, 0x00, 0x02, 0x01, 0x0D, 0x00

MapHeader_JP_0845AA44: @ 0x0845AA44
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083C33A4, MapEvents_JP_085003D4, 0x081E5E63, MapConnections_JP_0845EAAC, 0x01B5, 0x000E, 0x04, 0x00, 0x02, 0x01, 0x0D, 0x00

MapHeader_JP_0845AA60: @ 0x0845AA60
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083C36E4, MapEvents_JP_085004E0, 0x081E6059, MapConnections_JP_0845EACC, 0x018E, 0x000F, 0x05, 0x00, 0x02, 0x01, 0x0D, 0x00

MapHeader_JP_0845AA7C: @ 0x0845AA7C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083C3D44, MapEvents_JP_08500590, 0x081E6381, MapConnections_JP_0845EAEC, 0x0198, 0x0010, 0x06, 0x00, 0x02, 0x01, 0x0D, 0x00

MapHeader_JP_0845AA98: @ 0x0845AA98
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083C4084, MapEvents_JP_085006D0, 0x081E64B6, MapConnections_JP_0845EC44, 0x0167, 0x0011, 0x10, 0x00, 0x02, 0x03, 0x0D, 0x00

MapHeader_JP_0845AAB4: @ 0x0845AAB4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083C4874, MapEvents_JP_085007D4, 0x081E6824, MapConnections_JP_0845EC64, 0x0167, 0x0012, 0x11, 0x00, 0x02, 0x03, 0x0D, 0x00

MapHeader_JP_0845AAD0: @ 0x0845AAD0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083C5654, MapEvents_JP_085009DC, 0x081E6A59, MapConnections_JP_0845EC84, 0x0167, 0x0013, 0x12, 0x00, 0x02, 0x03, 0x0D, 0x00

MapHeader_JP_0845AAEC: @ 0x0845AAEC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083C6F74, MapEvents_JP_08500DE8, 0x081E712E, MapConnections_JP_0845ECB0, 0x0191, 0x0014, 0x13, 0x00, 0x02, 0x03, 0x0D, 0x00

MapHeader_JP_0845AB08: @ 0x0845AB08
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083C8894, MapEvents_JP_08500EDC, 0x081E819E, MapConnections_JP_0845ECDC, 0x0191, 0x0015, 0x14, 0x00, 0x02, 0x03, 0x0D, 0x00

MapHeader_JP_0845AB24: @ 0x0845AB24
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083C9534, MapEvents_JP_08500FA0, 0x081E83CA, MapConnections_JP_0845ECFC, 0x0191, 0x0016, 0x15, 0x00, 0x02, 0x03, 0x0D, 0x00

MapHeader_JP_0845AB40: @ 0x0845AB40
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083C9EB4, MapEvents_JP_0850105C, 0x081E84AB, MapConnections_JP_0845ED1C, 0x0191, 0x0017, 0x16, 0x00, 0x02, 0x03, 0x0D, 0x00

MapHeader_JP_0845AB5C: @ 0x0845AB5C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083CA834, MapEvents_JP_0850112C, 0x081E85A0, MapConnections_JP_0845ED3C, 0x0191, 0x0018, 0x17, 0x00, 0x02, 0x03, 0x0D, 0x00

MapHeader_JP_0845AB78: @ 0x0845AB78
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083CBC04, MapEvents_JP_085013E8, 0x081E8676, MapConnections_JP_0845ED5C, 0x0191, 0x0019, 0x18, 0x00, 0x02, 0x03, 0x0D, 0x00

MapHeader_JP_0845AB94: @ 0x0845AB94
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083CDB64, MapEvents_JP_085018E8, 0x081E8E49, MapConnections_JP_0845ED88, 0x0168, 0x001A, 0x19, 0x00, 0x02, 0x03, 0x0D, 0x00

MapHeader_JP_0845ABB0: @ 0x0845ABB0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083D0744, MapEvents_JP_0850206C, 0x081EA14D, MapConnections_JP_0845EDB4, 0x0168, 0x001B, 0x1A, 0x00, 0x02, 0x03, 0x0D, 0x00

MapHeader_JP_0845ABCC: @ 0x0845ABCC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083D1A24, MapEvents_JP_08502224, 0x081EAE8C, MapConnections_JP_0845EDE0, 0x0168, 0x001C, 0x1B, 0x00, 0x02, 0x03, 0x0D, 0x00

MapHeader_JP_0845ABE8: @ 0x0845ABE8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083D29E4, MapEvents_JP_08502560, 0x081EB153, MapConnections_JP_0845EE0C, 0x01A2, 0x001D, 0x1C, 0x00, 0x02, 0x03, 0x0D, 0x00

MapHeader_JP_0845AC04: @ 0x0845AC04
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083D4304, MapEvents_JP_085028B4, 0x081EB474, MapConnections_JP_0845EE2C, 0x0168, 0x001E, 0x1D, 0x00, 0x02, 0x03, 0x0D, 0x00

MapHeader_JP_0845AC20: @ 0x0845AC20
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083D5C24, MapEvents_JP_08502BB0, 0x081EB804, MapConnections_JP_0845EE4C, 0x0191, 0x001F, 0x1E, 0x00, 0x02, 0x03, 0x0D, 0x00

MapHeader_JP_0845AC3C: @ 0x0845AC3C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083D6BE4, MapEvents_JP_08502F20, 0x081EBAB5, MapConnections_JP_0845EE6C, 0x0191, 0x0020, 0x1F, 0x00, 0x02, 0x03, 0x0D, 0x00

MapHeader_JP_0845AC58: @ 0x0845AC58
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083D7564, MapEvents_JP_085031AC, 0x081EC423, MapConnections_JP_0845EE8C, 0x0168, 0x0021, 0x20, 0x00, 0x02, 0x03, 0x0D, 0x00

MapHeader_JP_0845AC74: @ 0x0845AC74
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083D8204, MapEvents_JP_08503464, 0x081EC7E9, MapConnections_JP_0845EEB8, 0x7FFF, 0x0022, 0x21, 0x00, 0x02, 0x03, 0x0D, 0x00

MapHeader_JP_0845AC90: @ 0x0845AC90
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083DADE4, MapEvents_JP_08503B10, 0x081ECCE5, MapConnections_JP_0845EED8, 0x0192, 0x0023, 0x22, 0x00, 0x02, 0x03, 0x0D, 0x00

MapHeader_JP_0845ACAC: @ 0x0845ACAC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083DCD44, MapEvents_JP_0850412C, 0x081ED864, MapConnections_JP_0845EEF8, 0x0169, 0x0024, 0x23, 0x00, 0x02, 0x03, 0x0D, 0x00

MapHeader_JP_0845ACC8: @ 0x0845ACC8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083DD9E4, MapEvents_JP_085044B8, 0x081EE0D9, MapConnections_JP_0845EF24, 0x0169, 0x0025, 0x24, 0x00, 0x02, 0x03, 0x0D, 0x00

MapHeader_JP_0845ACE4: @ 0x0845ACE4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083DE684, MapEvents_JP_085044D4, 0x081EE3D5, MapConnections_JP_0845EF44, 0x0176, 0x0026, 0x25, 0x00, 0x02, 0x03, 0x0D, 0x00

MapHeader_JP_0845AD00: @ 0x0845AD00
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083DFC84, MapEvents_JP_08504ADC, 0x081EE3D6, MapConnections_JP_0845EF64, 0x0176, 0x0027, 0x26, 0x00, 0x02, 0x03, 0x0D, 0x00

MapHeader_JP_0845AD1C: @ 0x0845AD1C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083E2EA4, MapEvents_JP_08504C24, 0x081EE79F, MapConnections_JP_0845EFA8, 0x0169, 0x0028, 0x27, 0x00, 0x02, 0x06, 0x0D, 0x00

MapHeader_JP_0845AD38: @ 0x0845AD38
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083E47C4, MapEvents_JP_08504D60, 0x081EE97C, MapConnections_JP_0845EFD4, 0x0169, 0x0029, 0x28, 0x00, 0x02, 0x06, 0x0D, 0x00

MapHeader_JP_0845AD54: @ 0x0845AD54
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083E79E4, MapEvents_JP_08504E4C, 0x081EEAFA, MapConnections_JP_0845F000, 0x0169, 0x002A, 0x29, 0x00, 0x02, 0x06, 0x0D, 0x00

MapHeader_JP_0845AD70: @ 0x0845AD70
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083EAC04, MapEvents_JP_08504FA4, 0x081EEC0D, MapConnections_JP_0845F038, 0x0169, 0x002B, 0x2A, 0x00, 0x02, 0x06, 0x0D, 0x00

MapHeader_JP_0845AD8C: @ 0x0845AD8C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083ED1A4, MapEvents_JP_085050CC, 0x081EED6C, MapConnections_JP_0845F070, 0x0169, 0x002C, 0x2B, 0x00, 0x02, 0x06, 0x0D, 0x00

MapHeader_JP_0845ADA8: @ 0x0845ADA8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083EEAC4, MapEvents_JP_08505158, 0x081EF2B4, MapConnections_JP_0845F09C, 0x0192, 0x002D, 0x2C, 0x00, 0x02, 0x06, 0x0D, 0x00

MapHeader_JP_0845ADC4: @ 0x0845ADC4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08423268, MapEvents_JP_085051CC, 0x081EF38F, MapConnections_JP_0845F0BC, 0x0192, 0x0107, 0x2D, 0x00, 0x02, 0x06, 0x0D, 0x00

MapHeader_JP_0845ADE0: @ 0x0845ADE0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083F16C4, MapEvents_JP_085052A8, 0x081EF434, MapConnections_JP_0845F0DC, 0x0192, 0x002F, 0x2E, 0x00, 0x02, 0x06, 0x0D, 0x00

MapHeader_JP_0845ADFC: @ 0x0845ADFC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083F2FE4, MapEvents_JP_085053AC, 0x081EF519, MapConnections_JP_0845F0FC, 0x0192, 0x0030, 0x2F, 0x00, 0x02, 0x06, 0x0D, 0x00

MapHeader_JP_0845AE18: @ 0x0845AE18
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083F4904, MapEvents_JP_085054B0, 0x081EF5D2, MapConnections_JP_0845F11C, 0x0192, 0x0031, 0x30, 0x00, 0x02, 0x06, 0x0D, 0x00

MapHeader_JP_0845AE34: @ 0x0845AE34
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083F6224, MapEvents_JP_085055CC, 0x081EF674, MapConnections_JP_0845F13C, 0x0192, 0x0032, 0x31, 0x00, 0x02, 0x06, 0x0D, 0x00

MapHeader_JP_0845AE50: @ 0x0845AE50
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08429000, MapEvents_JP_08505634, 0x081EF752, MapConnections_JP_0845F170, 0x019B, 0x0112, 0x32, 0x00, 0x0E, 0x05, 0x0D, 0x00

MapHeader_JP_0845AE6C: @ 0x0845AE6C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083F9444, MapEvents_JP_085056B0, 0x081EF753, MapConnections_JP_0845F1B0, 0x019B, 0x0033, 0x33, 0x00, 0x0E, 0x05, 0x0D, 0x00

MapHeader_JP_0845AE88: @ 0x0845AE88
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FC664, MapEvents_JP_08505704, 0x081EF754, MapConnections_JP_0845F1DC, 0x019B, 0x0034, 0x34, 0x00, 0x0E, 0x05, 0x0D, 0x00

MapHeader_JP_0845AEA4: @ 0x0845AEA4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FEC04, MapEvents_JP_08505738, 0x081EF760, MapConnections_JP_0845F1FC, 0x019B, 0x0035, 0x35, 0x00, 0x0E, 0x05, 0x0D, 0x00

MapHeader_JP_0845AEC0: @ 0x0845AEC0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08454138, MapEvents_JP_0850575C, 0x081EF761, MapConnections_JP_0845F210, 0x019B, 0x019C, 0xD0, 0x00, 0x0E, 0x05, 0x0D, 0x00

MapHeader_JP_0845AEDC: @ 0x0845AEDC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08450EF8, MapEvents_JP_08505780, 0x081EF76D, MapConnections_JP_0845F150, 0x019B, 0x019A, 0xCE, 0x00, 0x0E, 0x05, 0x0D, 0x00

MapHeader_JP_0845AEF8: @ 0x0845AEF8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08452818, MapEvents_JP_085057A4, 0x081EF779, MapConnections_JP_0845F184, 0x019B, 0x019B, 0xCF, 0x00, 0x0E, 0x05, 0x0D, 0x00

MapHeader_JP_0845AF14: @ 0x0845AF14
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FECEC, MapEvents_JP_085058B8, 0x081EF785, 0, 0x0195, 0x0036, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845AF30: @ 0x0845AF30
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FED9C, MapEvents_JP_08505A84, 0x081EFF92, 0, 0x0195, 0x0037, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845AF4C: @ 0x0845AF4C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FEE84, MapEvents_JP_08505B98, 0x081F0358, 0, 0x0195, 0x0038, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845AF68: @ 0x0845AF68
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FEF34, MapEvents_JP_08505D64, 0x081F0AE2, 0, 0x0195, 0x0039, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845AF84: @ 0x0845AF84
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF0A8, MapEvents_JP_08505ECC, 0x081F122C, 0, 0x017F, 0x003A, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845AFA0: @ 0x0845AFA0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF17C, MapEvents_JP_08505F08, 0x081F28D3, 0, 0x016B, 0x003B, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845AFBC: @ 0x0845AFBC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF24C, MapEvents_JP_08505F5C, 0x081F2949, 0, 0x016B, 0x003C, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845AFD8: @ 0x0845AFD8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, MapEvents_JP_08505FE8, 0x081F29A2, 0, 0x0190, 0x003D, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845AFF4: @ 0x0845AFF4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, MapEvents_JP_08506074, 0x081F2AE4, 0, 0x0190, 0x003E, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B010: @ 0x0845B010
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF570, MapEvents_JP_085060E0, 0x081F2B0B, 0, 0x0194, 0x003F, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B02C: @ 0x0845B02C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF630, MapEvents_JP_0850614C, 0x081F2C10, 0, 0x01AB, 0x0040, 0x02, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B048: @ 0x0845B048
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, MapEvents_JP_085061C0, 0x081F2CCF, 0, 0x0190, 0x003D, 0x02, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B064: @ 0x0845B064
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, MapEvents_JP_0850624C, 0x081F2D60, 0, 0x0190, 0x003E, 0x02, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B080: @ 0x0845B080
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FFA40, MapEvents_JP_08506360, 0x081F2D87, 0, 0x016C, 0x0041, 0x02, 0x00, 0x00, 0x08, 0x00, 0x01

MapHeader_JP_0845B09C: @ 0x0845B09C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FFB94, MapEvents_JP_08506474, 0x081F3788, 0, 0x01AB, 0x0042, 0x02, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B0B8: @ 0x0845B0B8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FFC68, MapEvents_JP_085064C8, 0x081F4008, 0, 0x01AB, 0x0043, 0x02, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B0D4: @ 0x0845B0D4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FFD38, MapEvents_JP_08506534, 0x081F4185, 0, 0x016B, 0x0044, 0x03, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B0F0: @ 0x0845B0F0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FFFE0, MapEvents_JP_085066C0, 0x081F42C7, 0, 0x016C, 0x0045, 0x03, 0x00, 0x06, 0x08, 0x00, 0x01

MapHeader_JP_0845B10C: @ 0x0845B10C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08400288, MapEvents_JP_085067F4, 0x081F4DBA, 0, 0x016C, 0x0046, 0x03, 0x00, 0x06, 0x08, 0x00, 0x01

MapHeader_JP_0845B128: @ 0x0845B128
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF630, MapEvents_JP_08506860, 0x081F4E4D, 0, 0x016B, 0x0040, 0x03, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B144: @ 0x0845B144
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF570, MapEvents_JP_085068CC, 0x081F4ECC, 0, 0x0194, 0x003F, 0x03, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B160: @ 0x0845B160
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084003A4, MapEvents_JP_08506960, 0x081F4F85, 0, 0x0190, 0x0047, 0x03, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B17C: @ 0x0845B17C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, MapEvents_JP_085069EC, 0x081F5071, 0, 0x0190, 0x003E, 0x03, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B198: @ 0x0845B198
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF570, MapEvents_JP_08506A88, 0x081F5098, 0, 0x0194, 0x003F, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B1B4: @ 0x0845B1B4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08444424, MapEvents_JP_08506B30, 0x081F5185, 0, 0x0180, 0x0180, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B1D0: @ 0x0845B1D0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08444494, MapEvents_JP_08506B5C, 0x081F57D8, 0, 0x0180, 0x0181, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B1EC: @ 0x0845B1EC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08444568, MapEvents_JP_08506BB8, 0x081F591A, 0, 0x0180, 0x0182, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B208: @ 0x0845B208
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, MapEvents_JP_08506C44, 0x081F5C4E, 0, 0x0190, 0x003D, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B224: @ 0x0845B224
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, MapEvents_JP_08506CD0, 0x081F5E51, 0, 0x0190, 0x003E, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B240: @ 0x0845B240
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF17C, MapEvents_JP_08506D24, 0x081F5E78, 0, 0x01B5, 0x003B, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B25C: @ 0x0845B25C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF24C, MapEvents_JP_08506D60, 0x081F6155, 0, 0x01B5, 0x003C, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B278: @ 0x0845B278
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08444424, MapEvents_JP_08506E20, 0x081F6365, 0, 0x0180, 0x0180, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B294: @ 0x0845B294
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08444494, MapEvents_JP_08506E4C, 0x081F6B12, 0, 0x0180, 0x0181, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B2B0: @ 0x0845B2B0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08444674, MapEvents_JP_08506EA8, 0x081F6CA5, 0, 0x0180, 0x0183, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B2CC: @ 0x0845B2CC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF570, MapEvents_JP_08506F2C, 0x081F6F27, 0, 0x0194, 0x003F, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B2E8: @ 0x0845B2E8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, MapEvents_JP_08506FB8, 0x081F7021, 0, 0x0190, 0x003D, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B304: @ 0x0845B304
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, MapEvents_JP_08507044, 0x081F70DE, 0, 0x0190, 0x003E, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B320: @ 0x0845B320
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084009A0, MapEvents_JP_085070E0, 0x081F7105, 0, 0x018E, 0x004C, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B33C: @ 0x0845B33C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF24C, MapEvents_JP_08507134, 0x081F7556, 0, 0x018E, 0x003C, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B358: @ 0x0845B358
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF17C, MapEvents_JP_08507188, 0x081F777F, 0, 0x018E, 0x003B, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B374: @ 0x0845B374
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, MapEvents_JP_0850722C, 0x081F782A, 0, 0x0190, 0x003D, 0x06, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B390: @ 0x0845B390
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, MapEvents_JP_085072B8, 0x081F7917, 0, 0x0190, 0x003E, 0x06, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B3AC: @ 0x0845B3AC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08400A74, MapEvents_JP_0850730C, 0x081F793E, 0, 0x0198, 0x004D, 0x06, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B3C8: @ 0x0845B3C8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08400B48, MapEvents_JP_08507378, 0x081F79FF, 0, 0x0198, 0x004E, 0x06, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B3E4: @ 0x0845B3E4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08400A74, MapEvents_JP_085073CC, 0x081F7D1A, 0, 0x0198, 0x004D, 0x06, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B400: @ 0x0845B400
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08400B48, MapEvents_JP_08507438, 0x081F7F3D, 0, 0x0198, 0x004E, 0x06, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B41C: @ 0x0845B41C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08400A74, MapEvents_JP_0850748C, 0x081F8055, 0, 0x0198, 0x004D, 0x06, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B438: @ 0x0845B438
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF24C, MapEvents_JP_085074E0, 0x081F810B, 0, 0x016A, 0x003C, 0x07, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B454: @ 0x0845B454
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08401348, MapEvents_JP_085077D4, 0x081F8520, 0, 0x016C, 0x004F, 0x07, 0x00, 0x00, 0x08, 0x00, 0x01

MapHeader_JP_0845B470: @ 0x0845B470
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF17C, MapEvents_JP_08507828, 0x081FA63D, 0, 0x016A, 0x003B, 0x07, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B48C: @ 0x0845B48C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08401408, MapEvents_JP_0850787C, 0x081FA720, 0, 0x016A, 0x0050, 0x07, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B4A8: @ 0x0845B4A8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, MapEvents_JP_08507920, 0x081FA7CD, 0, 0x0190, 0x003D, 0x07, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B4C4: @ 0x0845B4C4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, MapEvents_JP_085079AC, 0x081FA9C2, 0, 0x0190, 0x003E, 0x07, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B4E0: @ 0x0845B4E0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF570, MapEvents_JP_08507A30, 0x081FA9E9, 0, 0x0194, 0x003F, 0x07, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B4FC: @ 0x0845B4FC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084016A0, MapEvents_JP_08507ABC, 0x081FAB28, 0, 0x01B1, 0x0051, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B518: @ 0x0845B518
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084018C0, MapEvents_JP_08507B20, 0x081FAFA2, 0, 0x01B1, 0x0052, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B534: @ 0x0845B534
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08444424, MapEvents_JP_08507BC8, 0x081FB033, 0, 0x0180, 0x0180, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B550: @ 0x0845B550
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08444494, MapEvents_JP_08507BF4, 0x081FB594, 0, 0x0180, 0x0181, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B56C: @ 0x0845B56C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08444568, MapEvents_JP_08507C50, 0x081FBC59, 0, 0x0180, 0x0182, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B588: @ 0x0845B588
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08401408, MapEvents_JP_08507C8C, 0x081FBD9D, 0, 0x01B1, 0x0050, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B5A4: @ 0x0845B5A4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08401A5C, MapEvents_JP_08507D88, 0x081FC027, 0, 0x01B1, 0x0055, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B5C0: @ 0x0845B5C0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08401BE4, MapEvents_JP_08507FC0, 0x081FCA3E, 0, 0x0177, 0x0056, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B5DC: @ 0x0845B5DC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08401D6C, MapEvents_JP_08508180, 0x081FD309, 0, 0x0177, 0x0057, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B5F8: @ 0x0845B5F8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840205C, MapEvents_JP_085082B4, 0x081FDC6E, 0, 0x01B1, 0x0058, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B614: @ 0x0845B614
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF24C, MapEvents_JP_08508308, 0x081FE772, 0, 0x01B1, 0x003C, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B630: @ 0x0845B630
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, MapEvents_JP_0850837C, 0x081FE809, 0, 0x0190, 0x003D, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B64C: @ 0x0845B64C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, MapEvents_JP_08508408, 0x081FE8D2, 0, 0x0190, 0x003E, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B668: @ 0x0845B668
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF570, MapEvents_JP_08508474, 0x081FE8F9, 0, 0x0194, 0x003F, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B684: @ 0x0845B684
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08402220, MapEvents_JP_08508598, 0x081FE9B4, 0, 0x016C, 0x0059, 0x09, 0x00, 0x00, 0x08, 0x00, 0x01

MapHeader_JP_0845B6A0: @ 0x0845B6A0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08402318, MapEvents_JP_08508604, 0x081FF3EB, 0, 0x018F, 0x005A, 0x09, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B6BC: @ 0x0845B6BC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF24C, MapEvents_JP_08508640, 0x081FFD77, 0, 0x018F, 0x003C, 0x09, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B6D8: @ 0x0845B6D8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840251C, MapEvents_JP_085088A4, 0x081FFEE7, 0, 0x01AA, 0x005B, 0x09, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B6F4: @ 0x0845B6F4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF17C, MapEvents_JP_085088E0, 0x08200C5A, 0, 0x018F, 0x003B, 0x09, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B710: @ 0x0845B710
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, MapEvents_JP_08508984, 0x08200DD4, 0, 0x0190, 0x003D, 0x09, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B72C: @ 0x0845B72C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, MapEvents_JP_08508A28, 0x08200ECF, 0, 0x0190, 0x003E, 0x09, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B748: @ 0x0845B748
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF570, MapEvents_JP_08508A94, 0x08200F4F, 0, 0x0194, 0x003F, 0x09, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B764: @ 0x0845B764
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08402694, MapEvents_JP_08508B20, 0x08201030, 0, 0x018F, 0x005C, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B780: @ 0x0845B780
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840280C, MapEvents_JP_08508BD4, 0x08201429, 0, 0x018F, 0x005D, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B79C: @ 0x0845B79C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0842579C, MapEvents_JP_08508C50, 0x08201C29, 0, 0x018F, 0x010D, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B7B8: @ 0x0845B7B8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084029E4, MapEvents_JP_08508D04, 0x082022C5, 0, 0x016C, 0x005E, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x01

MapHeader_JP_0845B7D4: @ 0x0845B7D4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08402B0C, MapEvents_JP_08508E0C, 0x08202C1A, 0, 0x01B3, 0x005F, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B7F0: @ 0x0845B7F0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, MapEvents_JP_08508E98, 0x082034B3, 0, 0x0190, 0x003D, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B80C: @ 0x0845B80C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, MapEvents_JP_08508F24, 0x082035B9, 0, 0x0190, 0x003E, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B828: @ 0x0845B828
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF570, MapEvents_JP_08508FA8, 0x082035E0, 0, 0x0194, 0x003F, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B844: @ 0x0845B844
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084328B4, MapEvents_JP_08509004, 0x08203714, 0, 0x018F, 0x0139, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B860: @ 0x0845B860
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084329B4, MapEvents_JP_085090E0, 0x08203770, 0, 0x018F, 0x013A, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B87C: @ 0x0845B87C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08402CF4, MapEvents_JP_08509134, 0x08203BC8, 0, 0x018F, 0x0061, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B898: @ 0x0845B898
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08402DDC, MapEvents_JP_08509188, 0x08203D7C, 0, 0x018F, 0x0062, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B8B4: @ 0x0845B8B4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08402C04, MapEvents_JP_085091DC, 0x08203F15, 0, 0x018F, 0x0060, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B8D0: @ 0x0845B8D0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0842EFDC, MapEvents_JP_08509238, 0x08203F99, 0, 0x018F, 0x0126, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B8EC: @ 0x0845B8EC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0842F0F8, MapEvents_JP_0850928C, 0x08203FE8, 0, 0x018F, 0x0127, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B908: @ 0x0845B908
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0842F214, MapEvents_JP_085092D8, 0x082040B5, 0, 0x018F, 0x0128, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B924: @ 0x0845B924
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08402C04, MapEvents_JP_08509344, 0x08204117, 0, 0x018F, 0x0060, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B940: @ 0x0845B940
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08402E5C, MapEvents_JP_085093B0, 0x082041CA, 0, 0x017E, 0x0063, 0x0B, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B95C: @ 0x0845B95C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08403264, MapEvents_JP_085094AC, 0x0820439E, 0, 0x016C, 0x0064, 0x0B, 0x00, 0x00, 0x08, 0x00, 0x01

MapHeader_JP_0845B978: @ 0x0845B978
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, MapEvents_JP_08509538, 0x08204C5D, 0, 0x0190, 0x003D, 0x0B, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B994: @ 0x0845B994
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, MapEvents_JP_085095C4, 0x08204D96, 0, 0x0190, 0x003E, 0x0B, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B9B0: @ 0x0845B9B0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF570, MapEvents_JP_08509648, 0x08204DBD, 0, 0x0194, 0x003F, 0x0B, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B9CC: @ 0x0845B9CC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084032E4, MapEvents_JP_0850969C, 0x08204E9B, 0, 0x017E, 0x0065, 0x0B, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845B9E8: @ 0x0845B9E8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08402E5C, MapEvents_JP_085096F0, 0x082050D0, 0, 0x017E, 0x0063, 0x0B, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BA04: @ 0x0845BA04
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084032E4, MapEvents_JP_0850975C, 0x082051A2, 0, 0x017E, 0x0065, 0x0B, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BA20: @ 0x0845BA20
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08402E5C, MapEvents_JP_085097C8, 0x08205343, 0, 0x017E, 0x0063, 0x0B, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BA3C: @ 0x0845BA3C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08421064, MapEvents_JP_0850984C, 0x082053F0, 0, 0x017E, 0x00FF, 0x0B, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BA58: @ 0x0845BA58
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0842F5BC, MapEvents_JP_085098A0, 0x082054FC, 0, 0x0198, 0x012B, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BA74: @ 0x0845BA74
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0842F6B4, MapEvents_JP_08509964, 0x08205887, 0, 0x0198, 0x012C, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BA90: @ 0x0845BA90
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08403648, MapEvents_JP_08509B40, 0x08205BE2, 0, 0x0175, 0x0067, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BAAC: @ 0x0845BAAC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084038A4, MapEvents_JP_08509C4C, 0x082061E6, 0, 0x0175, 0x0068, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BAC8: @ 0x0845BAC8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08403BAC, MapEvents_JP_08509F68, 0x082068D1, 0, 0x01C4, 0x0069, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BAE4: @ 0x0845BAE4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084048F4, MapEvents_JP_0850A2E4, 0x082077B9, 0, 0x01C4, 0x006A, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BB00: @ 0x0845BB00
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, MapEvents_JP_0850A388, 0x0820824A, 0, 0x0190, 0x003D, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BB1C: @ 0x0845BB1C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, MapEvents_JP_0850A414, 0x08208376, 0, 0x0190, 0x003E, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BB38: @ 0x0845BB38
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF570, MapEvents_JP_0850A438, 0x0820839D, 0, 0x0194, 0x003F, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BB54: @ 0x0845BB54
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08404A64, MapEvents_JP_0850A534, 0x0820839E, 0, 0x0198, 0x006B, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BB70: @ 0x0845BB70
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840205C, MapEvents_JP_0850A5D0, 0x082094D4, 0, 0x0198, 0x0058, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BB8C: @ 0x0845BB8C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF24C, MapEvents_JP_0850A60C, 0x08209D70, 0, 0x0198, 0x003C, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BBA8: @ 0x0845BBA8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF17C, MapEvents_JP_0850A660, 0x08209F66, 0, 0x0198, 0x003B, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BBC4: @ 0x0845BBC4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840084C, MapEvents_JP_0850A69C, 0x08209FDC, 0, 0x0198, 0x004A, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BBE0: @ 0x0845BBE0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF24C, MapEvents_JP_0850A750, 0x0820A065, 0, 0x0198, 0x003C, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BBFC: @ 0x0845BBFC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF17C, MapEvents_JP_0850A7A4, 0x0820A51A, 0, 0x0198, 0x003B, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BC18: @ 0x0845BC18
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08421278, MapEvents_JP_0850A874, 0x0820A5AF, 0, 0x0198, 0x0101, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BC34: @ 0x0845BC34
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084213B8, MapEvents_JP_0850A918, 0x0820A920, 0, 0x0194, 0x0102, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BC50: @ 0x0845BC50
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084214F8, MapEvents_JP_0850A9BC, 0x0820AA19, 0, 0x0194, 0x0103, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BC6C: @ 0x0845BC6C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08421638, MapEvents_JP_0850AA60, 0x0820AB4E, 0, 0x0194, 0x0104, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BC88: @ 0x0845BC88
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08421778, MapEvents_JP_0850AB34, 0x0820AC4E, 0, 0x0194, 0x0105, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BCA4: @ 0x0845BCA4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08421948, MapEvents_JP_0850ABC8, 0x0820AE53, 0, 0x0198, 0x0106, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BCC0: @ 0x0845BCC0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08425DE0, MapEvents_JP_0850AC04, 0x0820B18C, 0, 0x0198, 0x0111, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BCDC: @ 0x0845BCDC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084051D4, MapEvents_JP_0850B090, 0x0820B369, 0, 0x016C, 0x006C, 0x0D, 0x00, 0x00, 0x08, 0x00, 0x01

MapHeader_JP_0845BCF8: @ 0x0845BCF8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF24C, MapEvents_JP_0850B0E4, 0x0820C332, 0, 0x018F, 0x003C, 0x0D, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BD14: @ 0x0845BD14
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF17C, MapEvents_JP_0850B150, 0x0820C3D2, 0, 0x018F, 0x003B, 0x0D, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BD30: @ 0x0845BD30
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, MapEvents_JP_0850B1C4, 0x0820C4B2, 0, 0x0190, 0x003D, 0x0D, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BD4C: @ 0x0845BD4C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, MapEvents_JP_0850B268, 0x0820C54A, 0, 0x0190, 0x003E, 0x0D, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BD68: @ 0x0845BD68
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF570, MapEvents_JP_0850B2EC, 0x0820C5B2, 0, 0x0194, 0x003F, 0x0D, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BD84: @ 0x0845BD84
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF24C, MapEvents_JP_0850B328, 0x0820C6FA, 0, 0x018F, 0x003C, 0x0D, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BDA0: @ 0x0845BDA0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084371A4, MapEvents_JP_0850B3C4, 0x0820C816, 0, 0x018F, 0x0147, 0x0D, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BDBC: @ 0x0845BDBC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08401408, MapEvents_JP_0850B430, 0x0820CC5B, 0, 0x018F, 0x0050, 0x0D, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BDD8: @ 0x0845BDD8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08429160, MapEvents_JP_0850B564, 0x0820CD5D, 0, 0x018F, 0x0113, 0x0D, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BDF4: @ 0x0845BDF4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084292C0, MapEvents_JP_0850B658, 0x0820D682, 0, 0x018F, 0x0114, 0x0D, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BE10: @ 0x0845BE10
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08431A58, MapEvents_JP_0850B6D8, 0x0820E01E, 0, 0x018F, 0x0131, 0x0D, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BE2C: @ 0x0845BE2C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08431B50, MapEvents_JP_0850B70C, 0x0820E223, 0, 0x018F, 0x0132, 0x0D, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BE48: @ 0x0845BE48
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08405568, MapEvents_JP_0850B780, 0x0820E224, 0, 0x016C, 0x006D, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x01

MapHeader_JP_0845BE64: @ 0x0845BE64
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084058FC, MapEvents_JP_0850B88C, 0x0820EAC6, 0, 0x016C, 0x006E, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x01

MapHeader_JP_0845BE80: @ 0x0845BE80
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, MapEvents_JP_0850B918, 0x0820EFD5, 0, 0x0190, 0x003D, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BE9C: @ 0x0845BE9C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, MapEvents_JP_0850B9A4, 0x0820F190, 0, 0x0190, 0x003E, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BEB8: @ 0x0845BEB8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF570, MapEvents_JP_0850BA10, 0x0820F1B7, 0, 0x0194, 0x003F, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BED4: @ 0x0845BED4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08431BE0, MapEvents_JP_0850BA64, 0x0820F300, 0, 0x01BD, 0x0133, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BEF0: @ 0x0845BEF0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08431C70, MapEvents_JP_0850BAA0, 0x0820F3C6, 0, 0x01BD, 0x0134, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BF0C: @ 0x0845BF0C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08431D00, MapEvents_JP_0850BAF4, 0x0820F479, 0, 0x01BD, 0x0135, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BF28: @ 0x0845BF28
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08431BE0, MapEvents_JP_0850BB60, 0x0820F593, 0, 0x01BD, 0x0133, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BF44: @ 0x0845BF44
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08431C70, MapEvents_JP_0850BBB4, 0x0820F657, 0, 0x01BD, 0x0134, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BF60: @ 0x0845BF60
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08431D00, MapEvents_JP_0850BBF0, 0x0820F6D0, 0, 0x01BD, 0x0135, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BF7C: @ 0x0845BF7C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08431BE0, MapEvents_JP_0850BC44, 0x0820F7BA, 0, 0x01BD, 0x0133, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BF98: @ 0x0845BF98
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0842F2A4, MapEvents_JP_0850BCB0, 0x0820F861, 0, 0x01BD, 0x0129, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BFB4: @ 0x0845BFB4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0845A014, MapEvents_JP_0850BCF4, 0x0820FD60, 0, 0x01BD, 0x01B7, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BFD0: @ 0x0845BFD0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0845A10C, MapEvents_JP_0850BD28, 0x08210134, 0, 0x01BD, 0x01B8, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845BFEC: @ 0x0845BFEC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08405A88, MapEvents_JP_0850BD64, 0x082101E6, 0, 0x01AD, 0x006F, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x04

MapHeader_JP_0845C008: @ 0x0845C008
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08405C14, MapEvents_JP_0850BDA0, 0x08210371, 0, 0x01AD, 0x0070, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x05

MapHeader_JP_0845C024: @ 0x0845C024
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08405DA0, MapEvents_JP_0850BDDC, 0x08210523, 0, 0x01AD, 0x0071, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x06

MapHeader_JP_0845C040: @ 0x0845C040
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08405F2C, MapEvents_JP_0850BE18, 0x082106BE, 0, 0x01AD, 0x0072, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x07

MapHeader_JP_0845C05C: @ 0x0845C05C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084060A0, MapEvents_JP_0850BE84, 0x082108D0, 0, 0x01AD, 0x0073, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845C078: @ 0x0845C078
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084061E0, MapEvents_JP_0850BEB8, 0x0821106B, 0, 0x01AD, 0x0074, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845C094: @ 0x0845C094
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084061E0, MapEvents_JP_0850BEEC, 0x08211080, 0, 0x01AD, 0x0074, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845C0B0: @ 0x0845C0B0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084061E0, MapEvents_JP_0850BF20, 0x08211095, 0, 0x01AD, 0x0074, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845C0CC: @ 0x0845C0CC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08432CC0, MapEvents_JP_0850BF44, 0x082110AA, 0, 0x01AD, 0x013B, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845C0E8: @ 0x0845C0E8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084061E0, MapEvents_JP_0850BF78, 0x082110BF, 0, 0x01AD, 0x0074, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845C104: @ 0x0845C104
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08425984, MapEvents_JP_0850C014, 0x082110D4, 0, 0x0190, 0x010E, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845C120: @ 0x0845C120
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0842F4C4, MapEvents_JP_0850C048, 0x08211287, 0, 0x01BF, 0x012A, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845C13C: @ 0x0845C13C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, MapEvents_JP_0850C0D4, 0x082113FC, 0, 0x0190, 0x003D, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845C158: @ 0x0845C158
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, MapEvents_JP_0850C160, 0x082115A2, 0, 0x0190, 0x003E, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845C174: @ 0x0845C174
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, MapEvents_JP_0850C1EC, 0x082115C9, 0, 0x0190, 0x003E, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845C190: @ 0x0845C190
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084033DC, MapEvents_JP_0850C240, 0x082115F0, 0, 0x016A, 0x0066, 0x13, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845C1AC: @ 0x0845C1AC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08406310, MapEvents_JP_0850C2AC, 0x082119B4, 0, 0x016A, 0x0075, 0x13, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845C1C8: @ 0x0845C1C8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF24C, MapEvents_JP_0850C330, 0x08211AF4, 0, 0x018F, 0x003C, 0x1A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845C1E4: @ 0x0845C1E4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF630, MapEvents_JP_0850C36C, 0x08211DED, 0, 0x018F, 0x0040, 0x1A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845C200: @ 0x0845C200
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08406468, MapEvents_JP_0850C3C0, 0x08211F0A, 0, 0x0168, 0x0076, 0x1B, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845C21C: @ 0x0845C21C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08406468, MapEvents_JP_0850C414, 0x0821201F, 0, 0x0168, 0x0076, 0x38, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845C238: @ 0x0845C238
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08406528, MapEvents_JP_0850C488, 0x0821212C, 0, 0x01B5, 0x0077, 0x1D, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845C254: @ 0x0845C254
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084067EC, MapEvents_JP_0850C4EC, 0x0821228D, 0, 0x01B5, 0x0078, 0x1D, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845C270: @ 0x0845C270
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084068BC, MapEvents_JP_0850C54C, 0x082124D1, 0, 0x01B5, 0x0079, 0x1D, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845C28C: @ 0x0845C28C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08406990, MapEvents_JP_0850C5B8, 0x08212820, 0, 0x018F, 0x007A, 0x1F, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845C2A8: @ 0x0845C2A8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08406A88, MapEvents_JP_0850C5F4, 0x082129DB, 0, 0x018F, 0x007B, 0x20, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845C2C4: @ 0x0845C2C4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08406CA0, MapEvents_JP_0850C68C, 0x082129E5, 0, 0x017E, 0x007C, 0x24, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845C2E0: @ 0x0845C2E0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08407698, MapEvents_JP_0850C7DC, 0x08212B54, 0, 0x0182, 0x007D, 0x3F, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C2FC: @ 0x0845C2FC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08407E38, MapEvents_JP_0850C864, 0x08213079, 0, 0x0182, 0x007E, 0x3F, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C318: @ 0x0845C318
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084086F4, MapEvents_JP_0850C8A8, 0x082135EE, 0, 0x0182, 0x007F, 0x3F, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C334: @ 0x0845C334
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084088A0, MapEvents_JP_0850C8DC, 0x082135EF, 0, 0x0182, 0x0080, 0x3F, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C350: @ 0x0845C350
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08408F80, MapEvents_JP_0850CA48, 0x082135F0, 0, 0x016E, 0x0081, 0x3C, 0x00, 0x06, 0x04, 0x0F, 0x00

MapHeader_JP_0845C36C: @ 0x0845C36C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08409130, MapEvents_JP_0850CA6C, 0x08213DD0, 0, 0x019B, 0x0082, 0x36, 0x00, 0x0E, 0x05, 0x0D, 0x00

MapHeader_JP_0845C388: @ 0x0845C388
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084095B4, MapEvents_JP_0850CAD4, 0x08213DDF, 0, 0x01B6, 0x0083, 0x52, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C3A4: @ 0x0845C3A4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08409AC0, MapEvents_JP_0850CB38, 0x08213EE1, 0, 0x016E, 0x0084, 0x37, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C3C0: @ 0x0845C3C0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840A160, MapEvents_JP_0850CB9C, 0x0821400B, 0, 0x016E, 0x0085, 0x37, 0x01, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C3DC: @ 0x0845C3DC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840A800, MapEvents_JP_0850CCC8, 0x08214026, 0, 0x016E, 0x0086, 0x37, 0x01, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C3F8: @ 0x0845C3F8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0842CB08, MapEvents_JP_0850CCFC, 0x08214027, 0, 0x016E, 0x0120, 0x37, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C414: @ 0x0845C414
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840B8A0, MapEvents_JP_0850CEE0, 0x08214278, 0, 0x016E, 0x0087, 0x3B, 0x00, 0x0B, 0x03, 0x0D, 0x00

MapHeader_JP_0845C430: @ 0x0845C430
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840C770, MapEvents_JP_0850D1FC, 0x08214B94, 0, 0x0196, 0x0088, 0x38, 0x00, 0x07, 0x03, 0x0D, 0x00

MapHeader_JP_0845C44C: @ 0x0845C44C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0842E43C, MapEvents_JP_0850D398, 0x08215AF2, 0, 0x016E, 0x0124, 0x4C, 0x00, 0x00, 0x03, 0x0D, 0x00

MapHeader_JP_0845C468: @ 0x0845C468
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0842EEC0, MapEvents_JP_0850D47C, 0x082160FF, 0, 0x016E, 0x0125, 0x4A, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C484: @ 0x0845C484
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840CAD4, MapEvents_JP_0850D508, 0x08216119, 0, 0x01B0, 0x0089, 0x41, 0x00, 0x00, 0x08, 0x08, 0x00

MapHeader_JP_0845C4A0: @ 0x0845C4A0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840CC48, MapEvents_JP_0850D604, 0x08216230, 0, 0x01B0, 0x008A, 0x41, 0x00, 0x00, 0x08, 0x08, 0x00

MapHeader_JP_0845C4BC: @ 0x0845C4BC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840CDBC, MapEvents_JP_0850D6A8, 0x082165F1, 0, 0x01B0, 0x008B, 0x41, 0x00, 0x00, 0x08, 0x08, 0x00

MapHeader_JP_0845C4D8: @ 0x0845C4D8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840CF30, MapEvents_JP_0850D71C, 0x08216880, 0, 0x01B0, 0x008C, 0x41, 0x00, 0x00, 0x08, 0x08, 0x00

MapHeader_JP_0845C4F4: @ 0x0845C4F4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840D0A4, MapEvents_JP_0850D788, 0x082168FA, 0, 0x01B0, 0x008D, 0x41, 0x00, 0x00, 0x08, 0x08, 0x00

MapHeader_JP_0845C510: @ 0x0845C510
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840D218, MapEvents_JP_0850D7F4, 0x08216986, 0, 0x01B0, 0x008E, 0x41, 0x00, 0x00, 0x08, 0x08, 0x00

MapHeader_JP_0845C52C: @ 0x0845C52C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084306CC, MapEvents_JP_0850D8B8, 0x08216B49, 0, 0x01B2, 0x012E, 0x41, 0x00, 0x00, 0x03, 0x0D, 0x00

MapHeader_JP_0845C548: @ 0x0845C548
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08431560, MapEvents_JP_0850DA1C, 0x08216B74, 0, 0x01B2, 0x012F, 0x41, 0x00, 0x06, 0x03, 0x0D, 0x00

MapHeader_JP_0845C564: @ 0x0845C564
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840D8C8, MapEvents_JP_0850DA90, 0x08217935, 0, 0x01AE, 0x008F, 0xC5, 0x00, 0x00, 0x08, 0x08, 0x03

MapHeader_JP_0845C580: @ 0x0845C580
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840E278, MapEvents_JP_0850DC44, 0x08217CB0, 0, 0x01AE, 0x0090, 0xC5, 0x00, 0x00, 0x08, 0x08, 0x03

MapHeader_JP_0845C59C: @ 0x0845C59C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840E8F8, MapEvents_JP_0850DD58, 0x08217F9F, 0, 0x01AE, 0x0091, 0xC5, 0x00, 0x00, 0x08, 0x08, 0x03

MapHeader_JP_0845C5B8: @ 0x0845C5B8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840EA14, MapEvents_JP_0850DDD4, 0x0821834E, 0, 0x019B, 0x0092, 0x45, 0x00, 0x0E, 0x05, 0x0D, 0x00

MapHeader_JP_0845C5D4: @ 0x0845C5D4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840ED54, MapEvents_JP_0850DE10, 0x0821844E, 0, 0x0196, 0x0093, 0x44, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C5F0: @ 0x0845C5F0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840F0BC, MapEvents_JP_0850DEB4, 0x0821865E, 0, 0x0196, 0x0094, 0x44, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C60C: @ 0x0845C60C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840F28C, MapEvents_JP_0850DFA8, 0x0821873D, 0, 0x0196, 0x0095, 0x44, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C628: @ 0x0845C628
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840F4CC, MapEvents_JP_0850E0AC, 0x0821873E, 0, 0x0196, 0x0096, 0x44, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C644: @ 0x0845C644
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840F798, MapEvents_JP_0850E110, 0x0821892E, 0, 0x0196, 0x0097, 0x44, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C660: @ 0x0845C660
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840FAD8, MapEvents_JP_0850E1CC, 0x082189F9, 0, 0x0196, 0x0098, 0x44, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C67C: @ 0x0845C67C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840FF48, MapEvents_JP_0850E1F8, 0x082189FA, 0, 0x0196, 0x0099, 0x44, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C698: @ 0x0845C698
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084103E8, MapEvents_JP_0850E21C, 0x082189FB, 0, 0x0196, 0x009A, 0x44, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C6B4: @ 0x0845C6B4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841053C, MapEvents_JP_0850E360, 0x082189FC, 0, 0x0196, 0x009B, 0x44, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C6D0: @ 0x0845C6D0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08410F10, MapEvents_JP_0850E434, 0x082189FD, 0, 0x0196, 0x009C, 0x44, 0x00, 0x06, 0x04, 0x0E, 0x00

MapHeader_JP_0845C6EC: @ 0x0845C6EC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841130C, MapEvents_JP_0850E458, 0x082190AF, 0, 0x0182, 0x009D, 0x48, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C708: @ 0x0845C708
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08411750, MapEvents_JP_0850E47C, 0x082190BE, 0, 0x0182, 0x009E, 0x48, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C724: @ 0x0845C724
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08411B94, MapEvents_JP_0850E4A0, 0x082190CE, 0, 0x0182, 0x009F, 0x48, 0x01, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C740: @ 0x0845C740
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08411F28, MapEvents_JP_0850E4C4, 0x082190DE, 0, 0x0182, 0x00A0, 0x48, 0x01, 0x06, 0x04, 0x0F, 0x00

MapHeader_JP_0845C75C: @ 0x0845C75C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08412268, MapEvents_JP_0850E4E8, 0x082190EE, 0, 0x0182, 0x00A1, 0x48, 0x01, 0x06, 0x04, 0x0F, 0x00

MapHeader_JP_0845C778: @ 0x0845C778
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841255C, MapEvents_JP_0850E51C, 0x082190FE, 0, 0xFFFF, 0x00A2, 0x48, 0x00, 0x06, 0x04, 0x0E, 0x00

MapHeader_JP_0845C794: @ 0x0845C794
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084135A8, MapEvents_JP_0850E65C, 0x0821949C, 0, 0x01AD, 0x00A3, 0x46, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C7B0: @ 0x0845C7B0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0842BDDC, MapEvents_JP_0850E8A0, 0x0821996E, 0, 0x01AD, 0x011D, 0x46, 0x01, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C7CC: @ 0x0845C7CC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0842C920, MapEvents_JP_0850E994, 0x08219BA0, 0, 0x01AD, 0x011E, 0x46, 0x01, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C7E8: @ 0x0845C7E8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08413F5C, MapEvents_JP_0850E9F8, 0x08219E85, 0, 0x01B0, 0x00A4, 0x43, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C804: @ 0x0845C804
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08414D24, MapEvents_JP_0850EAAC, 0x08219FC0, 0, 0x01B0, 0x00A5, 0x43, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C820: @ 0x0845C820
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08414FBC, MapEvents_JP_0850EAF4, 0x0821A1C5, 0, 0x01B0, 0x00A6, 0x43, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C83C: @ 0x0845C83C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08415340, MapEvents_JP_0850EB64, 0x0821A221, 0, 0x01B0, 0x00A7, 0x43, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C858: @ 0x0845C858
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08415CF4, 0x0850EB78, 0x0821A324, 0, 0x01B0, 0x00A8, 0x43, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C874: @ 0x0845C874
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08416ABC, 0x0850EB8C, 0x0821A325, 0, 0x01B0, 0x00A9, 0x43, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C890: @ 0x0845C890
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08416D78, MapEvents_JP_0850EBC0, 0x0821A326, 0, 0x01B0, 0x00B8, 0x3E, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C8AC: @ 0x0845C8AC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08417ABC, MapEvents_JP_0850ED9C, 0x0821A432, 0, 0x01B0, 0x00B9, 0x3E, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C8C8: @ 0x0845C8C8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08417EA4, MapEvents_JP_0850EDD8, 0x0821A972, 0, 0x017D, 0x00BA, 0x3D, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845C8E4: @ 0x0845C8E4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08418074, MapEvents_JP_0850EE7C, 0x0821A97C, 0, 0x017D, 0x00BB, 0x3D, 0x00, 0x0B, 0x04, 0x0F, 0x00

MapHeader_JP_0845C900: @ 0x0845C900
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084182F8, MapEvents_JP_0850EF20, 0x0821A9FD, 0, 0x017D, 0x00BC, 0x3D, 0x00, 0x0B, 0x04, 0x0F, 0x00

MapHeader_JP_0845C91C: @ 0x0845C91C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841841C, MapEvents_JP_0850EFB0, 0x0821ABF0, 0, 0x017D, 0x00BD, 0x3D, 0x00, 0x0B, 0x04, 0x0F, 0x00

MapHeader_JP_0845C938: @ 0x0845C938
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084185EC, MapEvents_JP_0850F00C, 0x0821AD78, 0, 0x017D, 0x00BE, 0x3D, 0x00, 0x0B, 0x04, 0x0F, 0x00

MapHeader_JP_0845C954: @ 0x0845C954
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841872C, MapEvents_JP_0850F070, 0x0821ADC7, 0, 0x017D, 0x00BF, 0x3D, 0x00, 0x0B, 0x04, 0x0F, 0x00

MapHeader_JP_0845C970: @ 0x0845C970
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084187CC, MapEvents_JP_0850F094, 0x0821AE0A, 0, 0x019B, 0x00C0, 0x3D, 0x00, 0x0E, 0x05, 0x0D, 0x00

MapHeader_JP_0845C98C: @ 0x0845C98C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841887C, MapEvents_JP_0850F0D0, 0x0821AE19, 0, 0x017D, 0x00C1, 0x3D, 0x00, 0x0B, 0x04, 0x0F, 0x00

MapHeader_JP_0845C9A8: @ 0x0845C9A8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084189D0, MapEvents_JP_0850F174, 0x0821AE1A, 0, 0x017D, 0x00C2, 0x3D, 0x00, 0x0B, 0x04, 0x0F, 0x00

MapHeader_JP_0845C9C4: @ 0x0845C9C4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08418A70, MapEvents_JP_0850F1C8, 0x0821B22D, 0, 0x017D, 0x00C3, 0x3D, 0x00, 0x0B, 0x04, 0x0F, 0x00

MapHeader_JP_0845C9E0: @ 0x0845C9E0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08418BB8, MapEvents_JP_0850F1E4, 0x0821B331, 0, 0x019B, 0x00C4, 0x3D, 0x00, 0x0E, 0x05, 0x0D, 0x00

MapHeader_JP_0845C9FC: @ 0x0845C9FC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0842CC48, MapEvents_JP_0850F258, 0x0821B340, 0, 0x017D, 0x0121, 0x3D, 0x00, 0x0B, 0x04, 0x0F, 0x00

MapHeader_JP_0845CA18: @ 0x0845CA18
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08432248, MapEvents_JP_0850F38C, 0x0821B5A3, 0, 0x017D, 0x0136, 0x3D, 0x00, 0x0B, 0x04, 0x07, 0x00

MapHeader_JP_0845CA34: @ 0x0845CA34
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0842A044, MapEvents_JP_0850F3F4, 0x0821B76F, 0, 0x01B6, 0x0118, 0x51, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CA50: @ 0x0845CA50
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0842A4C8, MapEvents_JP_0850F45C, 0x0821B8F8, 0, 0x01B6, 0x0119, 0x53, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CA6C: @ 0x0845CA6C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0842A650, MapEvents_JP_0850F478, 0x0821B9FA, 0, 0x019B, 0x011A, 0x4F, 0x00, 0x0E, 0x05, 0x0D, 0x00

MapHeader_JP_0845CA88: @ 0x0845CA88
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0842AEB0, MapEvents_JP_0850F4A0, 0x0821BA09, 0, 0x019B, 0x011B, 0x4F, 0x00, 0x0E, 0x05, 0x0D, 0x00

MapHeader_JP_0845CAA4: @ 0x0845CAA4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0842B298, MapEvents_JP_0850F618, 0x0821BA4B, 0, 0x01B6, 0x011C, 0x4E, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CAC0: @ 0x0845CAC0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08431948, MapEvents_JP_0850F6A0, 0x0821BB3C, 0, 0x01B6, 0x0130, 0x4E, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CADC: @ 0x0845CADC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084324C0, MapEvents_JP_0850F6D4, 0x0821BBD6, 0, 0x016E, 0x0137, 0x50, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CAF8: @ 0x0845CAF8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08433370, 0x0850F6E8, 0x0821BBE0, 0, 0x01AE, 0x013C, 0xC5, 0x00, 0x00, 0x04, 0x0F, 0x02

MapHeader_JP_0845CB14: @ 0x0845CB14
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08433F30, 0x0850F6FC, 0x0821BBE1, 0, 0x01AE, 0x013D, 0xC5, 0x00, 0x00, 0x04, 0x0F, 0x02

MapHeader_JP_0845CB30: @ 0x0845CB30
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084345B0, 0x0850F710, 0x0821BBE2, 0, 0x01AE, 0x013E, 0xC5, 0x00, 0x00, 0x04, 0x0F, 0x02

MapHeader_JP_0845CB4C: @ 0x0845CB4C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08435B38, MapEvents_JP_0850F734, 0x0821BBE3, 0, 0x0196, 0x0140, 0x55, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CB68: @ 0x0845CB68
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08436060, MapEvents_JP_0850F770, 0x0821BBED, 0, 0x0196, 0x0141, 0x55, 0x00, 0x00, 0x03, 0x0D, 0x00

MapHeader_JP_0845CB84: @ 0x0845CB84
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08436208, MapEvents_JP_0850F79C, 0x0821BE85, 0, 0x0196, 0x0142, 0x55, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CBA0: @ 0x0845CBA0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084363B0, MapEvents_JP_0850F7C0, 0x0821BE9B, 0, 0x0196, 0x0143, 0x55, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CBBC: @ 0x0845CBBC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08436558, MapEvents_JP_0850F7EC, 0x0821BECB, 0, 0x0196, 0x0144, 0x55, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CBD8: @ 0x0845CBD8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08436700, MapEvents_JP_0850F818, 0x0821BEE1, 0, 0x0196, 0x0145, 0x55, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CBF4: @ 0x0845CBF4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08437674, MapEvents_JP_0850F864, 0x0821BF11, 0, 0x01B0, 0x0148, 0x43, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CC10: @ 0x0845CC10
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084378F0, MapEvents_JP_0850F888, 0x0821BF12, 0, 0x0196, 0x014A, 0x55, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CC2C: @ 0x0845CC2C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08437E20, MapEvents_JP_0850F8E4, 0x0821BF28, 0, 0x0196, 0x014B, 0x55, 0x00, 0x00, 0x03, 0x0C, 0x00

MapHeader_JP_0845CC48: @ 0x0845CC48
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0843918C, MapEvents_JP_0850F9A8, 0x0821C0F3, 0, 0x01AE, 0x0150, 0xC6, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CC64: @ 0x0845CC64
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08439BBC, MapEvents_JP_0850FA34, 0x0821C286, 0, 0x01AE, 0x0151, 0xC6, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CC80: @ 0x0845CC80
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0843A694, MapEvents_JP_0850FAE8, 0x0821C445, 0, 0x01AE, 0x0152, 0xC6, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CC9C: @ 0x0845CC9C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0843ABF4, MapEvents_JP_0850FB5C, 0x0821C668, 0, 0x01AE, 0x0153, 0xC6, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CCB8: @ 0x0845CCB8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0843AF44, MapEvents_JP_0850FBA8, 0x0821C7A4, 0, 0x01AE, 0x0154, 0xC6, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CCD4: @ 0x0845CCD4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0843BC4C, MapEvents_JP_0850FC8C, 0x0821C880, 0, 0x01AE, 0x0155, 0xC6, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CCF0: @ 0x0845CCF0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08443134, MapEvents_JP_0850FCC8, 0x0821CDC4, 0, 0x01AE, 0x017B, 0xC6, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CD0C: @ 0x0845CD0C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08443A3C, MapEvents_JP_0850FCEC, 0x0821CDC5, 0, 0x01AE, 0x017C, 0xC6, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CD28: @ 0x0845CD28
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08443D28, MapEvents_JP_0850FD10, 0x0821CDC6, 0, 0x0196, 0x017D, 0xC7, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CD44: @ 0x0845CD44
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08444014, MapEvents_JP_0850FD34, 0x0821CDD6, 0, 0x0196, 0x017E, 0xC7, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CD60: @ 0x0845CD60
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08444300, MapEvents_JP_0850FD88, 0x0821CDF1, 0, 0x0196, 0x017F, 0xC7, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CD7C: @ 0x0845CD7C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08444798, MapEvents_JP_0850FDEC, 0x0821CE0C, 0, 0x0196, 0x0184, 0xC7, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CD98: @ 0x0845CD98
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084460B4, MapEvents_JP_0850FE20, 0x0821CF6B, 0, 0x0196, 0x0185, 0xD1, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CDB4: @ 0x0845CDB4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0844C818, MapEvents_JP_0850FE8C, 0x0821CFD2, 0, 0x016E, 0x0190, 0xCA, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CDD0: @ 0x0845CDD0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0844CBD4, MapEvents_JP_0850FEC8, 0x0821CFDC, 0, 0x016E, 0x0191, 0xCA, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CDEC: @ 0x0845CDEC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0844E8E4, MapEvents_JP_0850FEE4, 0x0821CFDD, 0, 0x016E, 0x0196, 0xCC, 0x00, 0x0E, 0x05, 0x0D, 0x00

MapHeader_JP_0845CE08: @ 0x0845CE08
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0844EC24, MapEvents_JP_0850FF00, 0x0821CFF5, 0, 0x016E, 0x0197, 0xCB, 0x00, 0x00, 0x04, 0x0E, 0x00

MapHeader_JP_0845CE24: @ 0x0845CE24
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084547AC, MapEvents_JP_0850FF44, 0x0821D004, 0, 0x016E, 0x019D, 0xCB, 0x00, 0x06, 0x04, 0x0E, 0x00

MapHeader_JP_0845CE40: @ 0x0845CE40
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0844EF64, MapEvents_JP_0850FF68, 0x0821D0CB, 0, 0x016E, 0x0198, 0xCD, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CE5C: @ 0x0845CE5C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0844F5D8, MapEvents_JP_0850FFAC, 0x0821D0D5, 0, 0x016E, 0x0199, 0xCD, 0x00, 0x06, 0x04, 0x0E, 0x00

MapHeader_JP_0845CE78: @ 0x0845CE78
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08455EB4, MapEvents_JP_0850FFC8, 0x0821D19C, 0, 0x021F, 0x01A4, 0xD2, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CE94: @ 0x0845CE94
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08459058, MapEvents_JP_0850FFFC, 0x0821D1A6, 0, 0x0182, 0x01AF, 0x3F, 0x00, 0x00, 0x04, 0x0F, 0x00

MapHeader_JP_0845CEB0: @ 0x0845CEB0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08418CA0, MapEvents_JP_08510180, 0x0821D372, 0, 0x017E, 0x00C5, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

MapHeader_JP_0845CECC: @ 0x0845CECC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08418D88, MapEvents_JP_08510304, 0x0821D372, 0, 0x017E, 0x00C6, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

MapHeader_JP_0845CEE8: @ 0x0845CEE8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08418E70, MapEvents_JP_08510488, 0x0821D372, 0, 0x017E, 0x00C7, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

MapHeader_JP_0845CF04: @ 0x0845CF04
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08418F58, MapEvents_JP_0851060C, 0x0821D372, 0, 0x017E, 0x00C8, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

MapHeader_JP_0845CF20: @ 0x0845CF20
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08419040, MapEvents_JP_08510790, 0x0821D372, 0, 0x017E, 0x00C9, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

MapHeader_JP_0845CF3C: @ 0x0845CF3C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08419128, MapEvents_JP_08510914, 0x0821D372, 0, 0x017E, 0x00CA, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

MapHeader_JP_0845CF58: @ 0x0845CF58
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08419228, MapEvents_JP_08510A98, 0x0821D372, 0, 0x017E, 0x00CB, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

MapHeader_JP_0845CF74: @ 0x0845CF74
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08419344, MapEvents_JP_08510C1C, 0x0821D372, 0, 0x017E, 0x00CC, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

MapHeader_JP_0845CF90: @ 0x0845CF90
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08419438, MapEvents_JP_08510DA0, 0x0821D372, 0, 0x017E, 0x00CD, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

MapHeader_JP_0845CFAC: @ 0x0845CFAC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08419554, MapEvents_JP_08510F24, 0x0821D372, 0, 0x017E, 0x00CE, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

MapHeader_JP_0845CFC8: @ 0x0845CFC8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08419654, MapEvents_JP_085110A8, 0x0821D372, 0, 0x017E, 0x00CF, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

MapHeader_JP_0845CFE4: @ 0x0845CFE4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08419748, MapEvents_JP_0851122C, 0x0821D372, 0, 0x017E, 0x00D0, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

MapHeader_JP_0845D000: @ 0x0845D000
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08419858, MapEvents_JP_085113B0, 0x0821D372, 0, 0x017E, 0x00D1, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

MapHeader_JP_0845D01C: @ 0x0845D01C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084199C4, MapEvents_JP_08511534, 0x0821D372, 0, 0x017E, 0x00D2, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

MapHeader_JP_0845D038: @ 0x0845D038
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08419B38, MapEvents_JP_085116B8, 0x0821D372, 0, 0x017E, 0x00D3, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

MapHeader_JP_0845D054: @ 0x0845D054
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08419C60, MapEvents_JP_0851183C, 0x0821D372, 0, 0x017E, 0x00D4, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

MapHeader_JP_0845D070: @ 0x0845D070
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08419D90, MapEvents_JP_085119C0, 0x0821D372, 0, 0x017E, 0x00D5, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

MapHeader_JP_0845D08C: @ 0x0845D08C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08419ED0, MapEvents_JP_08511B44, 0x0821D372, 0, 0x017E, 0x00D6, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

MapHeader_JP_0845D0A8: @ 0x0845D0A8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841A000, MapEvents_JP_08511CC8, 0x0821D372, 0, 0x017E, 0x00D7, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

MapHeader_JP_0845D0C4: @ 0x0845D0C4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841A170, MapEvents_JP_08511E4C, 0x0821D372, 0, 0x017E, 0x00D8, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

MapHeader_JP_0845D0E0: @ 0x0845D0E0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841A2C4, MapEvents_JP_08511FD0, 0x0821D372, 0, 0x017E, 0x00D9, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

MapHeader_JP_0845D0FC: @ 0x0845D0FC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841A450, MapEvents_JP_08512154, 0x0821D372, 0, 0x017E, 0x00DA, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

MapHeader_JP_0845D118: @ 0x0845D118
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841A5F8, MapEvents_JP_085122D8, 0x0821D372, 0, 0x017E, 0x00DB, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

MapHeader_JP_0845D134: @ 0x0845D134
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841A74C, MapEvents_JP_0851245C, 0x0821D372, 0, 0x017E, 0x00DC, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

MapHeader_JP_0845D150: @ 0x0845D150
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841A868, MapEvents_JP_085124B8, 0x0821D626, 0, 0x01A6, 0x00DD, 0x57, 0x00, 0x00, 0x08, 0x00, 0x08

MapHeader_JP_0845D16C: @ 0x0845D16C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841A960, MapEvents_JP_08512514, 0x0821D627, 0, 0x01A6, 0x00DE, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D188: @ 0x0845D188
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841AB10, MapEvents_JP_085125A0, 0x0821D628, 0, 0x01A6, 0x00DF, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D1A4: @ 0x0845D1A4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841AC2C, MapEvents_JP_08512614, 0x0821D629, 0, 0x01A6, 0x00E0, 0x57, 0x00, 0x00, 0x08, 0x00, 0x08

MapHeader_JP_0845D1C0: @ 0x0845D1C0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841AD98, MapEvents_JP_08512790, 0x0821D62A, 0, 0x01B8, 0x00E1, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D1DC: @ 0x0845D1DC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841ADBC, MapEvents_JP_08512790, 0x0821D62A, 0, 0x0165, 0x00E2, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D1F8: @ 0x0845D1F8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841ADE0, MapEvents_JP_08512790, 0x0821D62A, 0, 0x0165, 0x00E3, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D214: @ 0x0845D214
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841AE04, MapEvents_JP_08512790, 0x0821D62A, 0, 0x0165, 0x00E4, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D230: @ 0x0845D230
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841AE28, MapEvents_JP_08512790, 0x0821D62A, 0, 0x0165, 0x00E5, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D24C: @ 0x0845D24C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841AE4C, MapEvents_JP_08512790, 0x0821D62A, 0, 0x0165, 0x00E6, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D268: @ 0x0845D268
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841AE70, MapEvents_JP_08512790, 0x0821D62A, 0, 0x0165, 0x00E7, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D284: @ 0x0845D284
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841AFDC, MapEvents_JP_08512790, 0x0821D62A, 0, 0x01B8, 0x00E8, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D2A0: @ 0x0845D2A0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841B148, MapEvents_JP_08512790, 0x0821D62A, 0, 0x01B8, 0x00E9, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D2BC: @ 0x0845D2BC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841B2B4, MapEvents_JP_08512790, 0x0821D62A, 0, 0x01B8, 0x00EA, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D2D8: @ 0x0845D2D8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841B420, MapEvents_JP_08512790, 0x0821D62A, 0, 0x01B8, 0x00EB, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D2F4: @ 0x0845D2F4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841B58C, MapEvents_JP_08512790, 0x0821D62A, 0, 0x01B8, 0x00EC, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D310: @ 0x0845D310
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841B5E0, MapEvents_JP_08512870, 0x0821DD83, 0, 0xFFFF, 0x00ED, 0x54, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D32C: @ 0x0845D32C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084294B4, MapEvents_JP_085129D4, 0x0821DE46, 0, 0x01AF, 0x0115, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D348: @ 0x0845D348
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08429690, MapEvents_JP_08512A2C, 0x0821E3E1, 0, 0x01AF, 0x0116, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D364: @ 0x0845D364
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08429BC0, MapEvents_JP_08512B78, 0x0821E4E8, 0, 0x01AF, 0x0117, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D380: @ 0x0845D380
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08441B48, MapEvents_JP_08512C34, 0x0821E965, 0, 0xFFFF, 0x016A, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

MapHeader_JP_0845D39C: @ 0x0845D39C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08441BE8, MapEvents_JP_08512CF0, 0x0821E965, 0, 0xFFFF, 0x016B, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

MapHeader_JP_0845D3B8: @ 0x0845D3B8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08441C88, MapEvents_JP_08512DAC, 0x0821E965, 0, 0xFFFF, 0x016C, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

MapHeader_JP_0845D3D4: @ 0x0845D3D4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08441D28, MapEvents_JP_08512E68, 0x0821E965, 0, 0xFFFF, 0x016D, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

MapHeader_JP_0845D3F0: @ 0x0845D3F0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08441DC8, MapEvents_JP_08512F24, 0x0821E965, 0, 0xFFFF, 0x016E, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

MapHeader_JP_0845D40C: @ 0x0845D40C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08441E68, MapEvents_JP_08512FE0, 0x0821E965, 0, 0xFFFF, 0x016F, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

MapHeader_JP_0845D428: @ 0x0845D428
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08441F08, MapEvents_JP_0851309C, 0x0821E965, 0, 0xFFFF, 0x0170, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

MapHeader_JP_0845D444: @ 0x0845D444
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08441FA8, MapEvents_JP_08513158, 0x0821E965, 0, 0xFFFF, 0x0171, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

MapHeader_JP_0845D460: @ 0x0845D460
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08442048, MapEvents_JP_08513214, 0x0821E965, 0, 0xFFFF, 0x0172, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

MapHeader_JP_0845D47C: @ 0x0845D47C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084420E8, MapEvents_JP_085132D0, 0x0821E965, 0, 0xFFFF, 0x0173, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

MapHeader_JP_0845D498: @ 0x0845D498
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08442188, MapEvents_JP_0851338C, 0x0821E965, 0, 0xFFFF, 0x0174, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

MapHeader_JP_0845D4B4: @ 0x0845D4B4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08442228, MapEvents_JP_08513448, 0x0821E965, 0, 0xFFFF, 0x0175, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

MapHeader_JP_0845D4D0: @ 0x0845D4D0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084422C8, MapEvents_JP_08513504, 0x0821E965, 0, 0xFFFF, 0x0176, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

MapHeader_JP_0845D4EC: @ 0x0845D4EC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08442368, MapEvents_JP_085135C0, 0x0821E965, 0, 0xFFFF, 0x0177, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

MapHeader_JP_0845D508: @ 0x0845D508
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08442408, MapEvents_JP_0851367C, 0x0821E965, 0, 0xFFFF, 0x0178, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

MapHeader_JP_0845D524: @ 0x0845D524
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084424A8, MapEvents_JP_08513738, 0x0821E965, 0, 0xFFFF, 0x0179, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

MapHeader_JP_0845D540: @ 0x0845D540
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08449180, MapEvents_JP_08513834, 0x0821E966, 0, 0x01A6, 0x0189, 0x57, 0x00, 0x00, 0x08, 0x00, 0x08

MapHeader_JP_0845D55C: @ 0x0845D55C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841C280, MapEvents_JP_08513878, 0x0821EA09, MapConnections_JP_0845F230, 0x01AC, 0x00EE, 0x39, 0x00, 0x00, 0x03, 0x0D, 0x00

MapHeader_JP_0845D578: @ 0x0845D578
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841CF20, MapEvents_JP_08513964, 0x0821EA13, MapConnections_JP_0845F25C, 0x01AC, 0x00EF, 0x39, 0x00, 0x00, 0x03, 0x0D, 0x00

MapHeader_JP_0845D594: @ 0x0845D594
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841DBC0, MapEvents_JP_085139BC, 0x0821EA26, MapConnections_JP_0845F27C, 0x01AC, 0x00F0, 0x39, 0x00, 0x00, 0x03, 0x0D, 0x00

MapHeader_JP_0845D5B0: @ 0x0845D5B0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841E860, MapEvents_JP_08513A68, 0x0821EA39, MapConnections_JP_0845F2A8, 0x01AC, 0x00F1, 0x39, 0x00, 0x00, 0x03, 0x0D, 0x00

MapHeader_JP_0845D5CC: @ 0x0845D5CC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0842541C, MapEvents_JP_08513D50, 0x0821EBA1, MapConnections_JP_0845F2FC, 0x01C9, 0x0109, 0x3A, 0x00, 0x00, 0x03, 0x0D, 0x00

MapHeader_JP_0845D5E8: @ 0x0845D5E8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0842347C, MapEvents_JP_08513E90, 0x0821F6BC, 0, 0x01D1, 0x0108, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D604: @ 0x0845D604
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08425484, MapEvents_JP_08513EBC, 0x08221AD4, 0, 0x01D1, 0x010A, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D620: @ 0x0845D620
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08425550, MapEvents_JP_08513EE8, 0x08221BA3, 0, 0x01D1, 0x010B, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D63C: @ 0x0845D63C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08425624, MapEvents_JP_08513F54, 0x08221C39, 0, 0x01D1, 0x010C, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x08

MapHeader_JP_0845D658: @ 0x0845D658
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0842D424, MapEvents_JP_08513FB4, 0x08222765, 0, 0x017D, 0x0122, 0x49, 0x00, 0x00, 0x03, 0x0D, 0x00

MapHeader_JP_0845D674: @ 0x0845D674
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0842D954, MapEvents_JP_08514014, 0x082227E2, 0, 0x017D, 0x0123, 0x49, 0x00, 0x0B, 0x03, 0x0D, 0x00

MapHeader_JP_0845D690: @ 0x0845D690
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08437748, MapEvents_JP_08514080, 0x08222983, 0, 0x01AC, 0x0149, 0x39, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D6AC: @ 0x0845D6AC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08449E20, MapEvents_JP_08514184, 0x0822299F, MapConnections_JP_0845F2C8, 0x01AC, 0x018A, 0x39, 0x00, 0x00, 0x03, 0x0D, 0x00

MapHeader_JP_0845D6C8: @ 0x0845D6C8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0844AAC0, MapEvents_JP_08514228, 0x082229A0, MapConnections_JP_0845F2E8, 0x01AC, 0x018B, 0x39, 0x00, 0x00, 0x03, 0x0D, 0x00

MapHeader_JP_0845D6E4: @ 0x0845D6E4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0843EAAC, MapEvents_JP_0851457C, 0x082229A1, MapConnections_JP_0845F310, 0x01C9, 0x0159, 0x3A, 0x00, 0x00, 0x03, 0x0D, 0x00

MapHeader_JP_0845D700: @ 0x0845D700
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0844634C, MapEvents_JP_08514668, 0x08223475, 0, 0x01D1, 0x0186, 0x3A, 0x00, 0x00, 0x08, 0x04, 0x00

MapHeader_JP_0845D71C: @ 0x0845D71C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08446418, MapEvents_JP_085146DC, 0x08226400, 0, 0x01D1, 0x0187, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D738: @ 0x0845D738
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08425624, MapEvents_JP_08514780, 0x0822659E, 0, 0x01D1, 0x010C, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x08

MapHeader_JP_0845D754: @ 0x0845D754
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08438150, MapEvents_JP_08514864, 0x08226D8C, 0, 0x01D9, 0x014C, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D770: @ 0x0845D770
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08438410, MapEvents_JP_085148A0, 0x08227EC9, 0, 0x01D9, 0x014D, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D78C: @ 0x0845D78C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084384C0, MapEvents_JP_085148DC, 0x08227FC4, 0, 0x01D3, 0x014E, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D7A8: @ 0x0845D7A8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08438670, MapEvents_JP_08514A58, 0x08228828, 0, 0x01D3, 0x014F, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D7C4: @ 0x0845D7C4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0843BEC4, MapEvents_JP_08514B38, 0x08229D56, 0, 0x01CF, 0x0156, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D7E0: @ 0x0845D7E0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0843C0C0, MapEvents_JP_08514C14, 0x0822AF25, 0, 0x01CF, 0x0157, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D7FC: @ 0x0845D7FC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0843C20C, MapEvents_JP_08514CB0, 0x0822B155, 0, 0x01CF, 0x0158, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D818: @ 0x0845D818
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08441A08, MapEvents_JP_08514D44, 0x0822BCDD, 0, 0x01CD, 0x0168, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D834: @ 0x0845D834
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08441AA8, MapEvents_JP_08514ED8, 0x0822D4FC, 0, 0xFFFF, 0x0169, 0x3A, 0x00, 0x00, 0x08, 0x04, 0x00

MapHeader_JP_0845D850: @ 0x0845D850
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08442AE4, MapEvents_JP_08514F2C, 0x0822E9A2, 0, 0xFFFF, 0x017A, 0x3A, 0x00, 0x00, 0x08, 0x04, 0x00

MapHeader_JP_0845D86C: @ 0x0845D86C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0843F648, MapEvents_JP_08514FD8, 0x0822F1C9, 0, 0x01CA, 0x0162, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D888: @ 0x0845D888
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0843F860, MapEvents_JP_08515004, 0x08230081, 0, 0x01CA, 0x0163, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D8A4: @ 0x0845D8A4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0843F9E0, MapEvents_JP_085150F0, 0x08230137, 0, 0x01CA, 0x0164, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D8C0: @ 0x0845D8C0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0843EC94, MapEvents_JP_085151C8, 0x08230DBB, 0, 0x01D5, 0x015A, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D8DC: @ 0x0845D8DC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0843EE90, MapEvents_JP_085151F4, 0x08231CA8, 0, 0x01D5, 0x015B, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D8F8: @ 0x0845D8F8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0843EFE8, MapEvents_JP_085152C8, 0x082329C4, 0, 0x01D5, 0x015C, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D914: @ 0x0845D914
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0843F128, MapEvents_JP_0851536C, 0x0823309D, 0, 0x01D4, 0x015D, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D930: @ 0x0845D930
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0843F228, MapEvents_JP_08515398, 0x08233C01, 0, 0x01D4, 0x015E, 0x3A, 0x00, 0x00, 0x08, 0x04, 0x00

MapHeader_JP_0845D94C: @ 0x0845D94C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0843F368, MapEvents_JP_0851546C, 0x08233CB9, 0, 0x01D4, 0x015F, 0x3A, 0x00, 0x00, 0x08, 0x04, 0x00

MapHeader_JP_0845D968: @ 0x0845D968
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0843F418, MapEvents_JP_08515520, 0x082343A7, 0, 0x01D4, 0x0160, 0x3A, 0x00, 0x00, 0x08, 0x04, 0x00

MapHeader_JP_0845D984: @ 0x0845D984
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0843F488, MapEvents_JP_0851554C, 0x08235259, 0, 0x01D4, 0x0161, 0x3A, 0x00, 0x00, 0x08, 0x04, 0x00

MapHeader_JP_0845D9A0: @ 0x0845D9A0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084417A8, MapEvents_JP_085155D0, 0x082352D1, 0, 0x01D4, 0x0166, 0x3A, 0x00, 0x00, 0x08, 0x04, 0x00

MapHeader_JP_0845D9BC: @ 0x0845D9BC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0844B118, MapEvents_JP_085156CC, 0x08235360, 0, 0x0175, 0x018C, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D9D8: @ 0x0845D9D8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08458838, MapEvents_JP_08515730, 0x0823554B, 0, 0x0180, 0x01AD, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845D9F4: @ 0x0845D9F4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0844B374, MapEvents_JP_08515834, 0x08235AFE, 0, 0x0180, 0x018E, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845DA10: @ 0x0845DA10
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0844B208, MapEvents_JP_085158D0, 0x082369E6, 0, 0x0180, 0x018D, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845DA2C: @ 0x0845DA2C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08458838, MapEvents_JP_08515964, 0x082376F6, 0, 0x0180, 0x01AD, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845DA48: @ 0x0845DA48
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08458838, MapEvents_JP_085159C8, 0x0823857A, 0, 0x0180, 0x01AD, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845DA64: @ 0x0845DA64
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084588B8, MapEvents_JP_08515A04, 0x0823861D, 0, 0x0180, 0x01AE, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845DA80: @ 0x0845DA80
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0844B208, MapEvents_JP_08515A88, 0x08238FA7, 0, 0x0180, 0x018D, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845DA9C: @ 0x0845DA9C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08458838, MapEvents_JP_08515ABC, 0x082395B3, 0, 0x0180, 0x01AD, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845DAB8: @ 0x0845DAB8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08458838, MapEvents_JP_08515B38, 0x08239778, 0, 0x0180, 0x01AD, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845DAD4: @ 0x0845DAD4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0844B490, MapEvents_JP_08515BD4, 0x0823A22C, 0, 0x0180, 0x018F, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845DAF0: @ 0x0845DAF0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08458838, MapEvents_JP_08515C38, 0x0823AFD2, 0, 0x0180, 0x01AD, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845DB0C: @ 0x0845DB0C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08458838, MapEvents_JP_08515C74, 0x0823B133, 0, 0x0180, 0x01AD, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845DB28: @ 0x0845DB28
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, MapEvents_JP_08515D18, 0x0823B134, 0, 0x0190, 0x003D, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845DB44: @ 0x0845DB44
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, MapEvents_JP_08515DA4, 0x0823B223, 0, 0x0190, 0x003E, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845DB60: @ 0x0845DB60
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF570, MapEvents_JP_08515E28, 0x0823B24A, 0, 0x0194, 0x003F, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845DB7C: @ 0x0845DB7C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0844D82C, MapEvents_JP_08515EB8, 0x0823B35C, 0, 0x017D, 0x0192, 0xC9, 0x00, 0x00, 0x08, 0x0D, 0x00

MapHeader_JP_0845DB98: @ 0x0845DB98
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0844DE30, MapEvents_JP_08515EF4, 0x0823B3C8, 0, 0x017D, 0x0193, 0xC9, 0x00, 0x0B, 0x08, 0x0D, 0x00

MapHeader_JP_0845DBB4: @ 0x0845DBB4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0844E558, MapEvents_JP_08515F40, 0x0823B5CE, 0, 0xFFFF, 0x0194, 0xC8, 0x00, 0x00, 0x08, 0x0C, 0x00

MapHeader_JP_0845DBD0: @ 0x0845DBD0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0844E734, MapEvents_JP_08515F8C, 0x0823B715, 0, 0xFFFF, 0x0195, 0xC8, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845DBEC: @ 0x0845DBEC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08454A54, MapEvents_JP_0851604C, 0x0823B765, 0, 0x0180, 0x019E, 0xD4, 0x00, 0x00, 0x08, 0x04, 0x00

MapHeader_JP_0845DC08: @ 0x0845DC08
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08454D14, MapEvents_JP_08516070, 0x0823BF80, 0, 0x0180, 0x019F, 0xD4, 0x00, 0x00, 0x08, 0x04, 0x00

MapHeader_JP_0845DC24: @ 0x0845DC24
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08454FD4, MapEvents_JP_08516094, 0x0823BF90, 0, 0x0180, 0x01A0, 0xD4, 0x00, 0x00, 0x08, 0x04, 0x00

MapHeader_JP_0845DC40: @ 0x0845DC40
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08455294, MapEvents_JP_085160B8, 0x0823BFA0, 0, 0x0180, 0x01A1, 0xD4, 0x00, 0x00, 0x08, 0x04, 0x00

MapHeader_JP_0845DC5C: @ 0x0845DC5C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08455554, MapEvents_JP_085160DC, 0x0823BFAB, 0, 0x0180, 0x01A2, 0xD4, 0x00, 0x00, 0x08, 0x04, 0x00

MapHeader_JP_0845DC78: @ 0x0845DC78
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08455894, MapEvents_JP_08516118, 0x0823BFB6, 0, 0x0180, 0x01A3, 0xD4, 0x00, 0x00, 0x08, 0x04, 0x00

MapHeader_JP_0845DC94: @ 0x0845DC94
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084562C4, MapEvents_JP_0851613C, 0x0823C0C1, 0, 0x0221, 0x01A5, 0xD3, 0x00, 0x00, 0x08, 0x0D, 0x00

MapHeader_JP_0845DCB0: @ 0x0845DCB0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0844E734, MapEvents_JP_08516188, 0x0823C0CB, 0, 0x0221, 0x0195, 0xD3, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845DCCC: @ 0x0845DCCC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08456824, MapEvents_JP_085161AC, 0x0823C11B, 0, 0x021F, 0x01A6, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

MapHeader_JP_0845DCE8: @ 0x0845DCE8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457520, MapEvents_JP_085161D0, 0x0823C11C, 0, 0x021F, 0x01AB, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

MapHeader_JP_0845DD04: @ 0x0845DD04
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08458764, MapEvents_JP_085161FC, 0x0823C11D, 0, 0x021F, 0x01AC, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

MapHeader_JP_0845DD20: @ 0x0845DD20
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457254, MapEvents_JP_08516220, 0x0823C11E, 0, 0x021F, 0x01A9, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

MapHeader_JP_0845DD3C: @ 0x0845DD3C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457304, MapEvents_JP_08516244, 0x0823C11F, 0, 0x021F, 0x01AA, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

MapHeader_JP_0845DD58: @ 0x0845DD58
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457254, MapEvents_JP_08516268, 0x0823C120, 0, 0x021F, 0x01A9, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

MapHeader_JP_0845DD74: @ 0x0845DD74
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457304, MapEvents_JP_0851628C, 0x0823C121, 0, 0x021F, 0x01AA, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

MapHeader_JP_0845DD90: @ 0x0845DD90
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08456DBC, MapEvents_JP_085162DC, 0x0823C122, 0, 0x021F, 0x01A7, 0xD3, 0x00, 0x0B, 0x04, 0x0C, 0x00

MapHeader_JP_0845DDAC: @ 0x0845DDAC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457254, MapEvents_JP_08516300, 0x0823C259, 0, 0x021F, 0x01A9, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

MapHeader_JP_0845DDC8: @ 0x0845DDC8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457304, MapEvents_JP_08516324, 0x0823C25A, 0, 0x021F, 0x01AA, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

MapHeader_JP_0845DDE4: @ 0x0845DDE4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457254, MapEvents_JP_08516348, 0x0823C25B, 0, 0x021F, 0x01A9, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

MapHeader_JP_0845DE00: @ 0x0845DE00
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457304, MapEvents_JP_0851636C, 0x0823C25C, 0, 0x021F, 0x01AA, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

MapHeader_JP_0845DE1C: @ 0x0845DE1C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457254, MapEvents_JP_08516390, 0x0823C25D, 0, 0x021F, 0x01A9, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

MapHeader_JP_0845DE38: @ 0x0845DE38
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457304, MapEvents_JP_085163B4, 0x0823C25E, 0, 0x021F, 0x01AA, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

MapHeader_JP_0845DE54: @ 0x0845DE54
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457254, MapEvents_JP_085163D8, 0x0823C25F, 0, 0x021F, 0x01A9, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

MapHeader_JP_0845DE70: @ 0x0845DE70
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457304, MapEvents_JP_085163FC, 0x0823C260, 0, 0x021F, 0x01AA, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

MapHeader_JP_0845DE8C: @ 0x0845DE8C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457254, MapEvents_JP_08516420, 0x0823C261, 0, 0x021F, 0x01A9, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

MapHeader_JP_0845DEA8: @ 0x0845DEA8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457304, MapEvents_JP_08516444, 0x0823C262, 0, 0x021F, 0x01AA, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

MapHeader_JP_0845DEC4: @ 0x0845DEC4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457254, MapEvents_JP_08516468, 0x0823C263, 0, 0x021F, 0x01A9, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

MapHeader_JP_0845DEE0: @ 0x0845DEE0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084571A4, MapEvents_JP_0851649C, 0x0823C264, 0, 0x021F, 0x01A8, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

MapHeader_JP_0845DEFC: @ 0x0845DEFC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08425484, MapEvents_JP_085164D8, 0x0823C35E, 0, 0x0180, 0x010A, 0xD4, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845DF18: @ 0x0845DF18
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0842C944, 0x085164EC, 0x0823C401, 0, 0x0191, 0x011F, 0x13, 0x00, 0x02, 0x03, 0x08, 0x00

MapHeader_JP_0845DF34: @ 0x0845DF34
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08406310, 0x08516500, 0x0823C402, 0, 0x0191, 0x0075, 0x13, 0x00, 0x00, 0x08, 0x08, 0x00

MapHeader_JP_0845DF50: @ 0x0845DF50
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841F594, MapEvents_JP_08516584, 0x0823C403, 0, 0x01AB, 0x00F3, 0x18, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845DF6C: @ 0x0845DF6C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841F674, MapEvents_JP_08516614, 0x0823C821, 0, 0x01C0, 0x00F4, 0x19, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845DF88: @ 0x0845DF88
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841F754, MapEvents_JP_0851666C, 0x0823D6C0, 0, 0x01C0, 0x00F5, 0x19, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845DFA4: @ 0x0845DFA4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0841FA44, MapEvents_JP_085166A0, 0x0823DEC9, 0, 0x01C0, 0x00F6, 0x19, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845DFC0: @ 0x0845DFC0
	@ struct MapHeader
	.4byte MapLayout_JP_0841FCF8
	.4byte MapEvents_JP_08516840
	.4byte 0x0823DED5
	.4byte 0
	.2byte 0x01C0, 0x00F7
	.byte 0x19, 0x00, 0x00, 0x08, 0x00, 0x00
	@ final flags/battleType bytes are shared with gText_Rom_45DFDA
