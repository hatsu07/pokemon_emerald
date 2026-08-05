	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:112 easy_chat_group_trendy_saying_line_112
	.globl gText_Rom_578940
gText_Rom_578940: @ 0x08578940
	.string "ネクラ$"
	.if (. - gText_Rom_578940) > 0x4
	.error "gText_Rom_578940 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578940) < 0x4
	.space 0x4 - (. - gText_Rom_578940)
	.endif
