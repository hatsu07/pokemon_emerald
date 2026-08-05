	@ src/data/easy_chat/easy_chat_group_conditions.h:172 easy_chat_group_conditions_line_172 (+1 aliases)
	.globl gText_Rom_5DD42A
gText_Rom_5DD42A: @ 0x085DD42A
	.string "さいこう$"
	.if (. - gText_Rom_5DD42A) > 0x5
	.error "gText_Rom_5DD42A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD42A) < 0x5
	.space 0x5 - (. - gText_Rom_5DD42A)
	.endif
