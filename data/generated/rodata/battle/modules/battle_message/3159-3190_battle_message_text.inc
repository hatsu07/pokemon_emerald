	@ src/battle_message.c:339 battle_message_line_339
	.globl gText_Rom_5AA22A
gText_Rom_5AA22A: @ 0x085AA22A
	.string "しぜんのちからは\n{B_CURRENT_MOVE}に なった!$"
	.if (. - gText_Rom_5AA22A) > 0x12
	.error "gText_Rom_5AA22A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA22A) < 0x12
	.space 0x12 - (. - gText_Rom_5AA22A)
	.endif

	@ src/battle_message.c:340 battle_message_line_340
	.globl gText_Rom_5AA23C
gText_Rom_5AA23C: @ 0x085AA23C
	.string "{B_ATK_NAME_WITH_PREFIX}の じょうたいいじょうが\nなおった!$"
	.if (. - gText_Rom_5AA23C) > 0x15
	.error "gText_Rom_5AA23C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA23C) < 0x15
	.space 0x15 - (. - gText_Rom_5AA23C)
	.endif

	@ src/battle_message.c:342 battle_message_line_342
	.globl gText_Rom_5AA251
gText_Rom_5AA251: @ 0x085AA251
	.string "{B_DEF_NAME_WITH_PREFIX}は\nいちゃもんを つけられた!$"
	.if (. - gText_Rom_5AA251) > 0x12
	.error "gText_Rom_5AA251 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA251) < 0x12
	.space 0x12 - (. - gText_Rom_5AA251)
	.endif
	@ analyzed canonical ROM range 0x085AA263-0x085AA279
sAnalyzedData_085AA263: @ 0x085AA263
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x0F, 0x1A, 0xFE, 0x0C, 0x35, 0x03, 0x11, 0x35, 0x03, 0x28, 0x36, 0x08, 0x2D, 0x00, 0x10
	.byte 0x06, 0x22, 0x13, 0x02, 0x29, 0xAB, 0xFF
	.globl gText_Rom_5AA27A
gText_Rom_5AA27A: @ 0x085AA27A
	.string "{B_DEF_NAME_WITH_PREFIX}は \nちょうはつに のってしまった!$"
	.if (. - gText_Rom_5AA27A) > 0x15
	.error "gText_Rom_5AA27A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA27A) < 0x15
	.space 0x15 - (. - gText_Rom_5AA27A)
	.endif
	@ analyzed canonical ROM range 0x085AA28F-0x085AA2AA
sAnalyzedData_085AA28F: @ 0x085AA28F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x0F, 0x1A, 0x00, 0xFD, 0x10, 0x2D, 0xFE, 0x13, 0x41, 0x0D, 0x09, 0x00, 0x0D, 0x29, 0x00
	.byte 0x10, 0x02, 0x0E, 0x02, 0x16, 0x00, 0x1A, 0x02, 0x50, 0x10, 0xAB, 0xFF
	.globl gText_Rom_5AA2AB
gText_Rom_5AA2AB: @ 0x085AA2AB
	.string "{B_ATK_NAME_WITH_PREFIX}は おたがいの\nどうぐを いれかえた!$"
	.if (. - gText_Rom_5AA2AB) > 0x16
	.error "gText_Rom_5AA2AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA2AB) < 0x16
	.space 0x16 - (. - gText_Rom_5AA2AB)
	.endif
	@ analyzed canonical ROM range 0x085AA2C1-0x085AA31C
sAnalyzedData_085AA2C1: @ 0x085AA2C1
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x0F, 0x1A, 0x00, 0xFD, 0x00, 0x2D, 0xFE, 0x13, 0x16, 0x00, 0x02, 0x2A, 0x10, 0xAB, 0xFF
	.byte 0xFD, 0x10, 0x1A, 0x00, 0xFD, 0x01, 0x2D, 0xFE, 0x13, 0x16, 0x00, 0x02, 0x2A, 0x10, 0xAB, 0xFF
	.byte 0xFD, 0x0F, 0x1A, 0x00, 0xFD, 0x00, 0x2D, 0xFE, 0x13, 0x16, 0x00, 0x02, 0x2A, 0x10, 0xAB, 0xFB
	.byte 0xFD, 0x10, 0x1A, 0x00, 0xFD, 0x01, 0x2D, 0xFE, 0x13, 0x16, 0x00, 0x02, 0x2A, 0x10, 0xAB, 0xFF
	.byte 0xFD, 0x0F, 0x1A, 0x00, 0xFD, 0x10, 0x19, 0xFE, 0xFD, 0x19, 0x2D, 0x00, 0x5A, 0x9C, 0xAE, 0x0C
	.byte 0x10, 0xAB, 0xFF, 0xFD, 0x0F, 0x1A, 0xFE, 0x18, 0x37, 0x02, 0x3B, 0x14
	.globl gText_Rom_5AA31D
gText_Rom_5AA31D: @ 0x085AA31D
	.string "を した!$"
	.if (. - gText_Rom_5AA31D) > 0x6
	.error "gText_Rom_5AA31D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA31D) < 0x6
	.space 0x6 - (. - gText_Rom_5AA31D)
	.endif

	@ src/battle_message.c:350 battle_message_line_350
	.globl gText_Rom_5AA323
gText_Rom_5AA323: @ 0x085AA323
	.string "{B_BUFF1}の\nねがいごとが かなった!$"
	.if (. - gText_Rom_5AA323) > 0x11
	.error "gText_Rom_5AA323 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA323) < 0x11
	.space 0x11 - (. - gText_Rom_5AA323)
	.endif

	@ src/battle_message.c:351 battle_message_line_351
	.globl gText_Rom_5AA334
