	@ src/battle_message.c:200 battle_message_line_200
	.globl gText_Rom_5A96C3
gText_Rom_5A96C3: @ 0x085A96C3
	.string "{B_BUFF1}は {B_BUFF2}の\nつかいかたを きれいに わすれた!\p$"
	.if (. - gText_Rom_5A96C3) > 0x1b
	.error "gText_Rom_5A96C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A96C3) < 0x1b
	.space 0x1b - (. - gText_Rom_5A96C3)
	.endif
	@ Replaced baserom.gba range: offset=0x5A96DE, size=0x15
	.byte 0xFC, 0x08, 0x20, 0x0F, 0x2A, 0x44, 0x1A, 0xB0, 0xB0, 0x00, 0xFD, 0x01, 0x2D, 0xFE, 0x05, 0x4A
	.byte 0x04, 0x29, 0x19, 0x2D, 0x00
