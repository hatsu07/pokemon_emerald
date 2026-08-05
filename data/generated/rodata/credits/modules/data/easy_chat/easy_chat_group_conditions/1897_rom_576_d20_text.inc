	@ src/data/easy_chat/easy_chat_group_conditions.h:208 easy_chat_group_conditions_line_208
	.globl gText_Rom_576D20
gText_Rom_576D20: @ 0x08576D20
	.string "すごすぎ$"
	.if (. - gText_Rom_576D20) > 0x5
	.error "gText_Rom_576D20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D20) < 0x5
	.space 0x5 - (. - gText_Rom_576D20)
	.endif
