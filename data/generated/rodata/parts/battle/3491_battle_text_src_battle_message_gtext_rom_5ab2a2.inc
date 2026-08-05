	@ src/battle_message.c:450 battle_message_line_450
	.globl gText_Rom_5AB2A2
gText_Rom_5AB2A2: @ 0x085AB2A2
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nどくが なおった!$"
	.if (. - gText_Rom_5AB2A2) > 0x12
	.error "gText_Rom_5AB2A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB2A2) < 0x12
	.space 0x12 - (. - gText_Rom_5AB2A2)
	.endif
