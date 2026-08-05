	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:106 easy_chat_group_trendy_saying_line_106
	.globl gText_Rom_57893B
gText_Rom_57893B: @ 0x0857893B
	.string "なるへそ$"
	.if (. - gText_Rom_57893B) > 0x5
	.error "gText_Rom_57893B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57893B) < 0x5
	.space 0x5 - (. - gText_Rom_57893B)
	.endif
