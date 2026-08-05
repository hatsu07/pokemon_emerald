	@ src/data/easy_chat/easy_chat_group_voices.h:316 easy_chat_group_voices_line_316
	.globl gText_Rom_575CB4
gText_Rom_575CB4: @ 0x08575CB4
	.string "むきー!!$"
	.if (. - gText_Rom_575CB4) > 0x6
	.error "gText_Rom_575CB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CB4) < 0x6
	.space 0x6 - (. - gText_Rom_575CB4)
	.endif
