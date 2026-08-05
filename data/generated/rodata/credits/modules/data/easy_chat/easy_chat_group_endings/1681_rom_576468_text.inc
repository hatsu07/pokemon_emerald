	@ src/data/easy_chat/easy_chat_group_endings.h:292 easy_chat_group_endings_line_292
	.globl gText_Rom_576468
gText_Rom_576468: @ 0x08576468
	.string "なんです$"
	.if (. - gText_Rom_576468) > 0x5
	.error "gText_Rom_576468 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576468) < 0x5
	.space 0x5 - (. - gText_Rom_576468)
	.endif
