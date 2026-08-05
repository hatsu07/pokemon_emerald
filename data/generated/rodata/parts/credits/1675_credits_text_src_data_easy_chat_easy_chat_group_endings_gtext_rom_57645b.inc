	@ src/data/easy_chat/easy_chat_group_endings.h:274 easy_chat_group_endings_line_274
	.globl gText_Rom_57645B
gText_Rom_57645B: @ 0x0857645B
	.string "なのだ$"
	.if (. - gText_Rom_57645B) > 0x4
	.error "gText_Rom_57645B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57645B) < 0x4
	.space 0x4 - (. - gText_Rom_57645B)
	.endif
