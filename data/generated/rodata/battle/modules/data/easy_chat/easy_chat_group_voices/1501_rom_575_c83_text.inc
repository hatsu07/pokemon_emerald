	@ src/data/easy_chat/easy_chat_group_voices.h:244 easy_chat_group_voices_line_244
	.globl gText_Rom_575C83
gText_Rom_575C83: @ 0x08575C83
	.string "はっはっは$"
	.if (. - gText_Rom_575C83) > 0x6
	.error "gText_Rom_575C83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C83) < 0x6
	.space 0x6 - (. - gText_Rom_575C83)
	.endif
