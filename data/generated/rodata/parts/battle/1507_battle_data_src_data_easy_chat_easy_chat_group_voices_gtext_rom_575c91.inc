	@ src/data/easy_chat/easy_chat_group_voices.h:262 easy_chat_group_voices_line_262
	.globl gText_Rom_575C91
gText_Rom_575C91: @ 0x08575C91
	.string "ふっふっふ$"
	.if (. - gText_Rom_575C91) > 0x6
	.error "gText_Rom_575C91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C91) < 0x6
	.space 0x6 - (. - gText_Rom_575C91)
	.endif
