	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_575CC9
gText_Rom_575CC9: @ 0x08575CC9
	.string "ラララ$"
	.if (. - gText_Rom_575CC9) > 0x4
	.error "gText_Rom_575CC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CC9) < 0x4
	.space 0x4 - (. - gText_Rom_575CC9)
	.endif
