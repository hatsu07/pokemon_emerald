	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:148 easy_chat_group_trendy_saying_line_148
	.globl gText_Rom_57895F
gText_Rom_57895F: @ 0x0857895F
	.string "ハッスル$"
	.if (. - gText_Rom_57895F) > 0x5
	.error "gText_Rom_57895F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57895F) < 0x5
	.space 0x5 - (. - gText_Rom_57895F)
	.endif
