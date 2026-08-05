	@ src/data/easy_chat/easy_chat_group_misc.h:154 easy_chat_group_misc_line_154
	.globl gText_Rom_577F78
gText_Rom_577F78: @ 0x08577F78
	.string "そんな$"
	.if (. - gText_Rom_577F78) > 0x4
	.error "gText_Rom_577F78 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F78) < 0x4
	.space 0x4 - (. - gText_Rom_577F78)
	.endif
