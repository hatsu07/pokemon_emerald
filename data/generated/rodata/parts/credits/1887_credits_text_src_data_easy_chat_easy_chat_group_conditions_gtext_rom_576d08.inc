	@ src/data/easy_chat/easy_chat_group_conditions.h:178 easy_chat_group_conditions_line_178
	.globl gText_Rom_576D08
gText_Rom_576D08: @ 0x08576D08
	.string "さかさま$"
	.if (. - gText_Rom_576D08) > 0x5
	.error "gText_Rom_576D08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D08) < 0x5
	.space 0x5 - (. - gText_Rom_576D08)
	.endif
