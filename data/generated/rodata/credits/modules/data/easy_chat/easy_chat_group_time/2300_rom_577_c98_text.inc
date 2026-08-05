	@ src/data/easy_chat/easy_chat_group_time.h:124 easy_chat_group_time_line_124
	.globl gText_Rom_577C98
gText_Rom_577C98: @ 0x08577C98
	.string "しゅうりょう$"
	.if (. - gText_Rom_577C98) > 0x7
	.error "gText_Rom_577C98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C98) < 0x7
	.space 0x7 - (. - gText_Rom_577C98)
	.endif
