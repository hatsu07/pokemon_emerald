	@ src/data/easy_chat/easy_chat_group_voices.h:208 easy_chat_group_voices_line_208
	.globl gText_Rom_575C6E
gText_Rom_575C6E: @ 0x08575C6E
	.string "ぐふふ$"
	.if (. - gText_Rom_575C6E) > 0x4
	.error "gText_Rom_575C6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C6E) < 0x4
	.space 0x4 - (. - gText_Rom_575C6E)
	.endif
