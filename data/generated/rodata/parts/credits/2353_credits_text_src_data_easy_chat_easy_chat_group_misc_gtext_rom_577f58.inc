	@ src/data/easy_chat/easy_chat_group_misc.h:100 easy_chat_group_misc_line_100
	.globl gText_Rom_577F58
gText_Rom_577F58: @ 0x08577F58
	.string "こんな$"
	.if (. - gText_Rom_577F58) > 0x4
	.error "gText_Rom_577F58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F58) < 0x4
	.space 0x4 - (. - gText_Rom_577F58)
	.endif
	@ Decoded text from ROM range: offset=0x577F5C, size=0x6
	.string "した$"
	.string "そう$"
