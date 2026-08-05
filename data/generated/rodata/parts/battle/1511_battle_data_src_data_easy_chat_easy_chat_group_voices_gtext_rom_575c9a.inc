	@ src/data/easy_chat/easy_chat_group_voices.h:274 easy_chat_group_voices_line_274
	.globl gText_Rom_575C9A
gText_Rom_575C9A: @ 0x08575C9A
	.string "ふふん$"
	.if (. - gText_Rom_575C9A) > 0x4
	.error "gText_Rom_575C9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C9A) < 0x4
	.space 0x4 - (. - gText_Rom_575C9A)
	.endif
	@ Decoded text from ROM range: offset=0x575C9E, size=0x3
	.string "ふん$"
