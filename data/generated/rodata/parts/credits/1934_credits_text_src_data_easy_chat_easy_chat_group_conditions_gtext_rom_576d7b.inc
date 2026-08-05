	@ src/data/easy_chat/easy_chat_group_conditions.h:334 easy_chat_group_conditions_line_334
	.globl gText_Rom_576D7B
gText_Rom_576D7B: @ 0x08576D7B
	.string "ひとりで$"
	.if (. - gText_Rom_576D7B) > 0x5
	.error "gText_Rom_576D7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D7B) < 0x5
	.space 0x5 - (. - gText_Rom_576D7B)
	.endif
