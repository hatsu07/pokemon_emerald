	@ src/battle_message.c:249 battle_message_line_249
	.globl gText_Rom_5A9AF6
gText_Rom_5A9AF6: @ 0x085A9AF6
	.string "{B_DEF_NAME_WITH_PREFIX}は たいりょくを\nかいふくした!$"
	.if (. - gText_Rom_5A9AF6) > 0x13
	.error "gText_Rom_5A9AF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9AF6) < 0x13
	.space 0x13 - (. - gText_Rom_5A9AF6)
	.endif
