	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_876035
gText_Rom_876035: @ 0x08876035
	.string "………$"
	.if (. - gText_Rom_876035) > 0x4
	.error "gText_Rom_876035 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_876035) < 0x4
	.space 0x4 - (. - gText_Rom_876035)
	.endif
	.space 0x5, 0xB0
