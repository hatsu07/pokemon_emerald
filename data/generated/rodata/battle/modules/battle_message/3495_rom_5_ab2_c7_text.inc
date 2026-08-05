	@ src/battle_message.c:452 battle_message_line_452
	.globl gText_Rom_5AB2C7
gText_Rom_5AB2C7: @ 0x085AB2C7
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nこおりじょうたいが なおった!$"
	.if (. - gText_Rom_5AB2C7) > 0x18
	.error "gText_Rom_5AB2C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB2C7) < 0x18
	.space 0x18 - (. - gText_Rom_5AB2C7)
	.endif
