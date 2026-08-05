	@ src/data/easy_chat/easy_chat_group_greetings.h:4 easy_chat_group_greetings_line_4
	.globl gText_Rom_575460
gText_Rom_575460: @ 0x08575460
	.string "ありがとう$"
	.if (. - gText_Rom_575460) > 0x6
	.error "gText_Rom_575460 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575460) < 0x6
	.space 0x6 - (. - gText_Rom_575460)
	.endif
