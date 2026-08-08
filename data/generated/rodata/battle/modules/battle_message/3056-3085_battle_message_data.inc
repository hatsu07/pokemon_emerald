	.globl gText_Rom_5A9C3F
	.set gText_Rom_5A9C3F, gText_Rom_5A9C33 + 0xc
	@ Replaced baserom.gba range: offset=0x5A9C45, size=0x17
	.byte 0xFD, 0x0F, 0x1A, 0xFE, 0x01, 0x15, 0x2D, 0x1E, 0x50, 0x13, 0x00, 0x11, 0x11, 0x35, 0x03, 0x16
	.byte 0x00, 0x23, 0x39, 0x50, 0x10, 0xAB, 0xFF

	@ src/battle_message.c:472 battle_message_line_472
	.globl gText_Rom_5A9C5C
gText_Rom_5A9C5C: @ 0x085A9C5C
	.string "{B_ATK_NAME_WITH_PREFIX}は\nすいちゅうに みをひそめた!$"
	.if (. - gText_Rom_5A9C5C) > 0x13
	.error "gText_Rom_5A9C5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9C5C) < 0x13
	.space 0x13 - (. - gText_Rom_5A9C5C)
	.endif

	@ src/battle_message.c:473 battle_message_line_473
	.globl gText_Rom_5A9C6F
gText_Rom_5A9C6F: @ 0x085A9C6F
	.string "{B_ATK_NAME_WITH_PREFIX}は\nとびはねた!$"
	.if (. - gText_Rom_5A9C6F) > 0xb
	.error "gText_Rom_5A9C6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9C6F) < 0xb
	.space 0xb - (. - gText_Rom_5A9C6F)
	.endif
	@ Replaced baserom.gba range: offset=0x5A9C7A, size=0x5B
	.byte 0xFD, 0x10, 0x1A, 0x00, 0xFD, 0x0F, 0x16, 0xFE, 0x0C, 0x22, 0x12, 0x09, 0x27, 0x2A, 0x10, 0xAB
	.byte 0xFF, 0xFD, 0x10, 0x1A, 0x00, 0x03, 0x3E, 0x19, 0x00, 0x15, 0x06, 0x16, 0xFE, 0x14, 0x3D, 0x0A
	.byte 0x22, 0x27, 0x2A, 0x10, 0xAB, 0xFF, 0xFD, 0x10, 0x1A, 0x00, 0x0D, 0x15, 0x3D, 0x3B, 0x08, 0x16
	.byte 0xFE, 0x14, 0x27, 0x2C, 0x2A, 0x10, 0xAB, 0xFF, 0xFD, 0x10, 0x1A, 0x00, 0xFD, 0x0F, 0x16, 0xFE
	.byte 0x1F, 0x07, 0x12, 0x06, 0x2A, 0x10, 0xAB, 0xFF, 0xFD, 0x10, 0x1A, 0x00, 0xFD, 0x0F, 0x19, 0xFE
	.byte 0x06, 0x27, 0x16, 0x00, 0x1A, 0x0B, 0x1F, 0x2A, 0x10, 0xAB, 0xFF

	@ src/battle_message.c:268 battle_message_line_268
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5A9CD5
gText_Rom_5A9CD5: @ 0x085A9CD5
	.string "{B_ATK_NAME_WITH_PREFIX}は {B_BUFF1}の\nダメージを うけている$"
	.if (. - gText_Rom_5A9CD5) != 0x14
	.error "gText_Rom_5A9CD5 must retain its original byte length"
	.endif
	.globl gText_Rom_5A9CE5
	.set gText_Rom_5A9CE5, gText_Rom_5A9CD5 + 0x10

	@ src/battle_message.c:269 battle_message_line_269 (+1 aliases)
	.globl gText_Rom_5A9CE9
gText_Rom_5A9CE9: @ 0x085A9CE9
	.string "{B_ATK_NAME_WITH_PREFIX}は\n{B_BUFF1}から かいほうされた！$"
	.if (. - gText_Rom_5A9CE9) > 0x12
	.error "gText_Rom_5A9CE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9CE9) < 0x12
	.space 0x12 - (. - gText_Rom_5A9CE9)
	.endif

	@ src/battle_message.c:270 battle_message_line_270
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5A9CFB
gText_Rom_5A9CFB: @ 0x085A9CFB
	.string "いきおい あまって\n{B_ATK_NAME_WITH_PREFIX}は じめんに ぶつかった!$"
	.if (. - gText_Rom_5A9CFB) != 0x1a
	.error "gText_Rom_5A9CFB must retain its original byte length"
	.endif
	.globl gText_Rom_5A9D10
	.set gText_Rom_5A9D10, gText_Rom_5A9CFB + 0x15
	.globl gUnknown_85A9D15
