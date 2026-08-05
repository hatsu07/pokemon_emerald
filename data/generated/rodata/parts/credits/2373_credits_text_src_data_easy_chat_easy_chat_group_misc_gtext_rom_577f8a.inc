	@ src/data/easy_chat/easy_chat_group_misc.h:184 easy_chat_group_misc_line_184
	.globl gText_Rom_577F8A
gText_Rom_577F8A: @ 0x08577F8A
	.string "どりゃ$"
	.if (. - gText_Rom_577F8A) > 0x4
	.error "gText_Rom_577F8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F8A) < 0x4
	.space 0x4 - (. - gText_Rom_577F8A)
	.endif
	@ Decoded text from ROM range: offset=0x577F8E, size=0x3
	.string "どれ$"
