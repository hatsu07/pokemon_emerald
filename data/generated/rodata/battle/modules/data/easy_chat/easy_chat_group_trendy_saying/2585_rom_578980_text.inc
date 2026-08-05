	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:184 easy_chat_group_trendy_saying_line_184
	.globl gText_Rom_578980
gText_Rom_578980: @ 0x08578980
	.string "モーレツ$"
	.if (. - gText_Rom_578980) > 0x5
	.error "gText_Rom_578980 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578980) < 0x5
	.space 0x5 - (. - gText_Rom_578980)
	.endif
