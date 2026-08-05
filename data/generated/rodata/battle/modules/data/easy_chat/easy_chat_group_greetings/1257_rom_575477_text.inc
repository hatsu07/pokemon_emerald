	@ src/data/easy_chat/easy_chat_group_greetings.h:34 easy_chat_group_greetings_line_34
	.globl gText_Rom_575477
gText_Rom_575477: @ 0x08575477
	.string "いやー$"
	.if (. - gText_Rom_575477) > 0x4
	.error "gText_Rom_575477 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575477) < 0x4
	.space 0x4 - (. - gText_Rom_575477)
	.endif
