	@ src/data/easy_chat/easy_chat_group_conditions.h:340 easy_chat_group_conditions_line_340
	.globl gText_Rom_576D80
gText_Rom_576D80: @ 0x08576D80
	.string "ひま$"
	.if (. - gText_Rom_576D80) > 0x3
	.error "gText_Rom_576D80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D80) < 0x3
	.space 0x3 - (. - gText_Rom_576D80)
	.endif
