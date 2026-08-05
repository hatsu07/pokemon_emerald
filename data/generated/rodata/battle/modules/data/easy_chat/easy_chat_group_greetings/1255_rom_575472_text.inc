	@ src/data/easy_chat/easy_chat_group_greetings.h:28 easy_chat_group_greetings_line_28
	.globl gText_Rom_575472
gText_Rom_575472: @ 0x08575472
	.string "いくわよ$"
	.if (. - gText_Rom_575472) > 0x5
	.error "gText_Rom_575472 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575472) < 0x5
	.space 0x5 - (. - gText_Rom_575472)
	.endif
