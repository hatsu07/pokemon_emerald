	@ src/data/easy_chat/easy_chat_group_time.h:28 easy_chat_group_time_line_28
	.globl gText_Rom_577C4F
gText_Rom_577C4F: @ 0x08577C4F
	.string "いちにち$"
	.if (. - gText_Rom_577C4F) > 0x5
	.error "gText_Rom_577C4F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C4F) < 0x5
	.space 0x5 - (. - gText_Rom_577C4F)
	.endif
