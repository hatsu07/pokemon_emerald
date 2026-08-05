	@ src/data/easy_chat/easy_chat_group_voices.h:196 easy_chat_group_voices_line_196
	.globl gText_Rom_575C66
gText_Rom_575C66: @ 0x08575C66
	.string "キャー$"
	.if (. - gText_Rom_575C66) > 0x4
	.error "gText_Rom_575C66 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C66) < 0x4
	.space 0x4 - (. - gText_Rom_575C66)
	.endif
