	@ src/data/easy_chat/easy_chat_group_voices.h:112 easy_chat_group_voices_line_112
	.globl gText_Rom_575C31
gText_Rom_575C31: @ 0x08575C31
	.string "うひょー$"
	.if (. - gText_Rom_575C31) > 0x5
	.error "gText_Rom_575C31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C31) < 0x5
	.space 0x5 - (. - gText_Rom_575C31)
	.endif
