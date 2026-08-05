	@ src/data/easy_chat/easy_chat_group_voices.h:268 easy_chat_group_voices_line_268
	.globl gText_Rom_575C97
gText_Rom_575C97: @ 0x08575C97
	.string "ププ$"
	.if (. - gText_Rom_575C97) > 0x3
	.error "gText_Rom_575C97 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C97) < 0x3
	.space 0x3 - (. - gText_Rom_575C97)
	.endif
