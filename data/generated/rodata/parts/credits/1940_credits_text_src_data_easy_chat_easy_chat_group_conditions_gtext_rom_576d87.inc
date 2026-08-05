	@ src/data/easy_chat/easy_chat_group_conditions.h:352 easy_chat_group_conditions_line_352
	.globl gText_Rom_576D87
gText_Rom_576D87: @ 0x08576D87
	.string "ふしぎ$"
	.if (. - gText_Rom_576D87) > 0x4
	.error "gText_Rom_576D87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D87) < 0x4
	.space 0x4 - (. - gText_Rom_576D87)
	.endif
