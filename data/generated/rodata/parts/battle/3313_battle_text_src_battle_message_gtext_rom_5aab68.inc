	@ src/battle_message.c:405 battle_message_line_405
	.globl gText_Rom_5AAB68
gText_Rom_5AAB68: @ 0x085AAB68
	.string "ひざしが よわくなった!$"
	.if (. - gText_Rom_5AAB68) > 0xd
	.error "gText_Rom_5AAB68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB68) < 0xd
	.space 0xd - (. - gText_Rom_5AAB68)
	.endif
