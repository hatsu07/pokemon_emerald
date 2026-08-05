	@ src/data/easy_chat/easy_chat_group_voices.h:160 easy_chat_group_voices_line_160
	.globl gText_Rom_575C51
gText_Rom_575C51: @ 0x08575C51
	.string "えへへ$"
	.if (. - gText_Rom_575C51) > 0x4
	.error "gText_Rom_575C51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C51) < 0x4
	.space 0x4 - (. - gText_Rom_575C51)
	.endif
	@ Decoded text from ROM range: offset=0x575C55, size=0x9
	.string "おい$"
	.string "おお$"
	.string "オー$"
