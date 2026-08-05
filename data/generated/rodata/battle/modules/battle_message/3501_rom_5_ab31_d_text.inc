	@ src/battle_message.c:495 battle_message_line_495
	.globl gText_Rom_5AB31D
gText_Rom_5AB31D: @ 0x085AB31D
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nじょうたいいじょうが なおった!$"
	.if (. - gText_Rom_5AB31D) > 0x19
	.error "gText_Rom_5AB31D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB31D) < 0x19
	.space 0x19 - (. - gText_Rom_5AB31D)
	.endif
