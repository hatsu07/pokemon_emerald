	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:4 easy_chat_group_trendy_saying_line_4
	.globl gText_Rom_5788E0
gText_Rom_5788E0: @ 0x085788E0
	.string "4649$"
	.if (. - gText_Rom_5788E0) > 0x5
	.error "gText_Rom_5788E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5788E0) < 0x5
	.space 0x5 - (. - gText_Rom_5788E0)
	.endif
