	@ src/data/easy_chat/easy_chat_group_voices.h:256 easy_chat_group_voices_line_256
	.globl gText_Rom_575C8D
gText_Rom_575C8D: @ 0x08575C8D
	.string "ひゃあ$"
	.if (. - gText_Rom_575C8D) > 0x4
	.error "gText_Rom_575C8D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C8D) < 0x4
	.space 0x4 - (. - gText_Rom_575C8D)
	.endif
