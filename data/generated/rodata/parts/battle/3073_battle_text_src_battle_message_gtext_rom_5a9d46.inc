	@ src/battle_message.c:274 battle_message_line_274
	.globl gText_Rom_5A9D46
gText_Rom_5A9D46: @ 0x085A9D46
	.string "{B_ATK_NAME_WITH_PREFIX}は こうげきの\nはんどうを うけた!$"
	.if (. - gText_Rom_5A9D46) > 0x15
	.error "gText_Rom_5A9D46 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9D46) < 0x15
	.space 0x15 - (. - gText_Rom_5A9D46)
	.endif
