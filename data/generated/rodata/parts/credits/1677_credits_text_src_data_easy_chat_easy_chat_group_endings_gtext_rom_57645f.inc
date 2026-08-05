	@ src/data/easy_chat/easy_chat_group_endings.h:280 easy_chat_group_endings_line_280
	.globl gText_Rom_57645F
gText_Rom_57645F: @ 0x0857645F
	.string "なのよ$"
	.if (. - gText_Rom_57645F) > 0x4
	.error "gText_Rom_57645F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57645F) < 0x4
	.space 0x4 - (. - gText_Rom_57645F)
	.endif
