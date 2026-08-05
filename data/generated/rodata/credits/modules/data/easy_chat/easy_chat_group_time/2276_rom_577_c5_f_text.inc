	@ src/data/easy_chat/easy_chat_group_time.h:52 easy_chat_group_time_line_52
	.globl gText_Rom_577C5F
gText_Rom_577C5F: @ 0x08577C5F
	.string "えいえん$"
	.if (. - gText_Rom_577C5F) > 0x5
	.error "gText_Rom_577C5F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C5F) < 0x5
	.space 0x5 - (. - gText_Rom_577C5F)
	.endif
