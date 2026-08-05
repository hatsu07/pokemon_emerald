	@ src/data/easy_chat/easy_chat_group_conditions.h:358 easy_chat_group_conditions_line_358
	.globl gText_Rom_576D8B
gText_Rom_576D8B: @ 0x08576D8B
	.string "ふそく$"
	.if (. - gText_Rom_576D8B) > 0x4
	.error "gText_Rom_576D8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D8B) < 0x4
	.space 0x4 - (. - gText_Rom_576D8B)
	.endif
