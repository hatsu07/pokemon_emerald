	@ src/data/easy_chat/easy_chat_group_greetings.h:202 easy_chat_group_greetings_line_202
	.globl gText_Rom_5754FF
gText_Rom_5754FF: @ 0x085754FF
	.string "はじめまして$"
	.if (. - gText_Rom_5754FF) > 0x7
	.error "gText_Rom_5754FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754FF) < 0x7
	.space 0x7 - (. - gText_Rom_5754FF)
	.endif
	@ Decoded text from ROM range: offset=0x575506, size=0x3
	.string "ヘイ$"
