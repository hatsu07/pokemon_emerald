	@ src/data/easy_chat/easy_chat_group_time.h:166 easy_chat_group_time_line_166
	.globl gText_Rom_577CBB
gText_Rom_577CBB: @ 0x08577CBB
	.string "ついに$"
	.if (. - gText_Rom_577CBB) > 0x4
	.error "gText_Rom_577CBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CBB) < 0x4
	.space 0x4 - (. - gText_Rom_577CBB)
	.endif
	@ Decoded text from ROM range: offset=0x577CBF, size=0x6
	.string "つぎ$"
	.string "とき$"
