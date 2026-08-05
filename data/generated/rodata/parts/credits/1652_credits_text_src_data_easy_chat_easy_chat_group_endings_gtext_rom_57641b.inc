	@ src/data/easy_chat/easy_chat_group_endings.h:190 easy_chat_group_endings_line_190
	.globl gText_Rom_57641B
gText_Rom_57641B: @ 0x0857641B
	.string "でーす!$"
	.if (. - gText_Rom_57641B) > 0x5
	.error "gText_Rom_57641B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57641B) < 0x5
	.space 0x5 - (. - gText_Rom_57641B)
	.endif
