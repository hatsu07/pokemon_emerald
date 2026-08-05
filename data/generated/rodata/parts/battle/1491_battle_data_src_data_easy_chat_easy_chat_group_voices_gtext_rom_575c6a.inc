	@ src/data/easy_chat/easy_chat_group_voices.h:202 easy_chat_group_voices_line_202
	.globl gText_Rom_575C6A
gText_Rom_575C6A: @ 0x08575C6A
	.string "ギャー$"
	.if (. - gText_Rom_575C6A) > 0x4
	.error "gText_Rom_575C6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C6A) < 0x4
	.space 0x4 - (. - gText_Rom_575C6A)
	.endif
