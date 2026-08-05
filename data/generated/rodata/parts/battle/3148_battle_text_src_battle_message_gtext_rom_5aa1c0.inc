	@ src/battle_message.c:334 battle_message_line_334
	.globl gText_Rom_5AA1C0
gText_Rom_5AA1C0: @ 0x085AA1C0
	.string "{B_ATK_NAME_WITH_PREFIX}は みらいに\nこうげきを よちした!$"
	.if (. - gText_Rom_5AA1C0) > 0x15
	.error "gText_Rom_5AA1C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA1C0) < 0x15
	.space 0x15 - (. - gText_Rom_5AA1C0)
	.endif
