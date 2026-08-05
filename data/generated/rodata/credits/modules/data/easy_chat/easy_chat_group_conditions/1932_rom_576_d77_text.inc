	@ src/data/easy_chat/easy_chat_group_conditions.h:328 easy_chat_group_conditions_line_328
	.globl gText_Rom_576D77
gText_Rom_576D77: @ 0x08576D77
	.string "ひどい$"
	.if (. - gText_Rom_576D77) > 0x4
	.error "gText_Rom_576D77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D77) < 0x4
	.space 0x4 - (. - gText_Rom_576D77)
	.endif
