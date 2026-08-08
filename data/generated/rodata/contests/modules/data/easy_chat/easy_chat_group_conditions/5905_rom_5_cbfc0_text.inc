	@ src/data/easy_chat/easy_chat_group_conditions.h:172 easy_chat_group_conditions_line_172 (+1 aliases)
	.globl gText_Rom_5CBFC0
gText_Rom_5CBFC0: @ 0x085CBFC0
	.string "さいこう$"
	.if (. - gText_Rom_5CBFC0) > 0x5
	.error "gText_Rom_5CBFC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFC0) < 0x5
	.space 0x5 - (. - gText_Rom_5CBFC0)
	.endif
