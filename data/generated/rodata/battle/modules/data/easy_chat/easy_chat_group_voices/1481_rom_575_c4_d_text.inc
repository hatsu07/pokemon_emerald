	@ src/data/easy_chat/easy_chat_group_voices.h:154 easy_chat_group_voices_line_154
	.globl gText_Rom_575C4D
gText_Rom_575C4D: @ 0x08575C4D
	.string "えーん$"
	.if (. - gText_Rom_575C4D) > 0x4
	.error "gText_Rom_575C4D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C4D) < 0x4
	.space 0x4 - (. - gText_Rom_575C4D)
	.endif
