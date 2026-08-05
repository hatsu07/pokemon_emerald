	@ src/battle_message.c:489 battle_message_line_489
	.globl gText_Rom_5AA1E8
gText_Rom_5AA1E8: @ 0x085AA1E8
	.string "{B_ATK_NAME_WITH_PREFIX}は {B_CURRENT_MOVE}を\nみらいに たくした!$"
	.if (. - gText_Rom_5AA1E8) > 0x13
	.error "gText_Rom_5AA1E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA1E8) < 0x13
	.space 0x13 - (. - gText_Rom_5AA1E8)
	.endif
