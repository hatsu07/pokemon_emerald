	@ src/data/easy_chat/easy_chat_group_voices.h:358 easy_chat_group_voices_line_358
	.globl gText_Rom_575CD1
gText_Rom_575CD1: @ 0x08575CD1
	.string "わーん!!$"
	.if (. - gText_Rom_575CD1) > 0x6
	.error "gText_Rom_575CD1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CD1) < 0x6
	.space 0x6 - (. - gText_Rom_575CD1)
	.endif
	@ Decoded text from ROM range: offset=0x575CD7, size=0x3
	.string "ワオ$"
