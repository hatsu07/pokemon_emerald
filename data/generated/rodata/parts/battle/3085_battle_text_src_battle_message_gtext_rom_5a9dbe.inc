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

