	@ src/data/easy_chat/easy_chat_group_time.h:64 easy_chat_group_time_line_64
	.globl gText_Rom_577C69
gText_Rom_577C69: @ 0x08577C69
	.string "おわり$"
	.if (. - gText_Rom_577C69) > 0x4
	.error "gText_Rom_577C69 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C69) < 0x4
	.space 0x4 - (. - gText_Rom_577C69)
	.endif
