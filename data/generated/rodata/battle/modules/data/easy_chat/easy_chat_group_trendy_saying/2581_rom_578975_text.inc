	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:172 easy_chat_group_trendy_saying_line_172
	.globl gText_Rom_578975
gText_Rom_578975: @ 0x08578975
	.string "ベイベー$"
	.if (. - gText_Rom_578975) > 0x5
	.error "gText_Rom_578975 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578975) < 0x5
	.space 0x5 - (. - gText_Rom_578975)
	.endif
