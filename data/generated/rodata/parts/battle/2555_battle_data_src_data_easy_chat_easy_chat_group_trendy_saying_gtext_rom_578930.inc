	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:94 easy_chat_group_trendy_saying_line_94
	.globl gText_Rom_578930
gText_Rom_578930: @ 0x08578930
	.string "トレンディー$"
	.if (. - gText_Rom_578930) > 0x7
	.error "gText_Rom_578930 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578930) < 0x7
	.space 0x7 - (. - gText_Rom_578930)
	.endif
