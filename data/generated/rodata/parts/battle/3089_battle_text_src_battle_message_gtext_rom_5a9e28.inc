	@ src/battle_message.c:286 battle_message_line_286
	.globl gText_Rom_5A9E28
gText_Rom_5A9E28: @ 0x085A9E28
	.string "{B_ATK_NAME_WITH_PREFIX}は さわいでいる!$"
	.if (. - gText_Rom_5A9E28) > 0xc
	.error "gText_Rom_5A9E28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9E28) < 0xc
	.space 0xc - (. - gText_Rom_5A9E28)
	.endif
