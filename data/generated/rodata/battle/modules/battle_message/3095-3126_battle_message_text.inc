	@ src/battle_message.c:295 battle_message_line_295
	.globl gText_Rom_5A9EE9
gText_Rom_5A9EE9: @ 0x085A9EE9
	.string "{B_BUFF1}円\nひろった!\p$"
	.if (. - gText_Rom_5A9EE9) > 0xb
	.error "gText_Rom_5A9EE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9EE9) < 0xb
	.space 0xb - (. - gText_Rom_5A9EE9)
	.endif

	@ src/battle_message.c:296 battle_message_line_296
	.globl gText_Rom_5A9EF4
gText_Rom_5A9EF4: @ 0x085A9EF4
	.string "{B_DEF_NAME_WITH_PREFIX}には\nぜんぜんきいてない!$"
	.if (. - gText_Rom_5A9EF4) > 0x10
	.error "gText_Rom_5A9EF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9EF4) < 0x10
	.space 0x10 - (. - gText_Rom_5A9EF4)
	.endif

	@ src/battle_message.c:297 battle_message_line_297
	.globl gText_Rom_5A9F04
gText_Rom_5A9F04: @ 0x085A9F04
	.string "{B_ATK_NAME_WITH_PREFIX}は\n{B_BUFF1}に へんしんした!$"
	.if (. - gText_Rom_5A9F04) > 0x10
	.error "gText_Rom_5A9F04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9F04) < 0x10
	.space 0x10 - (. - gText_Rom_5A9F04)
	.endif

	@ src/battle_message.c:298 battle_message_line_298
	.globl gText_Rom_5A9F14
gText_Rom_5A9F14: @ 0x085A9F14
	.string "{B_ATK_NAME_WITH_PREFIX}の\nぶんしんが あらわれた$"
	.if (. - gText_Rom_5A9F14) > 0x10
	.error "gText_Rom_5A9F14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9F14) < 0x10
	.space 0x10 - (. - gText_Rom_5A9F14)
	.endif

	@ src/battle_message.c:299 battle_message_line_299
	.globl gText_Rom_5A9F24
gText_Rom_5A9F24: @ 0x085A9F24
	.string "しかし {B_ATK_NAME_WITH_PREFIX}の\nみがわりは すでに でていた!$"
	.if (. - gText_Rom_5A9F24) > 0x18
	.error "gText_Rom_5A9F24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9F24) < 0x18
	.space 0x18 - (. - gText_Rom_5A9F24)
	.endif
	@ Replaced baserom.gba range: offset=0x5A9F3C, size=0x30
	.byte 0xFD, 0x10, 0x16, 0x00, 0x06, 0x2C, 0x50, 0x13, 0xFE, 0x48, 0x2E, 0x0C, 0x2E, 0x37, 0x00, 0x0A
	.byte 0x03, 0x3A, 0x07, 0x2D, 0x00, 0x03, 0x09, 0x10, 0xAB, 0xFB, 0xFF, 0xFD, 0x10, 0x19, 0x00, 0x48
	.byte 0x2E, 0x0C, 0x2E, 0x1A, 0xFE, 0x07, 0x04, 0x13, 0x0C, 0x1F, 0x50, 0x10, 0xB0, 0xB0, 0xFB, 0xFF

	@ src/battle_message.c:302 battle_message_line_302
	.globl gText_Rom_5A9F6C
gText_Rom_5A9F6C: @ 0x085A9F6C
	.string "こうげきの はんどうで\n{B_ATK_NAME_WITH_PREFIX}は うごけない!$"
	.if (. - gText_Rom_5A9F6C) > 0x17
	.error "gText_Rom_5A9F6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9F6C) < 0x17
	.space 0x17 - (. - gText_Rom_5A9F6C)
	.endif

	@ src/battle_message.c:303 battle_message_line_303
	.globl gText_Rom_5A9F83
gText_Rom_5A9F83: @ 0x085A9F83
	.string "{B_DEF_NAME_WITH_PREFIX}の いかりの\nボルテージが あがっていく!$"
	.if (. - gText_Rom_5A9F83) > 0x18
	.error "gText_Rom_5A9F83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9F83) < 0x18
	.space 0x18 - (. - gText_Rom_5A9F83)
	.endif

	@ src/battle_message.c:304 battle_message_line_304
	.globl gText_Rom_5A9F9B
gText_Rom_5A9F9B: @ 0x085A9F9B
	.string "{B_DEF_NAME_WITH_PREFIX}の\n{B_BUFF1}を ふうじこめた!$"
	.if (. - gText_Rom_5A9F9B) > 0x10
	.error "gText_Rom_5A9F9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9F9B) < 0x10
	.space 0x10 - (. - gText_Rom_5A9F9B)
	.endif
	@ Replaced baserom.gba range: offset=0x5A9FAB, size=0x10
	.byte 0xFD, 0x0F, 0x19, 0xFE, 0x06, 0x15, 0x0C, 0x46, 0x28, 0x37, 0x00, 0x14, 0x09, 0x10, 0xAB, 0xFF

	@ src/battle_message.c:307 battle_message_line_307
	.globl gText_Rom_5A9FBB
