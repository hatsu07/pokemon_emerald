	@ src/battle_message.c:241 battle_message_line_241
	.globl gText_Rom_5A9A66
gText_Rom_5A9A66: @ 0x085A9A66
	.string "{B_ATK_NAME_WITH_PREFIX}の\nこんらんが とけた!$"
	.if (. - gText_Rom_5A9A66) > 0xf
	.error "gText_Rom_5A9A66 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9A66) < 0xf
	.space 0xf - (. - gText_Rom_5A9A66)
	.endif
