	@ src/data/easy_chat/easy_chat_group_misc.h:214 easy_chat_group_misc_line_214
	.globl gText_Rom_577F9C
gText_Rom_577F9C: @ 0x08577F9C
	.string "なんか$"
	.if (. - gText_Rom_577F9C) > 0x4
	.error "gText_Rom_577F9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F9C) < 0x4
	.space 0x4 - (. - gText_Rom_577F9C)
	.endif
