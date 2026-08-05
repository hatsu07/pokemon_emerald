	@ src/battle_message.c:403 battle_message_line_403
	.globl gText_Rom_5AAB52
gText_Rom_5AAB52: @ 0x085AAB52
	.string "ひざしが つよくなった!$"
	.if (. - gText_Rom_5AAB52) > 0xd
	.error "gText_Rom_5AAB52 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB52) < 0xd
	.space 0xd - (. - gText_Rom_5AAB52)
	.endif
