	@ src/data/easy_chat/easy_chat_group_misc.h:94 easy_chat_group_misc_line_94
	.globl gText_Rom_577F54
gText_Rom_577F54: @ 0x08577F54
	.string "これは$"
	.if (. - gText_Rom_577F54) > 0x4
	.error "gText_Rom_577F54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F54) < 0x4
	.space 0x4 - (. - gText_Rom_577F54)
	.endif
