	@ src/data/easy_chat/easy_chat_group_voices.h:106 easy_chat_group_voices_line_106
	.globl gText_Rom_575C2B
gText_Rom_575C2B: @ 0x08575C2B
	.string "うおりゃー$"
	.if (. - gText_Rom_575C2B) > 0x6
	.error "gText_Rom_575C2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C2B) < 0x6
	.space 0x6 - (. - gText_Rom_575C2B)
	.endif
