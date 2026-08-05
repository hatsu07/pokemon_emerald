	@ src/battle_message.c:471 battle_message_line_471
	.globl gText_Rom_5AA45A
gText_Rom_5AA45A: @ 0x085AA45A
	.string "ほのおの いりょくが よわまった!$"
	.if (. - gText_Rom_5AA45A) > 0x12
	.error "gText_Rom_5AA45A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA45A) < 0x12
	.space 0x12 - (. - gText_Rom_5AA45A)
	.endif
	@ Replaced baserom.gba range: offset=0x5AA46C, size=0x10
	.byte 0xFD, 0x0F, 0x1A, 0x00, 0xFD, 0x16, 0x2D, 0xFE, 0x1B, 0x2B, 0x50, 0x13, 0x07, 0x10, 0xAB, 0xFF
