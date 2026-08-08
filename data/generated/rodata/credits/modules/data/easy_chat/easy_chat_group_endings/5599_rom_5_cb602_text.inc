	@ src/data/easy_chat/easy_chat_group_endings.h:352 easy_chat_group_endings_line_352
	.globl gText_Rom_5CB602
gText_Rom_5CB602: @ 0x085CB602
	.string "ません$"
	.if (. - gText_Rom_5CB602) > 0x4
	.error "gText_Rom_5CB602 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB602) < 0x4
	.space 0x4 - (. - gText_Rom_5CB602)
	.endif

