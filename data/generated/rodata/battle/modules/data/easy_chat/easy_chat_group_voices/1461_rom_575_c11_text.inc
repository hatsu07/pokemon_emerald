	@ src/data/easy_chat/easy_chat_group_voices.h:64 easy_chat_group_voices_line_64
	.globl gText_Rom_575C11
gText_Rom_575C11: @ 0x08575C11
	.string "あーん$"
	.if (. - gText_Rom_575C11) > 0x4
	.error "gText_Rom_575C11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C11) < 0x4
	.space 0x4 - (. - gText_Rom_575C11)
	.endif
