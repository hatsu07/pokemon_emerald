	@ src/battle_message.c:351 battle_message_line_351
	.globl gText_Rom_5AA334
gText_Rom_5AA334: @ 0x085AA334
	.string "{B_ATK_NAME_WITH_PREFIX}は ねを はった!$"
	.if (. - gText_Rom_5AA334) > 0xc
	.error "gText_Rom_5AA334 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA334) < 0xc
	.space 0xc - (. - gText_Rom_5AA334)
	.endif
