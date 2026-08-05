	@ src/battle_message.c:390 battle_message_line_390
	.globl gText_Rom_5AAA7D
gText_Rom_5AAA7D: @ 0x085AAA7D
	.string "にげることが できない！\p$"
	.if (. - gText_Rom_5AAA7D) > 0xe
	.error "gText_Rom_5AAA7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAA7D) < 0xe
	.space 0xe - (. - gText_Rom_5AAA7D)
	.endif
