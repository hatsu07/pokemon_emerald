	@ src/data/easy_chat/easy_chat_group_conditions.h:310 easy_chat_group_conditions_line_310
	.globl gText_Rom_576D6B
gText_Rom_576D6B: @ 0x08576D6B
	.string "ぬるい$"
	.if (. - gText_Rom_576D6B) > 0x4
	.error "gText_Rom_576D6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D6B) < 0x4
	.space 0x4 - (. - gText_Rom_576D6B)
	.endif
