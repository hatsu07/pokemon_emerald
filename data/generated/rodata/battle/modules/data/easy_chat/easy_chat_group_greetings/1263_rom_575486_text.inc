	@ src/data/easy_chat/easy_chat_group_greetings.h:52 easy_chat_group_greetings_line_52
	.globl gText_Rom_575486
gText_Rom_575486: @ 0x08575486
	.string "おっす$"
	.if (. - gText_Rom_575486) > 0x4
	.error "gText_Rom_575486 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575486) < 0x4
	.space 0x4 - (. - gText_Rom_575486)
	.endif
