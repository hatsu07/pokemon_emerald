	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:28 easy_chat_group_trendy_saying_line_28
	.globl gText_Rom_5788F9
gText_Rom_5788F9: @ 0x085788F9
	.string "ありがじゅう$"
	.if (. - gText_Rom_5788F9) > 0x7
	.error "gText_Rom_5788F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5788F9) < 0x7
	.space 0x7 - (. - gText_Rom_5788F9)
	.endif
