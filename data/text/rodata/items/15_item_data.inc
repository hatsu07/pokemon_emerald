	@ src/dodrio_berry_picking.c:3064 sJPText_Vowels
	.globl gText_Rom_2CB404
gText_Rom_2CB404: @ 0x082CB404
	.string "あいうえおかき$"
	.if (. - gText_Rom_2CB404) > 0x8
	.error "gText_Rom_2CB404 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2CB404) < 0x8
	.space 0x8 - (. - gText_Rom_2CB404)
	.endif

	@ src/dodrio_berry_picking.c:3065 sText_Letters
	.globl gText_Rom_2CB40C
gText_Rom_2CB40C: @ 0x082CB40C
	.string "ABCDEFG$"
	.if (. - gText_Rom_2CB40C) > 0x8
	.error "gText_Rom_2CB40C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2CB40C) < 0x8
	.space 0x8 - (. - gText_Rom_2CB40C)
	.endif

	@ src/dodrio_berry_picking.c:3066 sText_Digits
	.globl gText_Rom_2CB414
gText_Rom_2CB414: @ 0x082CB414
	.string "0123456$"
	.if (. - gText_Rom_2CB414) > 0x8
	.error "gText_Rom_2CB414 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2CB414) < 0x8
	.space 0x8 - (. - gText_Rom_2CB414)
	.endif
	.globl gUnknown_82CB41C
gUnknown_82CB41C: @ 0x082CB41C
	.incbin "baserom.gba", 0x2cb41c, 0x14
	.globl gUnknown_82CB430
gUnknown_82CB430: @ 0x082CB430
	.incbin "baserom.gba", 0x2cb430, 0x18
	.globl gUnknown_82CB448
gUnknown_82CB448: @ 0x082CB448
	.incbin "baserom.gba", 0x2cb448, 0x10
	.globl gUnknown_82CB458
gUnknown_82CB458: @ 0x082CB458
	.incbin "baserom.gba", 0x2cb458, 0x8
	.globl gUnknown_82CB460
gUnknown_82CB460: @ 0x082CB460
	.incbin "baserom.gba", 0x2cb460, 0x10
	.globl gUnknown_82CB470
gUnknown_82CB470: @ 0x082CB470
	.incbin "baserom.gba", 0x2cb470, 0x8
	.globl gUnknown_82CB478
gUnknown_82CB478: @ 0x082CB478
	.incbin "baserom.gba", 0x2cb478, 0x204
	.globl gUnknown_82CB67C
gUnknown_82CB67C: @ 0x082CB67C
	.incbin "baserom.gba", 0x2cb67c, 0xc0
	.globl gUnknown_82CB73C
gUnknown_82CB73C: @ 0x082CB73C
	.incbin "baserom.gba", 0x2cb73c, 0x1d4
	.globl gUnknown_82CB910
gUnknown_82CB910: @ 0x082CB910
	.incbin "baserom.gba", 0x2cb910, 0x890
	.globl gUnknown_82CC1A0
gUnknown_82CC1A0: @ 0x082CC1A0
	.incbin "baserom.gba", 0x2cc1a0, 0xdcc
	.globl gUnknown_82CCF6C
gUnknown_82CCF6C: @ 0x082CCF6C
	.incbin "baserom.gba", 0x2ccf6c, 0x94
	.globl gUnknown_82CD000
gUnknown_82CD000: @ 0x082CD000
	.incbin "baserom.gba", 0x2cd000, 0x148
	.globl gUnknown_82CD148
gUnknown_82CD148: @ 0x082CD148
	.incbin "baserom.gba", 0x2cd148, 0x121c
	.globl gUnknown_82CE364
gUnknown_82CE364: @ 0x082CE364
	.incbin "baserom.gba", 0x2ce364, 0x26c
	.globl gUnknown_82CE5D0
gUnknown_82CE5D0: @ 0x082CE5D0
	.incbin "baserom.gba", 0x2ce5d0, 0x250
	.globl gUnknown_82CE820
gUnknown_82CE820: @ 0x082CE820
	.incbin "baserom.gba", 0x2ce820, 0x24c
	.globl gUnknown_82CEA6C
gUnknown_82CEA6C: @ 0x082CEA6C
	.incbin "baserom.gba", 0x2cea6c, 0x48
	.globl gUnknown_82CEAB4
gUnknown_82CEAB4: @ 0x082CEAB4
	.incbin "baserom.gba", 0x2ceab4, 0xb0
	.globl gUnknown_82CEB64
gUnknown_82CEB64: @ 0x082CEB64
	.incbin "baserom.gba", 0x2ceb64, 0x8
	.globl gUnknown_82CEB6C
