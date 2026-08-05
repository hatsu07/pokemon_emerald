	@ src/data/easy_chat/easy_chat_group_misc.h:88 easy_chat_group_misc_line_88
	.globl gText_Rom_577F50
gText_Rom_577F50: @ 0x08577F50
	.string "これだ$"
	.if (. - gText_Rom_577F50) > 0x4
	.error "gText_Rom_577F50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F50) < 0x4
	.space 0x4 - (. - gText_Rom_577F50)
	.endif
