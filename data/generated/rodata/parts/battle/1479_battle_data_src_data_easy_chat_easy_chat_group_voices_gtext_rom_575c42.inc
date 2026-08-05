	@ src/data/easy_chat/easy_chat_group_voices.h:136 easy_chat_group_voices_line_136
	.globl gText_Rom_575C42
gText_Rom_575C42: @ 0x08575C42
	.string "うわーん$"
	.if (. - gText_Rom_575C42) > 0x5
	.error "gText_Rom_575C42 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C42) < 0x5
	.space 0x5 - (. - gText_Rom_575C42)
	.endif
	@ Decoded text from ROM range: offset=0x575C47, size=0x6
	.string "ええ$"
	.string "えー$"
