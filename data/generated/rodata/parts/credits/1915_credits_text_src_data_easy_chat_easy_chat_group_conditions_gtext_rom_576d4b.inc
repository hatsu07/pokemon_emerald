	@ src/data/easy_chat/easy_chat_group_conditions.h:268 easy_chat_group_conditions_line_268
	.globl gText_Rom_576D4B
gText_Rom_576D4B: @ 0x08576D4B
	.string "トップ$"
	.if (. - gText_Rom_576D4B) > 0x4
	.error "gText_Rom_576D4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D4B) < 0x4
	.space 0x4 - (. - gText_Rom_576D4B)
	.endif
