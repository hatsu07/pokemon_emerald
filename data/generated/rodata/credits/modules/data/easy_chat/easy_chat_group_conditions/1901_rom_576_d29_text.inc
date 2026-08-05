	@ src/data/easy_chat/easy_chat_group_conditions.h:220 easy_chat_group_conditions_line_220
	.globl gText_Rom_576D29
gText_Rom_576D29: @ 0x08576D29
	.string "たいした$"
	.if (. - gText_Rom_576D29) > 0x5
	.error "gText_Rom_576D29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D29) < 0x5
	.space 0x5 - (. - gText_Rom_576D29)
	.endif
