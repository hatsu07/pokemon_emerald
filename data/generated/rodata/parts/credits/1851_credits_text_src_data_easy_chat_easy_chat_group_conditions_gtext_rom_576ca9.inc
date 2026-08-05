	@ src/data/easy_chat/easy_chat_group_conditions.h:58 easy_chat_group_conditions_line_58
	.globl gText_Rom_576CA9
gText_Rom_576CA9: @ 0x08576CA9
	.string "いじょう$"
	.if (. - gText_Rom_576CA9) > 0x5
	.error "gText_Rom_576CA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CA9) < 0x5
	.space 0x5 - (. - gText_Rom_576CA9)
	.endif
