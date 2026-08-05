	@ src/data/easy_chat/easy_chat_group_time.h:16 easy_chat_group_time_line_16
	.globl gText_Rom_577C46
gText_Rom_577C46: @ 0x08577C46
	.string "あした$"
	.if (. - gText_Rom_577C46) > 0x4
	.error "gText_Rom_577C46 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C46) < 0x4
	.space 0x4 - (. - gText_Rom_577C46)
	.endif
