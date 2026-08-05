	@ src/data/easy_chat/easy_chat_group_endings.h:346 easy_chat_group_endings_line_346
	.globl gText_Rom_576489
gText_Rom_576489: @ 0x08576489
	.string "ますわ$"
	.if (. - gText_Rom_576489) > 0x4
	.error "gText_Rom_576489 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576489) < 0x4
	.space 0x4 - (. - gText_Rom_576489)
	.endif
