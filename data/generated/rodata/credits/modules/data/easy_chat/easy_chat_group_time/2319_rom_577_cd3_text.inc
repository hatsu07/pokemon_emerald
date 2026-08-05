	@ src/data/easy_chat/easy_chat_group_time.h:202 easy_chat_group_time_line_202
	.globl gText_Rom_577CD3
gText_Rom_577CD3: @ 0x08577CD3
	.string "はじめ$"
	.if (. - gText_Rom_577CD3) > 0x4
	.error "gText_Rom_577CD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CD3) < 0x4
	.space 0x4 - (. - gText_Rom_577CD3)
	.endif
	@ Decoded text from ROM range: offset=0x577CD7, size=0x3
	.string "はる$"
