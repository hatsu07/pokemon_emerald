	@ src/data/easy_chat/easy_chat_group_endings.h:196 easy_chat_group_endings_line_196
	.globl gText_Rom_576420
gText_Rom_576420: @ 0x08576420
	.string "でした$"
	.if (. - gText_Rom_576420) > 0x4
	.error "gText_Rom_576420 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576420) < 0x4
	.space 0x4 - (. - gText_Rom_576420)
	.endif
