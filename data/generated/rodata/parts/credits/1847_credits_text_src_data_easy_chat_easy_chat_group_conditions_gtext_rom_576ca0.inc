	@ src/data/easy_chat/easy_chat_group_conditions.h:46 easy_chat_group_conditions_line_46
	.globl gText_Rom_576CA0
gText_Rom_576CA0: @ 0x08576CA0
	.string "いきおい$"
	.if (. - gText_Rom_576CA0) > 0x5
	.error "gText_Rom_576CA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CA0) < 0x5
	.space 0x5 - (. - gText_Rom_576CA0)
	.endif
