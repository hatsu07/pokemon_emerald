	@ src/data/easy_chat/easy_chat_group_time.h:112 easy_chat_group_time_line_112
	.globl gText_Rom_577C90
gText_Rom_577C90: @ 0x08577C90
	.string "こんど$"
	.if (. - gText_Rom_577C90) > 0x4
	.error "gText_Rom_577C90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C90) < 0x4
	.space 0x4 - (. - gText_Rom_577C90)
	.endif
