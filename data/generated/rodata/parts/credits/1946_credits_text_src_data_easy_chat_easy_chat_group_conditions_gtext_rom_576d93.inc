	@ src/data/easy_chat/easy_chat_group_conditions.h:370 easy_chat_group_conditions_line_370
	.globl gText_Rom_576D93
gText_Rom_576D93: @ 0x08576D93
	.string "へた$"
	.if (. - gText_Rom_576D93) > 0x3
	.error "gText_Rom_576D93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D93) < 0x3
	.space 0x3 - (. - gText_Rom_576D93)
	.endif
