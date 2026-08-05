	@ src/battle_message.c:401 battle_message_line_401
	.globl gText_Rom_5AAB37
gText_Rom_5AAB37: @ 0x085AAB37
	.string "すなあらしが ふきあれる$"
	.if (. - gText_Rom_5AAB37) > 0xd
	.error "gText_Rom_5AAB37 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB37) < 0xd
	.space 0xd - (. - gText_Rom_5AAB37)
	.endif
