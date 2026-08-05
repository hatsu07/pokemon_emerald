	@ src/battle_message.c:259 battle_message_line_259
	.globl gText_Rom_5A9BE8
gText_Rom_5A9BE8: @ 0x085A9BE8
	.string "{B_ATK_NAME_WITH_PREFIX}の まわりで\nくうきが うずを まく!$"
	.if (. - gText_Rom_5A9BE8) > 0x16
	.error "gText_Rom_5A9BE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9BE8) < 0x16
	.space 0x16 - (. - gText_Rom_5A9BE8)
	.endif
