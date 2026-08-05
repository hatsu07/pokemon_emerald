	@ src/data/easy_chat/easy_chat_group_voices.h:124 easy_chat_group_voices_line_124
	.globl gText_Rom_575C3A
gText_Rom_575C3A: @ 0x08575C3A
	.string "うふん$"
	.if (. - gText_Rom_575C3A) > 0x4
	.error "gText_Rom_575C3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C3A) < 0x4
	.space 0x4 - (. - gText_Rom_575C3A)
	.endif
