	@ src/battle_message.c:275 battle_message_line_275
	.globl gText_Rom_5A9D5B
gText_Rom_5A9D5B: @ 0x085A9D5B
	.string "{B_ATK_NAME_WITH_PREFIX}は\nまもりの たいせいに はいった！$"
	.if (. - gText_Rom_5A9D5B) > 0x15
	.error "gText_Rom_5A9D5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9D5B) < 0x15
	.space 0x15 - (. - gText_Rom_5A9D5B)
	.endif
