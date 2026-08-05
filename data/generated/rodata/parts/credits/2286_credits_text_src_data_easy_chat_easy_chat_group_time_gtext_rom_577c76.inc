	@ src/data/easy_chat/easy_chat_group_time.h:82 easy_chat_group_time_line_82
	.globl gText_Rom_577C76
gText_Rom_577C76: @ 0x08577C76
	.string "きょう$"
	.if (. - gText_Rom_577C76) > 0x4
	.error "gText_Rom_577C76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C76) < 0x4
	.space 0x4 - (. - gText_Rom_577C76)
	.endif
