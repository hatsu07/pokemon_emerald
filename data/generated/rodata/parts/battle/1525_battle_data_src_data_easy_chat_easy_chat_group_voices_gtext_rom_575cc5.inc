	@ src/data/easy_chat/easy_chat_group_voices.h:340 easy_chat_group_voices_line_340
	.globl gText_Rom_575CC5
gText_Rom_575CC5: @ 0x08575CC5
	.string "よし!$"
	.if (. - gText_Rom_575CC5) > 0x4
	.error "gText_Rom_575CC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CC5) < 0x4
	.space 0x4 - (. - gText_Rom_575CC5)
	.endif
