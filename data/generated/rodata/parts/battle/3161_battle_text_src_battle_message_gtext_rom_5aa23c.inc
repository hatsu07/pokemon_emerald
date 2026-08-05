	@ src/battle_message.c:340 battle_message_line_340
	.globl gText_Rom_5AA23C
gText_Rom_5AA23C: @ 0x085AA23C
	.string "{B_ATK_NAME_WITH_PREFIX}の じょうたいいじょうが\nなおった!$"
	.if (. - gText_Rom_5AA23C) > 0x15
	.error "gText_Rom_5AA23C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA23C) < 0x15
	.space 0x15 - (. - gText_Rom_5AA23C)
	.endif
