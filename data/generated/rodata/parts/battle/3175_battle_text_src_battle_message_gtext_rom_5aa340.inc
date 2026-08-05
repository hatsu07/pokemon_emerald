	@ src/battle_message.c:352 battle_message_line_352
	.globl gText_Rom_5AA340
gText_Rom_5AA340: @ 0x085AA340
	.string "{B_ATK_NAME_WITH_PREFIX}は ねから\nようぶんを すいとった!$"
	.if (. - gText_Rom_5AA340) > 0x15
	.error "gText_Rom_5AA340 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA340) < 0x15
	.space 0x15 - (. - gText_Rom_5AA340)
	.endif
