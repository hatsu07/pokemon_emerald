	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:58 easy_chat_group_trendy_saying_line_58
	.globl gText_Rom_578912
gText_Rom_578912: @ 0x08578912
	.string "おきゃん$"
	.if (. - gText_Rom_578912) > 0x5
	.error "gText_Rom_578912 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578912) < 0x5
	.space 0x5 - (. - gText_Rom_578912)
	.endif
