	@ src/data/easy_chat/easy_chat_group_misc.h:232 easy_chat_group_misc_line_232
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_577FA8
gText_Rom_577FA8: @ 0x08577FA8
	.string "なんなんだ$"
	.if (. - gText_Rom_577FA8) != 0x6
	.error "gText_Rom_577FA8 must retain its original byte length"
	.endif
