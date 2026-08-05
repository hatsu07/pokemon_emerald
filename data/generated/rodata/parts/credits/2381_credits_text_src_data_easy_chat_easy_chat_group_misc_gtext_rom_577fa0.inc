	@ src/data/easy_chat/easy_chat_group_misc.h:220 easy_chat_group_misc_line_220
	.globl gText_Rom_577FA0
gText_Rom_577FA0: @ 0x08577FA0
	.string "なんだ$"
	.if (. - gText_Rom_577FA0) > 0x4
	.error "gText_Rom_577FA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577FA0) < 0x4
	.space 0x4 - (. - gText_Rom_577FA0)
	.endif
