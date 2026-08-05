	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:160 easy_chat_group_trendy_saying_line_160
	.globl gText_Rom_57896A
gText_Rom_57896A: @ 0x0857896A
	.string "フィーバー$"
	.if (. - gText_Rom_57896A) > 0x6
	.error "gText_Rom_57896A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57896A) < 0x6
	.space 0x6 - (. - gText_Rom_57896A)
	.endif
