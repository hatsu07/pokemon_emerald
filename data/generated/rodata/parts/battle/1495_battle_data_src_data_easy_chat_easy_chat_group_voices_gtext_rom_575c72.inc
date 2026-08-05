	@ src/data/easy_chat/easy_chat_group_voices.h:214 easy_chat_group_voices_line_214
	.globl gText_Rom_575C72
gText_Rom_575C72: @ 0x08575C72
	.string "げっ$"
	.if (. - gText_Rom_575C72) > 0x3
	.error "gText_Rom_575C72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C72) < 0x3
	.space 0x3 - (. - gText_Rom_575C72)
	.endif