gUnknown_82CEB6C: @ 0x082CEB6C
	.incbin "baserom.gba", 0x2ceb6c, 0x8
	.globl gUnknown_82CEB74
gUnknown_82CEB74: @ 0x082CEB74
	.incbin "baserom.gba", 0x2ceb74, 0x8
	.globl gUnknown_82CEB7C
gUnknown_82CEB7C: @ 0x082CEB7C
	.incbin "baserom.gba", 0x2ceb7c, 0x24
	.globl gUnknown_82CEBA0
gUnknown_82CEBA0: @ 0x082CEBA0
	.incbin "baserom.gba", 0x2ceba0, 0x8
	.globl gUnknown_82CEBA8
gUnknown_82CEBA8: @ 0x082CEBA8
	.incbin "baserom.gba", 0x2ceba8, 0x8
	.globl gUnknown_82CEBB0
gUnknown_82CEBB0: @ 0x082CEBB0
	.incbin "baserom.gba", 0x2cebb0, 0x18
	.globl gUnknown_82CEBC8
gUnknown_82CEBC8: @ 0x082CEBC8
	.incbin "baserom.gba", 0x2cebc8, 0x18
	.globl gUnknown_82CEBE0
gUnknown_82CEBE0: @ 0x082CEBE0
	.incbin "baserom.gba", 0x2cebe0, 0x2
	.globl gUnknown_82CEBE2
gUnknown_82CEBE2: @ 0x082CEBE2
	.incbin "baserom.gba", 0x2cebe2, 0xa
	.globl gUnknown_82CEBEC
gUnknown_82CEBEC: @ 0x082CEBEC
	.incbin "baserom.gba", 0x2cebec, 0x8
	.globl gUnknown_82CEBF4
gUnknown_82CEBF4: @ 0x082CEBF4
	.incbin "baserom.gba", 0x2cebf4, 0x18
	.globl gUnknown_82CEC0C
gUnknown_82CEC0C: @ 0x082CEC0C
	.incbin "baserom.gba", 0x2cec0c, 0x3
	.globl gUnknown_82CEC0F
gUnknown_82CEC0F: @ 0x082CEC0F
	.incbin "baserom.gba", 0x2cec0f, 0x45
	.globl gUnknown_82CEC54
gUnknown_82CEC54: @ 0x082CEC54
	.incbin "baserom.gba", 0x2cec54, 0x14
	.globl gUnknown_82CEC68
gUnknown_82CEC68: @ 0x082CEC68
	.incbin "baserom.gba", 0x2cec68, 0x14
	.globl gUnknown_82CEC7C
gUnknown_82CEC7C: @ 0x082CEC7C
	.incbin "baserom.gba", 0x2cec7c, 0x8
	.globl gUnknown_82CEC84
gUnknown_82CEC84: @ 0x082CEC84
	.incbin "baserom.gba", 0x2cec84, 0xa
	.globl gUnknown_82CEC8E
gUnknown_82CEC8E: @ 0x082CEC8E
	.incbin "baserom.gba", 0x2cec8e, 0xa
	.globl gUnknown_82CEC98
gUnknown_82CEC98: @ 0x082CEC98
	.incbin "baserom.gba", 0x2cec98, 0x50
	.globl gUnknown_82CECE8
gUnknown_82CECE8: @ 0x082CECE8
	.incbin "baserom.gba", 0x2cece8, 0x8
	.globl gUnknown_82CECF0
gUnknown_82CECF0: @ 0x082CECF0
	.incbin "baserom.gba", 0x2cecf0, 0x190
	.globl gUnknown_82CEE80
gUnknown_82CEE80: @ 0x082CEE80
	.incbin "baserom.gba", 0x2cee80, 0x24
	.globl gUnknown_82CEEA4
gUnknown_82CEEA4: @ 0x082CEEA4
	.incbin "baserom.gba", 0x2ceea4, 0x24
	.globl gUnknown_82CEEC8
gUnknown_82CEEC8: @ 0x082CEEC8
	.incbin "baserom.gba", 0x2ceec8, 0x10
	.globl gUnknown_82CEED8
gUnknown_82CEED8: @ 0x082CEED8
	.incbin "baserom.gba", 0x2ceed8, 0x8
	.globl gUnknown_82CEEE0
gUnknown_82CEEE0: @ 0x082CEEE0
	.incbin "baserom.gba", 0x2ceee0, 0x8
	.globl gUnknown_82CEEE8
gUnknown_82CEEE8: @ 0x082CEEE8
	.incbin "baserom.gba", 0x2ceee8, 0x90
	.globl gUnknown_82CEF78
