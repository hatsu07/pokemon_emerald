	@ src/data/easy_chat/easy_chat_group_misc.h:64 easy_chat_group_misc_line_64
	.globl gText_Rom_577F42
gText_Rom_577F42: @ 0x08577F42
	.string "こっち$"
	.if (. - gText_Rom_577F42) > 0x4
	.error "gText_Rom_577F42 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F42) < 0x4
	.space 0x4 - (. - gText_Rom_577F42)
	.endif
	@ Decoded text from ROM range: offset=0x577F46, size=0x3
	.string "この$"
