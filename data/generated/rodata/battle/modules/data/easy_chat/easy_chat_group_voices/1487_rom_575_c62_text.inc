	@ src/data/easy_chat/easy_chat_group_voices.h:190 easy_chat_group_voices_line_190
	.globl gText_Rom_575C62
gText_Rom_575C62: @ 0x08575C62
	.string "がーん$"
	.if (. - gText_Rom_575C62) > 0x4
	.error "gText_Rom_575C62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C62) < 0x4
	.space 0x4 - (. - gText_Rom_575C62)
	.endif
