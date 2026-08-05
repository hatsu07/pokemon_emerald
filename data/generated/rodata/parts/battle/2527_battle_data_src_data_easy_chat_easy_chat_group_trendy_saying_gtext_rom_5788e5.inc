	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:10 easy_chat_group_trendy_saying_line_10
	.globl gText_Rom_5788E5
gText_Rom_5788E5: @ 0x085788E5
	.string "アイアイサー$"
	.if (. - gText_Rom_5788E5) > 0x7
	.error "gText_Rom_5788E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5788E5) < 0x7
	.space 0x7 - (. - gText_Rom_5788E5)
	.endif
