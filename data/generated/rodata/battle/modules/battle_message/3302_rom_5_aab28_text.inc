	@ src/battle_message.c:400 battle_message_line_400
	.globl gText_Rom_5AAB28
gText_Rom_5AAB28: @ 0x085AAB28
	.string "すなあらしが ふきはじめた!$"
	.if (. - gText_Rom_5AAB28) > 0xf
	.error "gText_Rom_5AAB28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB28) < 0xf
	.space 0xf - (. - gText_Rom_5AAB28)
	.endif
