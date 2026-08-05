	@ src/data/easy_chat/easy_chat_group_time.h:22 easy_chat_group_time_line_22
	.globl gText_Rom_577C4A
gText_Rom_577C4A: @ 0x08577C4A
	.string "いちども$"
	.if (. - gText_Rom_577C4A) > 0x5
	.error "gText_Rom_577C4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C4A) < 0x5
	.space 0x5 - (. - gText_Rom_577C4A)
	.endif
