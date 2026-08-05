	@ src/data/easy_chat/easy_chat_group_voices.h:184 easy_chat_group_voices_line_184
	.globl gText_Rom_575C5E
gText_Rom_575C5E: @ 0x08575C5E
	.string "おっと$"
	.if (. - gText_Rom_575C5E) > 0x4
	.error "gText_Rom_575C5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C5E) < 0x4
	.space 0x4 - (. - gText_Rom_575C5E)
	.endif
