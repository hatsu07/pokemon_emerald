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
	@ Replaced baserom.gba range: offset=0x5AA37A, size=0x15
	.byte 0xFD, 0x0F, 0x1A, 0x00, 0xFD, 0x10, 0x19, 0xFE, 0xFD, 0x16, 0x2D, 0x00, 0x1A, 0x10, 0x07, 0x05
	.byte 0x14, 0x0C, 0x10, 0xAB, 0xFF
