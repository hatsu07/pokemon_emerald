	@ src/data/easy_chat/easy_chat_group_time.h:40 easy_chat_group_time_line_40
	.globl gText_Rom_577C58
gText_Rom_577C58: @ 0x08577C58
	.string "いつも$"
	.if (. - gText_Rom_577C58) > 0x4
	.error "gText_Rom_577C58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C58) < 0x4
	.space 0x4 - (. - gText_Rom_577C58)
	.endif
	@ Decoded text from ROM range: offset=0x577C5C, size=0x3
	.string "いま$"
