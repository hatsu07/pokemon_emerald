	@ src/data/easy_chat/easy_chat_group_misc.h:22 easy_chat_group_misc_line_22
	.globl gText_Rom_577F2A
gText_Rom_577F2A: @ 0x08577F2A
	.string "ありゃ$"
	.if (. - gText_Rom_577F2A) > 0x4
	.error "gText_Rom_577F2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F2A) < 0x4
	.space 0x4 - (. - gText_Rom_577F2A)
	.endif
	@ Decoded text from ROM range: offset=0x577F2E, size=0x3
	.string "あれ$"
