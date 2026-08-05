	@ src/data/easy_chat/easy_chat_group_voices.h:130 easy_chat_group_voices_line_130
	.globl gText_Rom_575C3E
gText_Rom_575C3E: @ 0x08575C3E
	.string "うわー$"
	.if (. - gText_Rom_575C3E) > 0x4
	.error "gText_Rom_575C3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C3E) < 0x4
	.space 0x4 - (. - gText_Rom_575C3E)
	.endif
