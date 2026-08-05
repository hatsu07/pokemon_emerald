	@ src/battle_message.c:258 battle_message_line_258
	.globl gText_Rom_5A9BD2
gText_Rom_5A9BD2: @ 0x085A9BD2
	.string "{B_ATK_NAME_WITH_PREFIX}は\nけんこうになって ねむりはじめた!$"
	.if (. - gText_Rom_5A9BD2) > 0x16
	.error "gText_Rom_5A9BD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9BD2) < 0x16
	.space 0x16 - (. - gText_Rom_5A9BD2)
	.endif
