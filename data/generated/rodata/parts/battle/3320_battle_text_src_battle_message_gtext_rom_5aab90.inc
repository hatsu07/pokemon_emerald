	@ src/battle_message.c:408 battle_message_line_408
	.globl gText_Rom_5AAB90
gText_Rom_5AAB90: @ 0x085AAB90
	.string "あられが ふりやんだ!$"
	.if (. - gText_Rom_5AAB90) > 0xc
	.error "gText_Rom_5AAB90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB90) < 0xc
	.space 0xc - (. - gText_Rom_5AAB90)
	.endif
	@ Replaced baserom.gba range: offset=0x5AAB9C, size=0xD
	.byte 0x0C, 0x06, 0x0C, 0x00, 0x15, 0x16, 0x23, 0x00, 0x1A, 0x07, 0x41, 0x0E, 0x15