gText_Rom_5A9FBB: @ 0x085A9FBB
	.string "{B_DEF_NAME_WITH_PREFIX}は\nアンコールを うけた!$"
	.if (. - gText_Rom_5A9FBB) > 0x10
	.error "gText_Rom_5A9FBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9FBB) < 0x10
	.space 0x10 - (. - gText_Rom_5A9FBB)
	.endif
	@ Replaced baserom.gba range: offset=0x5A9FCB, size=0x28
	.byte 0xFD, 0x0F, 0x19, 0xFE, 0x51, 0x7E, 0x5A, 0xAE, 0x79, 0x3D, 0x36, 0x03, 0x10, 0x02, 0x37, 0x00
	.byte 0x14, 0x09, 0x10, 0xAB, 0xFF, 0xFD, 0x0F, 0x1A, 0x00, 0xFD, 0x10, 0x16, 0xFE, 0x18, 0x27, 0x02
	.byte 0x2D, 0x00, 0x0B, 0x41, 0x22, 0x10, 0xAB, 0xFF

	@ src/battle_message.c:311 battle_message_line_311
	.globl gText_Rom_5A9FF3
gText_Rom_5A9FF3: @ 0x085A9FF3
	.string "{B_ATK_NAME_WITH_PREFIX}は\n{B_BUFF1}を スケッチした!$"
	.if (. - gText_Rom_5A9FF3) > 0x10
	.error "gText_Rom_5A9FF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9FF3) < 0x10
	.space 0x10 - (. - gText_Rom_5A9FF3)
	.endif

	@ src/battle_message.c:312 battle_message_line_312
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA003
gText_Rom_5AA003: @ 0x085AA003
	.string "{B_ATK_NAME_WITH_PREFIX}は あいてを\nみちづれに しようとしている$"
	.if (. - gText_Rom_5AA003) != 0x18
	.error "gText_Rom_5AA003 must retain its original byte length"
	.endif
	.globl gText_Rom_5AA017
	.set gText_Rom_5AA017, gText_Rom_5AA003 + 0x14
	@ Replaced baserom.gba range: offset=0x5AA01B, size=0x12
	.byte 0xFD, 0x10, 0x1A, 0x00, 0xFD, 0x0F, 0x2D, 0xFE, 0x20, 0x11, 0x43, 0x2A, 0x16, 0x00, 0x0C, 0x10
	.byte 0xAB, 0xFF

	@ src/battle_message.c:314 battle_message_line_314
	.globl gText_Rom_5AA02D
gText_Rom_5AA02D: @ 0x085AA02D
	.string "{B_DEF_NAME_WITH_PREFIX}の\n{B_BUFF1}を {B_BUFF2}けずった!$"
	.if (. - gText_Rom_5AA02D) > 0x10
	.error "gText_Rom_5AA02D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA02D) < 0x10
	.space 0x10 - (. - gText_Rom_5AA02D)
	.endif
	@ Replaced baserom.gba range: offset=0x5AA03D, size=0x15
	.byte 0xFD, 0x0F, 0x1A, 0x00, 0xFD, 0x10, 0x06, 0x27, 0xFE, 0xFD, 0x16, 0x2D, 0x00, 0x03, 0x46, 0x02
	.byte 0x14, 0x50, 0x10, 0xAB, 0xFF

	@ src/battle_message.c:316 battle_message_line_316
	.globl gText_Rom_5AA052
gText_Rom_5AA052: @ 0x085AA052
	.string "{B_DEF_NAME_WITH_PREFIX}は\nもう にげられない!$"
	.if (. - gText_Rom_5AA052) > 0xf
	.error "gText_Rom_5AA052 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA052) < 0xf
	.space 0xf - (. - gText_Rom_5AA052)
	.endif

	@ src/battle_message.c:317 battle_message_line_317
	.globl gText_Rom_5AA061
gText_Rom_5AA061: @ 0x085AA061
	.string "{B_DEF_NAME_WITH_PREFIX}は\nあくむを みはじめた!$"
	.if (. - gText_Rom_5AA061) > 0x10
	.error "gText_Rom_5AA061 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA061) < 0x10
	.space 0x10 - (. - gText_Rom_5AA061)
	.endif

	@ src/battle_message.c:318 battle_message_line_318
	.globl gText_Rom_5AA071
gText_Rom_5AA071: @ 0x085AA071
	.string "{B_ATK_NAME_WITH_PREFIX}は\nあくむに うなされている!$"
	.if (. - gText_Rom_5AA071) > 0x12
	.error "gText_Rom_5AA071 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA071) < 0x12
	.space 0x12 - (. - gText_Rom_5AA071)
	.endif
	@ Replaced baserom.gba range: offset=0x5AA083, size=0x23
	.byte 0xFD, 0x0F, 0x1A, 0x00, 0x3D, 0x48, 0x2E, 0x19, 0x00, 0x10, 0x02, 0x28, 0x36, 0x08, 0x2D, 0xFE
	.byte 0x09, 0x3E, 0x50, 0x13, 0x00, 0xFD, 0x10, 0x16, 0x00, 0x19, 0x2B, 0x02, 0x2D, 0x00, 0x06, 0x09
	.byte 0x10, 0xAB, 0xFF

	@ src/battle_message.c:320 battle_message_line_320
	.globl gText_Rom_5AA0A6
gText_Rom_5AA0A6: @ 0x085AA0A6
	.string "{B_ATK_NAME_WITH_PREFIX}は\nのろわれている!$"
	.if (. - gText_Rom_5AA0A6) > 0xd
	.error "gText_Rom_5AA0A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA0A6) < 0xd
	.space 0xd - (. - gText_Rom_5AA0A6)
	.endif
	@ Replaced baserom.gba range: offset=0x5AA0B3, size=0x16
	.byte 0xFD, 0x29, 0x00, 0x01, 0x0C, 0x23, 0x14, 0x16, 0xFE, 0x1F, 0x07, 0x47, 0x0C, 0x37, 0x00, 0x11
	.byte 0x27, 0x46, 0x50, 0x10, 0xAB, 0xFF
