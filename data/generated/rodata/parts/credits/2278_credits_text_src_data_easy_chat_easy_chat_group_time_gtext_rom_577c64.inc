	@ src/data/easy_chat/easy_chat_group_time.h:58 easy_chat_group_time_line_58
	.globl gText_Rom_577C64
gText_Rom_577C64: @ 0x08577C64
	.string "おととい$"
	.if (. - gText_Rom_577C64) > 0x5
	.error "gText_Rom_577C64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C64) < 0x5
	.space 0x5 - (. - gText_Rom_577C64)
	.endif
