	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:130 easy_chat_group_trendy_saying_line_130
	.globl gText_Rom_57894E
gText_Rom_57894E: @ 0x0857894E
	.string "バイナラ$"
	.if (. - gText_Rom_57894E) > 0x5
	.error "gText_Rom_57894E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57894E) < 0x5
	.space 0x5 - (. - gText_Rom_57894E)
	.endif