gText_Rom_5AA334: @ 0x085AA334
	.string "{B_ATK_NAME_WITH_PREFIX}は ねを はった!$"
	.if (. - gText_Rom_5AA334) > 0xc
	.error "gText_Rom_5AA334 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA334) < 0xc
	.space 0xc - (. - gText_Rom_5AA334)
	.endif

	@ src/battle_message.c:352 battle_message_line_352
	.globl gText_Rom_5AA340
gText_Rom_5AA340: @ 0x085AA340
	.string "{B_ATK_NAME_WITH_PREFIX}は ねから\nようぶんを すいとった!$"
	.if (. - gText_Rom_5AA340) > 0x15
	.error "gText_Rom_5AA340 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA340) < 0x15
	.space 0x15 - (. - gText_Rom_5AA340)
	.endif

	@ src/battle_message.c:353 battle_message_line_353
	.globl gText_Rom_5AA355
gText_Rom_5AA355: @ 0x085AA355
	.string "{B_DEF_NAME_WITH_PREFIX}は ねを はって\nうごかない!$"
	.if (. - gText_Rom_5AA355) > 0x12
	.error "gText_Rom_5AA355 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA355) < 0x12
	.space 0x12 - (. - gText_Rom_5AA355)
	.endif

	@ src/battle_message.c:354 battle_message_line_354
	.globl gText_Rom_5AA367
gText_Rom_5AA367: @ 0x085AA367
	.string "{B_ATK_NAME_WITH_PREFIX}は {B_DEF_NAME_WITH_PREFIX}の\nねむけを さそった!$"
	.if (. - gText_Rom_5AA367) > 0x13
	.error "gText_Rom_5AA367 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA367) < 0x13
	.space 0x13 - (. - gText_Rom_5AA367)
	.endif
	@ analyzed canonical ROM range 0x085AA37A-0x085AA38E
sAnalyzedData_085AA37A: @ 0x085AA37A
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x0F, 0x1A, 0x00, 0xFD, 0x10, 0x19, 0xFE, 0xFD, 0x16, 0x2D, 0x00, 0x1A, 0x10, 0x07, 0x05
	.byte 0x14, 0x0C, 0x10, 0xAB, 0xFF
	.globl gText_Rom_5AA38F
gText_Rom_5AA38F: @ 0x085AA38F
	.string "{B_ATK_NAME_WITH_PREFIX}は おたがいの\nとくせいを いれかえた!$"
	.if (. - gText_Rom_5AA38F) > 0x17
	.error "gText_Rom_5AA38F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA38F) < 0x17
	.space 0x17 - (. - gText_Rom_5AA38F)
	.endif

	@ src/battle_message.c:357 battle_message_line_357
	.globl gText_Rom_5AA3A6
gText_Rom_5AA3A6: @ 0x085AA3A6
	.string "{B_ATK_NAME_WITH_PREFIX}は あいての\nわざを ふういんした!$"
	.if (. - gText_Rom_5AA3A6) > 0x15
	.error "gText_Rom_5AA3A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA3A6) < 0x15
	.space 0x15 - (. - gText_Rom_5AA3A6)
	.endif

	@ src/battle_message.c:359 battle_message_line_359
	.globl gText_Rom_5AA3BB
gText_Rom_5AA3BB: @ 0x085AA3BB
	.string "{B_ATK_NAME_WITH_PREFIX}は あいてに\nおんねんを かけようと している!$"
	.if (. - gText_Rom_5AA3BB) > 0x1b
	.error "gText_Rom_5AA3BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA3BB) < 0x1b
	.space 0x1b - (. - gText_Rom_5AA3BB)
	.endif

	@ src/battle_message.c:360 battle_message_line_360
	.globl gText_Rom_5AA3D6
gText_Rom_5AA3D6: @ 0x085AA3D6
	.string "{B_ATK_NAME_WITH_PREFIX}の {B_BUFF1}は\nおんねんで わざポイントが 0に なった!$"
	.if (. - gText_Rom_5AA3D6) > 0x1e
	.error "gText_Rom_5AA3D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA3D6) < 0x1e
	.space 0x1e - (. - gText_Rom_5AA3D6)
	.endif

	@ src/battle_message.c:361 battle_message_line_361
	.globl gText_Rom_5AA3F4
gText_Rom_5AA3F4: @ 0x085AA3F4
	.string "{B_ATK_NAME_WITH_PREFIX}は\n{B_CURRENT_MOVE}に つつまれた!$"
	.if (. - gText_Rom_5AA3F4) > 0xf
	.error "gText_Rom_5AA3F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA3F4) < 0xf
	.space 0xf - (. - gText_Rom_5AA3F4)
	.endif
	@ analyzed canonical ROM range 0x085AA403-0x085AA447
sAnalyzedData_085AA403: @ 0x085AA403
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x0F, 0x19, 0x00, 0xFD, 0x14, 0x1A, 0xFE, 0x6F, 0x8D, 0xA0, 0x58, 0x5A, 0xAE, 0x64, 0x16
	.byte 0x00, 0x1A, 0x18, 0x06, 0x04, 0x0B, 0x2A, 0x10, 0xAB, 0xFF, 0xFD, 0x0F, 0x1A, 0xFE, 0x01, 0x02
	.byte 0x13, 0x19, 0x00, 0x44, 0x06, 0x10, 0x2D, 0x00, 0x03, 0x06, 0x37, 0x50, 0x13, 0x02, 0x29, 0xAB
	.byte 0xFF, 0xFD, 0x10, 0x1A, 0x00, 0xFD, 0x13, 0x19, 0xFE, 0x2C, 0x3C, 0x2D, 0x00, 0x26, 0x0A, 0x45
	.byte 0x28, 0x0C, 0x10, 0xAB, 0xFF
