	@ src/battle_message.c:261 battle_message_line_261
	.globl gText_Rom_5A9C11
gText_Rom_5A9C11: @ 0x085A9C11
	.string "{B_ATK_NAME_WITH_PREFIX}は\nくびを ひっこめた!$"
	.if (. - gText_Rom_5A9C11) > 0xf
	.error "gText_Rom_5A9C11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9C11) < 0xf
	.space 0xf - (. - gText_Rom_5A9C11)
	.endif
	@ Replaced baserom.gba range: offset=0x5A9C20, size=0x13
	.byte 0xFD, 0x0F, 0x2D, 0xFE, 0x1A, 0x3A, 0x0C, 0x02, 0x00, 0x1B, 0x06, 0x28, 0x37, 0x00, 0x12, 0x12
	.byte 0x21, 0xAB, 0xFF
