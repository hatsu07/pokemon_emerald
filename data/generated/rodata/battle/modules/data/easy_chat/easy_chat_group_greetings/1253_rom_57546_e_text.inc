	@ src/data/easy_chat/easy_chat_group_greetings.h:22 easy_chat_group_greetings_line_22
	.globl gText_Rom_57546E
gText_Rom_57546E: @ 0x0857546E
	.string "いくよ$"
	.if (. - gText_Rom_57546E) > 0x4
	.error "gText_Rom_57546E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57546E) < 0x4
	.space 0x4 - (. - gText_Rom_57546E)
	.endif
