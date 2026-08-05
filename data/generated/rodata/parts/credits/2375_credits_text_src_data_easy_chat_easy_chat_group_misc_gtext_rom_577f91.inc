	@ src/data/easy_chat/easy_chat_group_misc.h:196 easy_chat_group_misc_line_196
	.globl gText_Rom_577F91
gText_Rom_577F91: @ 0x08577F91
	.string "どれを$"
	.if (. - gText_Rom_577F91) > 0x4
	.error "gText_Rom_577F91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F91) < 0x4
	.space 0x4 - (. - gText_Rom_577F91)
	.endif
