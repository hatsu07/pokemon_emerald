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