gUnknown_82CEF78: @ 0x082CEF78
	.incbin "baserom.gba", 0x2cef78, 0x18
	.globl gUnknown_82CEF90
gUnknown_82CEF90: @ 0x082CEF90
	.incbin "baserom.gba", 0x2cef90, 0x10
	.globl gUnknown_82CEFA0
gUnknown_82CEFA0: @ 0x082CEFA0
	.incbin "baserom.gba", 0x2cefa0, 0x6f4
	.globl gUnknown_82CF694
gUnknown_82CF694: @ 0x082CF694
	.incbin "baserom.gba", 0x2cf694, 0x28
	.globl gUnknown_82CF6BC
gUnknown_82CF6BC: @ 0x082CF6BC
	.incbin "baserom.gba", 0x2cf6bc, 0x10
	.globl gUnknown_82CF6CC
gUnknown_82CF6CC: @ 0x082CF6CC
	.incbin "baserom.gba", 0x2cf6cc, 0x18
	.globl gUnknown_82CF6E4
gUnknown_82CF6E4: @ 0x082CF6E4
	.incbin "baserom.gba", 0x2cf6e4, 0x50
	.globl gUnknown_82CF734
gUnknown_82CF734: @ 0x082CF734
	.incbin "baserom.gba", 0x2cf734, 0x10
	.globl gUnknown_82CF744
gUnknown_82CF744: @ 0x082CF744
	.incbin "baserom.gba", 0x2cf744, 0x154
	.globl gUnknown_82CF898
gUnknown_82CF898: @ 0x082CF898
	.incbin "baserom.gba", 0x2cf898, 0x18
	.globl gUnknown_82CF8B0
gUnknown_82CF8B0: @ 0x082CF8B0
	.incbin "baserom.gba", 0x2cf8b0, 0x20
	.globl gUnknown_82CF8D0
gUnknown_82CF8D0: @ 0x082CF8D0
	.incbin "baserom.gba", 0x2cf8d0, 0x20
	.globl gUnknown_82CF8F0
gUnknown_82CF8F0: @ 0x082CF8F0
	.incbin "baserom.gba", 0x2cf8f0, 0x22c
	.globl gUnknown_82CFB1C
gUnknown_82CFB1C: @ 0x082CFB1C
	.incbin "baserom.gba", 0x2cfb1c, 0x1b0
	.globl gUnknown_82CFCCC
gUnknown_82CFCCC: @ 0x082CFCCC
	.incbin "baserom.gba", 0x2cfccc, 0x20
	.globl gUnknown_82CFCEC
gUnknown_82CFCEC: @ 0x082CFCEC
	.incbin "baserom.gba", 0x2cfcec, 0x950
	.globl gUnknown_82D063C
gUnknown_82D063C: @ 0x082D063C
	.incbin "baserom.gba", 0x2d063c, 0x3b8
	.globl gUnknown_82D09F4
gUnknown_82D09F4: @ 0x082D09F4
	.incbin "baserom.gba", 0x2d09f4, 0x20
	.globl gUnknown_82D0A14
gUnknown_82D0A14: @ 0x082D0A14
	.incbin "baserom.gba", 0x2d0a14, 0xab0
	.globl gUnknown_82D14C4
gUnknown_82D14C4: @ 0x082D14C4
	.incbin "baserom.gba", 0x2d14c4, 0x52c
	.globl gUnknown_82D19F0
gUnknown_82D19F0: @ 0x082D19F0
	.incbin "baserom.gba", 0x2d19f0, 0x10
	.globl gUnknown_82D1A00
gUnknown_82D1A00: @ 0x082D1A00
	.incbin "baserom.gba", 0x2d1a00, 0x18
	.globl gUnknown_82D1A18
gUnknown_82D1A18: @ 0x082D1A18
	.incbin "baserom.gba", 0x2d1a18, 0x50
	.globl gUnknown_82D1A68
gUnknown_82D1A68: @ 0x082D1A68
	.incbin "baserom.gba", 0x2d1a68, 0x3
	.globl gUnknown_82D1A6B
gUnknown_82D1A6B: @ 0x082D1A6B
	.incbin "baserom.gba", 0x2d1a6b, 0xd
	.globl gUnknown_82D1A78
gUnknown_82D1A78: @ 0x082D1A78
	.incbin "baserom.gba", 0x2d1a78, 0x8
	.globl gUnknown_82D1A80
gUnknown_82D1A80: @ 0x082D1A80
	.incbin "baserom.gba", 0x2d1a80, 0x40
	.globl gUnknown_82D1AC0
gUnknown_82D1AC0: @ 0x082D1AC0
	.incbin "baserom.gba", 0x2d1ac0, 0x2c
	.globl gUnknown_82D1AEC
