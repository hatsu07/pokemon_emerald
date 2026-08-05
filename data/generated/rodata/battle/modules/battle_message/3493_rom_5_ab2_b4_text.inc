	@ src/battle_message.c:451 battle_message_line_451
	.globl gText_Rom_5AB2B4
gText_Rom_5AB2B4: @ 0x085AB2B4
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nやけどが なおった!$"
	.if (. - gText_Rom_5AB2B4) > 0x13
	.error "gText_Rom_5AB2B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB2B4) < 0x13
	.space 0x13 - (. - gText_Rom_5AB2B4)
	.endif
