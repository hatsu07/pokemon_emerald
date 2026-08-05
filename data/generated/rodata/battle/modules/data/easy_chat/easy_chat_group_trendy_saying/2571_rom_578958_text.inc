	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:142 easy_chat_group_trendy_saying_line_142
	.globl gText_Rom_578958
gText_Rom_578958: @ 0x08578958
	.string "バタンキュー$"
	.if (. - gText_Rom_578958) > 0x7
	.error "gText_Rom_578958 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578958) < 0x7
	.space 0x7 - (. - gText_Rom_578958)
	.endif