gUnknown_82D1AEC: @ 0x082D1AEC
	.incbin "baserom.gba", 0x2d1aec, 0x10
	.globl gUnknown_82D1AFC
gUnknown_82D1AFC: @ 0x082D1AFC
	.incbin "baserom.gba", 0x2d1afc, 0x8
	.globl gUnknown_82D1B04
gUnknown_82D1B04: @ 0x082D1B04
	.incbin "baserom.gba", 0x2d1b04, 0x450
	.globl gUnknown_82D1F54
gUnknown_82D1F54: @ 0x082D1F54
	.incbin "baserom.gba", 0x2d1f54, 0x10
	.globl gUnknown_82D1F64
gUnknown_82D1F64: @ 0x082D1F64
	.incbin "baserom.gba", 0x2d1f64, 0x58
	.globl gUnknown_82D1FBC
gUnknown_82D1FBC: @ 0x082D1FBC
	.incbin "baserom.gba", 0x2d1fbc, 0x18
	.globl gUnknown_82D1FD4
gUnknown_82D1FD4: @ 0x082D1FD4
	.incbin "baserom.gba", 0x2d1fd4, 0x484
	.globl gUnknown_82D2458
gUnknown_82D2458: @ 0x082D2458
	.incbin "baserom.gba", 0x2d2458, 0x8
	.globl gUnknown_82D2460
gUnknown_82D2460: @ 0x082D2460
	.incbin "baserom.gba", 0x2d2460, 0xbc
	.globl gUnknown_82D251C
gUnknown_82D251C: @ 0x082D251C
	.incbin "baserom.gba", 0x2d251c, 0x18
	.globl gUnknown_82D2534
gUnknown_82D2534: @ 0x082D2534
	.incbin "baserom.gba", 0x2d2534, 0x18
	.globl gUnknown_82D254C
gUnknown_82D254C: @ 0x082D254C
	.incbin "baserom.gba", 0x2d254c, 0xc
	.globl gUnknown_82D2558
gUnknown_82D2558: @ 0x082D2558
	.incbin "baserom.gba", 0x2d2558, 0x30
	.globl gUnknown_82D2588
gUnknown_82D2588: @ 0x082D2588
	.incbin "baserom.gba", 0x2d2588, 0x40
	.globl gUnknown_82D25C8
gUnknown_82D25C8: @ 0x082D25C8
	.incbin "baserom.gba", 0x2d25c8, 0x1b4
	.globl gUnknown_82D277C
gUnknown_82D277C: @ 0x082D277C
	.incbin "baserom.gba", 0x2d277c, 0x12a
	.globl gUnknown_82D28A6
gUnknown_82D28A6: @ 0x082D28A6
	.incbin "baserom.gba", 0x2d28a6, 0x2
	.globl gUnknown_82D28A8
gUnknown_82D28A8: @ 0x082D28A8
	.incbin "baserom.gba", 0x2d28a8, 0xe
	.globl gUnknown_82D28B6
gUnknown_82D28B6: @ 0x082D28B6
	.incbin "baserom.gba", 0x2d28b6, 0x12
	.globl gUnknown_82D28C8
gUnknown_82D28C8: @ 0x082D28C8
	.incbin "baserom.gba", 0x2d28c8, 0x10
	.globl gUnknown_82D28D8
gUnknown_82D28D8: @ 0x082D28D8
	.incbin "baserom.gba", 0x2d28d8, 0x28
	.globl gUnknown_82D2900
gUnknown_82D2900: @ 0x082D2900
	.incbin "baserom.gba", 0x2d2900, 0x10
	.globl gUnknown_82D2910
gUnknown_82D2910: @ 0x082D2910
	.incbin "baserom.gba", 0x2d2910, 0x8
	.globl gUnknown_82D2918
gUnknown_82D2918: @ 0x082D2918
	.incbin "baserom.gba", 0x2d2918, 0x18
	.globl gUnknown_82D2930
gUnknown_82D2930: @ 0x082D2930
	.incbin "baserom.gba", 0x2d2930, 0x20
	.globl gUnknown_82D2950
gUnknown_82D2950: @ 0x082D2950
	.incbin "baserom.gba", 0x2d2950, 0x20
	.globl gUnknown_82D2970
gUnknown_82D2970: @ 0x082D2970
	.incbin "baserom.gba", 0x2d2970, 0x3
	.globl gUnknown_82D2973
gUnknown_82D2973: @ 0x082D2973
	.incbin "baserom.gba", 0x2d2973, 0x5
	.globl gUnknown_82D2978
