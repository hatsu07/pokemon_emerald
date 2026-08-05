	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:46 easy_chat_group_trendy_saying_line_46
	.globl gText_Rom_578909
gText_Rom_578909: @ 0x08578909
	.string "イチコロ$"
	.if (. - gText_Rom_578909) > 0x5
	.error "gText_Rom_578909 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578909) < 0x5
	.space 0x5 - (. - gText_Rom_578909)
	.endif
