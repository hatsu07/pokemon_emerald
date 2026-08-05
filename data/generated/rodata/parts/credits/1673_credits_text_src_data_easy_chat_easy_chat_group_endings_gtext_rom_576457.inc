	@ src/data/easy_chat/easy_chat_group_endings.h:268 easy_chat_group_endings_line_268
	.globl gText_Rom_576457
gText_Rom_576457: @ 0x08576457
	.string "なのか$"
	.if (. - gText_Rom_576457) > 0x4
	.error "gText_Rom_576457 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576457) < 0x4
	.space 0x4 - (. - gText_Rom_576457)
	.endif
