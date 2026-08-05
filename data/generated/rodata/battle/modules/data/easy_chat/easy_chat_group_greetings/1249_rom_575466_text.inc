	@ src/data/easy_chat/easy_chat_group_greetings.h:10 easy_chat_group_greetings_line_10
	.globl gText_Rom_575466
gText_Rom_575466: @ 0x08575466
	.string "イエス$"
	.if (. - gText_Rom_575466) > 0x4
	.error "gText_Rom_575466 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575466) < 0x4
	.space 0x4 - (. - gText_Rom_575466)
	.endif
