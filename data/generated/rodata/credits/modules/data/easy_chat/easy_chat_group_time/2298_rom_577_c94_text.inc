	@ src/data/easy_chat/easy_chat_group_time.h:118 easy_chat_group_time_line_118 (+1 aliases)
	.globl gText_Rom_577C94
gText_Rom_577C94: @ 0x08577C94
	.string "じかん$"
	.if (. - gText_Rom_577C94) > 0x4
	.error "gText_Rom_577C94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C94) < 0x4
	.space 0x4 - (. - gText_Rom_577C94)
	.endif
