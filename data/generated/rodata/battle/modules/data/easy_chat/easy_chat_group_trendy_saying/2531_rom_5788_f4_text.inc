	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:22 easy_chat_group_trendy_saying_line_22
	.globl gText_Rom_5788F4
gText_Rom_5788F4: @ 0x085788F4
	.string "アベック$"
	.if (. - gText_Rom_5788F4) > 0x5
	.error "gText_Rom_5788F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5788F4) < 0x5
	.space 0x5 - (. - gText_Rom_5788F4)
	.endif