gUnknown_85A9D15: @ 0x085A9D15
	@ Replaced baserom.gba range: offset=0x5A9D15, size=0x11
	.byte 0xFD, 0x2A, 0xFE, 0x0C, 0x2B, 0x02, 0x07, 0x28, 0x16, 0x00, 0x12, 0x12, 0x1F, 0x2A, 0x10, 0xAB
	.byte 0xFF

	@ src/battle_message.c:272 battle_message_line_272
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5A9D26
gText_Rom_5A9D26: @ 0x085A9D26
	.string "{B_SCR_NAME_WITH_PREFIX}は しろいきりに\nまもられている$"
	.if (. - gText_Rom_5A9D26) != 0x13
	.error "gText_Rom_5A9D26 must retain its original byte length"
	.endif
	.globl gText_Rom_5A9D35
	.set gText_Rom_5A9D35, gText_Rom_5A9D26 + 0xf
	.globl gUnknown_85A9D39
gUnknown_85A9D39: @ 0x085A9D39
	@ Replaced baserom.gba range: offset=0x5A9D39, size=0xD
	.byte 0xFD, 0x0F, 0x1A, 0xFE, 0x1A, 0x28, 0x07, 0x50, 0x13, 0x02, 0x29, 0xAB, 0xFF

	@ src/battle_message.c:274 battle_message_line_274
	.globl gText_Rom_5A9D46
gText_Rom_5A9D46: @ 0x085A9D46
	.string "{B_ATK_NAME_WITH_PREFIX}は こうげきの\nはんどうを うけた!$"
	.if (. - gText_Rom_5A9D46) > 0x15
	.error "gText_Rom_5A9D46 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9D46) < 0x15
	.space 0x15 - (. - gText_Rom_5A9D46)
	.endif

	@ src/battle_message.c:275 battle_message_line_275
	.globl gText_Rom_5A9D5B
gText_Rom_5A9D5B: @ 0x085A9D5B
	.string "{B_ATK_NAME_WITH_PREFIX}は\nまもりの たいせいに はいった！$"
	.if (. - gText_Rom_5A9D5B) > 0x15
	.error "gText_Rom_5A9D5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9D5B) < 0x15
	.space 0x15 - (. - gText_Rom_5A9D5B)
	.endif

	@ src/battle_message.c:276 battle_message_line_276
	.globl gText_Rom_5A9D70
gText_Rom_5A9D70: @ 0x085A9D70
	.string "すなあらしが {B_ATK_NAME_WITH_PREFIX}を\nおそう!$"
	.if (. - gText_Rom_5A9D70) > 0x10
	.error "gText_Rom_5A9D70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9D70) < 0x10
	.space 0x10 - (. - gText_Rom_5A9D70)
	.endif

	@ src/battle_message.c:277 battle_message_line_277
	.globl gText_Rom_5A9D80
gText_Rom_5A9D80: @ 0x085A9D80
	.string "あられが {B_ATK_NAME_WITH_PREFIX}を\nおそう!$"
	.if (. - gText_Rom_5A9D80) > 0xe
	.error "gText_Rom_5A9D80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9D80) < 0xe
	.space 0xe - (. - gText_Rom_5A9D80)
	.endif
	@ Replaced baserom.gba range: offset=0x5A9D8E, size=0x11
	.byte 0xFD, 0x28, 0x00, 0xFD, 0x00, 0x19, 0xFE, 0x0A, 0x03, 0x06, 0x37, 0x00, 0x07, 0x2A, 0x10, 0xAB
	.byte 0xFF

	@ src/battle_message.c:278 battle_message_line_278
	.globl gText_Rom_5A9D9F
gText_Rom_5A9D9F: @ 0x085A9D9F
	.string "{B_DEF_NAME_WITH_PREFIX}に\nたねを うえつけた！$"
	.if (. - gText_Rom_5A9D9F) > 0xf
	.error "gText_Rom_5A9D9F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9D9F) < 0xf
	.space 0xf - (. - gText_Rom_5A9D9F)
	.endif

	@ src/battle_message.c:279 battle_message_line_279
	.globl gText_Rom_5A9DAE
gText_Rom_5A9DAE: @ 0x085A9DAE
	.string "{B_DEF_NAME_WITH_PREFIX}は\nこうげきを かわした!$"
	.if (. - gText_Rom_5A9DAE) > 0x10
	.error "gText_Rom_5A9DAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9DAE) < 0x10
	.space 0x10 - (. - gText_Rom_5A9DAE)
	.endif

	@ src/battle_message.c:281 battle_message_line_281
	.globl gText_Rom_5A9DBE
gText_Rom_5A9DBE: @ 0x085A9DBE
	.string "やどりぎが {B_ATK_NAME_WITH_PREFIX}の\nたいりょくを うばう!$"
	.if (. - gText_Rom_5A9DBE) > 0x16
	.error "gText_Rom_5A9DBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9DBE) < 0x16
	.space 0x16 - (. - gText_Rom_5A9DBE)
	.endif
	@ Replaced baserom.gba range: offset=0x5A9DD4, size=0xC
	.byte 0xFD, 0x0F, 0x1A, 0xFE, 0x39, 0x03, 0x39, 0x03, 0x00, 0x18, 0x21, 0x50

