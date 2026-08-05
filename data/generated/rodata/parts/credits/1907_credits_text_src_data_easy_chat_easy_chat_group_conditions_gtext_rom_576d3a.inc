	@ src/data/easy_chat/easy_chat_group_conditions.h:244 easy_chat_group_conditions_line_244
	.globl gText_Rom_576D3A
gText_Rom_576D3A: @ 0x08576D3A
	.string "ちいさい$"
	.if (. - gText_Rom_576D3A) > 0x5
	.error "gText_Rom_576D3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D3A) < 0x5
	.space 0x5 - (. - gText_Rom_576D3A)
	.endif
