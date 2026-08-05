	@ src/data/easy_chat/easy_chat_group_misc.h:76 easy_chat_group_misc_line_76
	.globl gText_Rom_577F49
gText_Rom_577F49: @ 0x08577F49
	.string "こりゃ$"
	.if (. - gText_Rom_577F49) > 0x4
	.error "gText_Rom_577F49 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F49) < 0x4
	.space 0x4 - (. - gText_Rom_577F49)
	.endif
	@ Decoded text from ROM range: offset=0x577F4D, size=0x3
	.string "これ$"
