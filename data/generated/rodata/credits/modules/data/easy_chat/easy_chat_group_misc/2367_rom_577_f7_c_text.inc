	@ src/data/easy_chat/easy_chat_group_misc.h:160 easy_chat_group_misc_line_160
	.globl gText_Rom_577F7C
gText_Rom_577F7C: @ 0x08577F7C
	.string "てまえ$"
	.if (. - gText_Rom_577F7C) > 0x4
	.error "gText_Rom_577F7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F7C) < 0x4
	.space 0x4 - (. - gText_Rom_577F7C)
	.endif
	@ Decoded text from ROM range: offset=0x577F80, size=0x3
	.string "どう$"
