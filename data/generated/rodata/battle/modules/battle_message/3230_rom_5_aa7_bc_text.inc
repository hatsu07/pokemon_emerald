	@ src/battle_message.c:469 battle_message_line_469
	.globl gText_Rom_5AA7BC
gText_Rom_5AA7BC: @ 0x085AA7BC
	.string "{B_SCR_NAME_WITH_PREFIX}の すがたが\nへんかした!$"
	.if (. - gText_Rom_5AA7BC) > 0x10
	.error "gText_Rom_5AA7BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA7BC) < 0x10
	.space 0x10 - (. - gText_Rom_5AA7BC)
	.endif
	@ Replaced baserom.gba range: offset=0x5AA7CC, size=0x13
	.byte 0xFD, 0x10, 0x1A, 0x00, 0xFD, 0x19, 0x44, 0xFE, 0x0A, 0x03, 0x3A, 0x07, 0x2D, 0x00, 0x03, 0x09
	.byte 0x10, 0xAB, 0xFF
