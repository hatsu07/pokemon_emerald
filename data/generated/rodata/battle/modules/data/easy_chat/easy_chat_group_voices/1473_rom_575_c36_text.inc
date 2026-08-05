	@ src/data/easy_chat/easy_chat_group_voices.h:118 easy_chat_group_voices_line_118
	.globl gText_Rom_575C36
gText_Rom_575C36: @ 0x08575C36
	.string "うふふ$"
	.if (. - gText_Rom_575C36) > 0x4
	.error "gText_Rom_575C36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C36) < 0x4
	.space 0x4 - (. - gText_Rom_575C36)
	.endif
