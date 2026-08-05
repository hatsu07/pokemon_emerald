	@ src/battle_message.c:423 battle_message_line_423
	.globl gText_Rom_5AB17F
gText_Rom_5AB17F: @ 0x085AB17F
	.string "ああ!\nつかまえたと おもったのに!$"
	.if (. - gText_Rom_5AB17F) > 0x13
	.error "gText_Rom_5AB17F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB17F) < 0x13
	.space 0x13 - (. - gText_Rom_5AB17F)
	.endif
