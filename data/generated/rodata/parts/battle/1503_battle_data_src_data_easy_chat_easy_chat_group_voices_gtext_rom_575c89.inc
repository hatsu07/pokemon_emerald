	@ src/data/easy_chat/easy_chat_group_voices.h:250 easy_chat_group_voices_line_250
	.globl gText_Rom_575C89
gText_Rom_575C89: @ 0x08575C89
	.string "ひいー$"
	.if (. - gText_Rom_575C89) > 0x4
	.error "gText_Rom_575C89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C89) < 0x4
	.space 0x4 - (. - gText_Rom_575C89)
	.endif
