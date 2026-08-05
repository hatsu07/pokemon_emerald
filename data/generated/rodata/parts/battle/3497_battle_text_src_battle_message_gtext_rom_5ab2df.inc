	@ src/battle_message.c:453 battle_message_line_453
	.globl gText_Rom_5AB2DF
gText_Rom_5AB2DF: @ 0x085AB2DF
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nねむりから さめた!$"
	.if (. - gText_Rom_5AB2DF) > 0x13
	.error "gText_Rom_5AB2DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB2DF) < 0x13
	.space 0x13 - (. - gText_Rom_5AB2DF)
	.endif
