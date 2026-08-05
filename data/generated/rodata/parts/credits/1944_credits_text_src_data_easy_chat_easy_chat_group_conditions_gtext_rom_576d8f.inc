	@ src/data/easy_chat/easy_chat_group_conditions.h:364 easy_chat_group_conditions_line_364
	.globl gText_Rom_576D8F
gText_Rom_576D8F: @ 0x08576D8F
	.string "ベスト$"
	.if (. - gText_Rom_576D8F) > 0x4
	.error "gText_Rom_576D8F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D8F) < 0x4
	.space 0x4 - (. - gText_Rom_576D8F)
	.endif
