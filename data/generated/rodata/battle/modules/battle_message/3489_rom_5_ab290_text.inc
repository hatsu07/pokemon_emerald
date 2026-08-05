	@ src/battle_message.c:449 battle_message_line_449
	.globl gText_Rom_5AB290
gText_Rom_5AB290: @ 0x085AB290
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nまひが なおった!$"
	.if (. - gText_Rom_5AB290) > 0x12
	.error "gText_Rom_5AB290 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB290) < 0x12
	.space 0x12 - (. - gText_Rom_5AB290)
	.endif
