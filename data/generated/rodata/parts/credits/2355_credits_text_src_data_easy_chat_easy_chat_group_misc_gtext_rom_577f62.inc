	@ src/data/easy_chat/easy_chat_group_misc.h:118 easy_chat_group_misc_line_118
	.globl gText_Rom_577F62
gText_Rom_577F62: @ 0x08577F62
	.string "そっち$"
	.if (. - gText_Rom_577F62) > 0x4
	.error "gText_Rom_577F62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F62) < 0x4
	.space 0x4 - (. - gText_Rom_577F62)
	.endif
	@ Decoded text from ROM range: offset=0x577F66, size=0x3
	.string "その$"
