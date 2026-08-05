	@ src/data/easy_chat/easy_chat_group_conditions.h:202 easy_chat_group_conditions_line_202
	.globl gText_Rom_576D1C
gText_Rom_576D1C: @ 0x08576D1C
	.string "すごい$"
	.if (. - gText_Rom_576D1C) > 0x4
	.error "gText_Rom_576D1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D1C) < 0x4
	.space 0x4 - (. - gText_Rom_576D1C)
	.endif
