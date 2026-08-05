	@ src/data/easy_chat/easy_chat_group_time.h:106 easy_chat_group_time_line_106
	.globl gText_Rom_577C8B
gText_Rom_577C8B: @ 0x08577C8B
	.string "このまえ$"
	.if (. - gText_Rom_577C8B) > 0x5
	.error "gText_Rom_577C8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C8B) < 0x5
	.space 0x5 - (. - gText_Rom_577C8B)
	.endif
