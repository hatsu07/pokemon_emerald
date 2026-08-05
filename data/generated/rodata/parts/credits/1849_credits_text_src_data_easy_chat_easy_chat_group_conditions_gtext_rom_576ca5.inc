	@ src/data/easy_chat/easy_chat_group_conditions.h:52 easy_chat_group_conditions_line_52
	.globl gText_Rom_576CA5
gText_Rom_576CA5: @ 0x08576CA5
	.string "いける$"
	.if (. - gText_Rom_576CA5) > 0x4
	.error "gText_Rom_576CA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CA5) < 0x4
	.space 0x4 - (. - gText_Rom_576CA5)
	.endif