gUnknown_82D2978: @ 0x082D2978
	.incbin "baserom.gba", 0x2d2978, 0x8
	.globl gUnknown_82D2980
gUnknown_82D2980: @ 0x082D2980
	.incbin "baserom.gba", 0x2d2980, 0x4
	.globl gUnknown_82D2984
gUnknown_82D2984: @ 0x082D2984
	.incbin "baserom.gba", 0x2d2984, 0x20
	.globl gUnknown_82D29A4
gUnknown_82D29A4: @ 0x082D29A4
	.incbin "baserom.gba", 0x2d29a4, 0x4
	.globl gUnknown_82D29A8
gUnknown_82D29A8: @ 0x082D29A8
	.incbin "baserom.gba", 0x2d29a8, 0x10
	.globl gUnknown_82D29B8
gUnknown_82D29B8: @ 0x082D29B8
	.incbin "baserom.gba", 0x2d29b8, 0x50
	.globl gUnknown_82D2A08
gUnknown_82D2A08: @ 0x082D2A08
	.incbin "baserom.gba", 0x2d2a08, 0x50
	.globl gUnknown_82D2A58
gUnknown_82D2A58: @ 0x082D2A58
	.incbin "baserom.gba", 0x2d2a58, 0x450
	.globl gUnknown_82D2EA8
gUnknown_82D2EA8: @ 0x082D2EA8
	.incbin "baserom.gba", 0x2d2ea8, 0x7c
	.globl gUnknown_82D2F24
gUnknown_82D2F24: @ 0x082D2F24
	.incbin "baserom.gba", 0x2d2f24, 0x2c
	.globl gUnknown_82D2F50
gUnknown_82D2F50: @ 0x082D2F50
	.incbin "baserom.gba", 0x2d2f50, 0x4c
	.globl gUnknown_82D2F9C
gUnknown_82D2F9C: @ 0x082D2F9C
	.incbin "baserom.gba", 0x2d2f9c, 0x162c
	.globl gUnknown_82D45C8
gUnknown_82D45C8: @ 0x082D45C8
	.incbin "baserom.gba", 0x2d45c8, 0x6e0
	.globl gUnknown_82D4CA8
gUnknown_82D4CA8: @ 0x082D4CA8
	.incbin "baserom.gba", 0x2d4ca8, 0xdc0
	.globl gUnknown_82D5A68
gUnknown_82D5A68: @ 0x082D5A68
	.incbin "baserom.gba", 0x2d5a68, 0x6e0

	.include "data/pokemon/mon_back_pic_table.inc"

	.include "data/pokemon/mon_palette_tables.inc"

@ gMonShinyPaletteTableの0xDC0以降
	.incbin "baserom.gba", 0x2d8a88, 0x174
	.globl gUnknown_82D8BFC
gUnknown_82D8BFC: @ 0x082D8BFC
	.incbin "baserom.gba", 0x2d8bfc, 0x174
	.globl gUnknown_82D8D70
gUnknown_82D8D70: @ 0x082D8D70
	.incbin "baserom.gba", 0x2d8d70, 0x174
	.globl gUnknown_82D8EE4
gUnknown_82D8EE4: @ 0x082D8EE4
	.incbin "baserom.gba", 0x2d8ee4, 0x2e8
	.globl gUnknown_82D91CC
gUnknown_82D91CC: @ 0x082D91CC
	.incbin "baserom.gba", 0x2d91cc, 0x3d0
	.globl gUnknown_82D959C
gUnknown_82D959C: @ 0x082D959C
	.incbin "baserom.gba", 0x2d959c, 0x20
	.globl gUnknown_82D95BC
gUnknown_82D95BC: @ 0x082D95BC
	.incbin "baserom.gba", 0x2d95bc, 0x20
	.globl gUnknown_82D95DC
gUnknown_82D95DC: @ 0x082D95DC
	.incbin "baserom.gba", 0x2d95dc, 0x40
	.globl gUnknown_82D961C
gUnknown_82D961C: @ 0x082D961C
	.incbin "baserom.gba", 0x2d961c, 0x40
	.globl gUnknown_82D965C
gUnknown_82D965C: @ 0x082D965C
	.incbin "baserom.gba", 0x2d965c, 0x3ce0
	.globl gUnknown_82DD33C
gUnknown_82DD33C: @ 0x082DD33C
	.incbin "baserom.gba", 0x2dd33c, 0x6e0

	.include "data/pokemon/mon_front_pic_table.inc"
	
	.globl gUnknown_82DE7DC
gUnknown_82DE7DC: @ 0x082DE7DC
	.incbin "baserom.gba", 0x2de7dc, 0x4d88
