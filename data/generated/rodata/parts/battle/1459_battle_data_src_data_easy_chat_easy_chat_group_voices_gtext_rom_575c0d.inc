	@ src/data/easy_chat/easy_chat_group_voices.h:58 easy_chat_group_voices_line_58
	.globl gText_Rom_575C0D
gText_Rom_575C0D: @ 0x08575C0D
	.string "あーあ$"
	.if (. - gText_Rom_575C0D) > 0x4
	.error "gText_Rom_575C0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C0D) < 0x4
	.space 0x4 - (. - gText_Rom_575C0D)
	.endif
