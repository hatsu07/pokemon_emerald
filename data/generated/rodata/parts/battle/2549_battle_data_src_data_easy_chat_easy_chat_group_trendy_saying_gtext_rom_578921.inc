	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:76 easy_chat_group_trendy_saying_line_76
	.globl gText_Rom_578921
gText_Rom_578921: @ 0x08578921
	.string "そんなバナナ$"
	.if (. - gText_Rom_578921) > 0x7
	.error "gText_Rom_578921 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578921) < 0x7
	.space 0x7 - (. - gText_Rom_578921)
	.endif
