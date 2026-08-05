	@ src/battle_message.c:402 battle_message_line_402
	.globl gText_Rom_5AAB44
gText_Rom_5AAB44: @ 0x085AAB44
	.string "すなあらしが おさまった!$"
	.if (. - gText_Rom_5AAB44) > 0xe
	.error "gText_Rom_5AAB44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB44) < 0xe
	.space 0xe - (. - gText_Rom_5AAB44)
	.endif
