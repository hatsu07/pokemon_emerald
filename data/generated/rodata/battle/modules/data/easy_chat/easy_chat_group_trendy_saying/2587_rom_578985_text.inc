	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:190 easy_chat_group_trendy_saying_line_190
	.globl gText_Rom_578985
gText_Rom_578985: @ 0x08578985
	.string "ヤング$"
	.if (. - gText_Rom_578985) > 0x4
	.error "gText_Rom_578985 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578985) < 0x4
	.space 0x4 - (. - gText_Rom_578985)
	.endif
