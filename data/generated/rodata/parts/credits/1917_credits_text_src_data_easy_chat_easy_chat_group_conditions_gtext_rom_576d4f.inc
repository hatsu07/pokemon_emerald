	@ src/data/easy_chat/easy_chat_group_conditions.h:274 easy_chat_group_conditions_line_274
	.globl gText_Rom_576D4F
gText_Rom_576D4F: @ 0x08576D4F
	.string "とまらない$"
	.if (. - gText_Rom_576D4F) > 0x6
	.error "gText_Rom_576D4F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D4F) < 0x6
	.space 0x6 - (. - gText_Rom_576D4F)
	.endif
