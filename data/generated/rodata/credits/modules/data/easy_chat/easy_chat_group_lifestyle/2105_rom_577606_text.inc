	@ src/data/easy_chat/easy_chat_group_lifestyle.h:82 easy_chat_group_lifestyle_line_82
	.globl gText_Rom_577606
gText_Rom_577606: @ 0x08577606
	.string "しごと$"
	.if (. - gText_Rom_577606) > 0x4
	.error "gText_Rom_577606 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577606) < 0x4
	.space 0x4 - (. - gText_Rom_577606)
	.endif
