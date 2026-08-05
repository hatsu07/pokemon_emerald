	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:154 easy_chat_group_trendy_saying_line_154
	.globl gText_Rom_578964
gText_Rom_578964: @ 0x08578964
	.string "バッチグー$"
	.if (. - gText_Rom_578964) > 0x6
	.error "gText_Rom_578964 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578964) < 0x6
	.space 0x6 - (. - gText_Rom_578964)
	.endif
