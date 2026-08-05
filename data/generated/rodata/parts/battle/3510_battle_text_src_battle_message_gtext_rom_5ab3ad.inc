	@ src/battle_message.c:461 battle_message_line_461
	.globl gText_Rom_5AB3AD
gText_Rom_5AB3AD: @ 0x085AB3AD
	.string "{B_DEF_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nもちこたえた!$"
	.if (. - gText_Rom_5AB3AD) > 0x10
	.error "gText_Rom_5AB3AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB3AD) < 0x10
	.space 0x10 - (. - gText_Rom_5AB3AD)
	.endif
