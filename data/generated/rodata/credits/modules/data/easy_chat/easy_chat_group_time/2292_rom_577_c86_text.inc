	@ src/data/easy_chat/easy_chat_group_time.h:100 easy_chat_group_time_line_100
	.globl gText_Rom_577C86
gText_Rom_577C86: @ 0x08577C86
	.string "このあと$"
	.if (. - gText_Rom_577C86) > 0x5
	.error "gText_Rom_577C86 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C86) < 0x5
	.space 0x5 - (. - gText_Rom_577C86)
	.endif
