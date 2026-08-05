	@ src/data/easy_chat/easy_chat_group_time.h:34 easy_chat_group_time_line_34
	.globl gText_Rom_577C54
gText_Rom_577C54: @ 0x08577C54
	.string "いつか$"
	.if (. - gText_Rom_577C54) > 0x4
	.error "gText_Rom_577C54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C54) < 0x4
	.space 0x4 - (. - gText_Rom_577C54)
	.endif
