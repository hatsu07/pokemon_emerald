	@ src/data/easy_chat/easy_chat_group_misc.h:172 easy_chat_group_misc_line_172
	.globl gText_Rom_577F83
gText_Rom_577F83: @ 0x08577F83
	.string "どっち$"
	.if (. - gText_Rom_577F83) > 0x4
	.error "gText_Rom_577F83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F83) < 0x4
	.space 0x4 - (. - gText_Rom_577F83)
	.endif
