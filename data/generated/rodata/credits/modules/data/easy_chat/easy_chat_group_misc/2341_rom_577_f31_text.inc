	@ src/data/easy_chat/easy_chat_group_misc.h:34 easy_chat_group_misc_line_34
	.globl gText_Rom_577F31
gText_Rom_577F31: @ 0x08577F31
	.string "あれは$"
	.if (. - gText_Rom_577F31) > 0x4
	.error "gText_Rom_577F31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F31) < 0x4
	.space 0x4 - (. - gText_Rom_577F31)
	.endif
