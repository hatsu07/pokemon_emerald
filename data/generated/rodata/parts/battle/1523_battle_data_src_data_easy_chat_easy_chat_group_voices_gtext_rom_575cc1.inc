	@ src/data/easy_chat/easy_chat_group_voices.h:334 easy_chat_group_voices_line_334
	.globl gText_Rom_575CC1
gText_Rom_575CC1: @ 0x08575CC1
	.string "よーし$"
	.if (. - gText_Rom_575CC1) > 0x4
	.error "gText_Rom_575CC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CC1) < 0x4
	.space 0x4 - (. - gText_Rom_575CC1)
	.endif
