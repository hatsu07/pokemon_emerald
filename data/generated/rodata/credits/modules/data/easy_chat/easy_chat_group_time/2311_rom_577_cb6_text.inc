	@ src/data/easy_chat/easy_chat_group_time.h:160 easy_chat_group_time_line_160
	.globl gText_Rom_577CB6
gText_Rom_577CB6: @ 0x08577CB6
	.string "そのうち$"
	.if (. - gText_Rom_577CB6) > 0x5
	.error "gText_Rom_577CB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CB6) < 0x5
	.space 0x5 - (. - gText_Rom_577CB6)
	.endif
