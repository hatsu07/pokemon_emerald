	@ src/data/easy_chat/easy_chat_group_greetings.h:16 easy_chat_group_greetings_line_16
	.globl gText_Rom_57546A
gText_Rom_57546A: @ 0x0857546A
	.string "いくぜ$"
	.if (. - gText_Rom_57546A) > 0x4
	.error "gText_Rom_57546A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57546A) < 0x4
	.space 0x4 - (. - gText_Rom_57546A)
	.endif
