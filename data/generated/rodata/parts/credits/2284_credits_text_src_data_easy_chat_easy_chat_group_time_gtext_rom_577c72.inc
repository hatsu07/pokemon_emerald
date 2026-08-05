	@ src/data/easy_chat/easy_chat_group_time.h:76 easy_chat_group_time_line_76
	.globl gText_Rom_577C72
gText_Rom_577C72: @ 0x08577C72
	.string "きのう$"
	.if (. - gText_Rom_577C72) > 0x4
	.error "gText_Rom_577C72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C72) < 0x4
	.space 0x4 - (. - gText_Rom_577C72)
	.endif
