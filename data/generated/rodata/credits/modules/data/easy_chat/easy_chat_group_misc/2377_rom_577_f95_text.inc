	@ src/data/easy_chat/easy_chat_group_misc.h:202 easy_chat_group_misc_line_202
	.globl gText_Rom_577F95
gText_Rom_577F95: @ 0x08577F95
	.string "どんな$"
	.if (. - gText_Rom_577F95) > 0x4
	.error "gText_Rom_577F95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F95) < 0x4
	.space 0x4 - (. - gText_Rom_577F95)
	.endif
	@ Decoded text from ROM range: offset=0x577F99, size=0x3
	.string "なに$"
