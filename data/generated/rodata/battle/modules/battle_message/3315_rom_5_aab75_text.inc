	@ src/battle_message.c:406 battle_message_line_406 (+1 aliases)
	.globl gText_Rom_5AAB75
gText_Rom_5AAB75: @ 0x085AAB75
	.string "あられが ふりはじめた!$"
	.if (. - gText_Rom_5AAB75) > 0xd
	.error "gText_Rom_5AAB75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB75) < 0xd
	.space 0xd - (. - gText_Rom_5AAB75)
	.endif
