	@ src/data/easy_chat/easy_chat_group_misc.h:226 easy_chat_group_misc_line_226
	.globl gText_Rom_577FA4
gText_Rom_577FA4: @ 0x08577FA4
	.string "なんで$"
	.if (. - gText_Rom_577FA4) > 0x4
	.error "gText_Rom_577FA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577FA4) < 0x4
	.space 0x4 - (. - gText_Rom_577FA4)
	.endif
