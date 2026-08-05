	@ src/data/easy_chat/easy_chat_group_voices.h:94 easy_chat_group_voices_line_94
	.globl gText_Rom_575C22
gText_Rom_575C22: @ 0x08575C22
	.string "うーん$"
	.if (. - gText_Rom_575C22) > 0x4
	.error "gText_Rom_575C22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C22) < 0x4
	.space 0x4 - (. - gText_Rom_575C22)
	.endif
