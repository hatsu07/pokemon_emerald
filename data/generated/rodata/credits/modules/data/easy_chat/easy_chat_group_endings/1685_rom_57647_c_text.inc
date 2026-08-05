	@ src/data/easy_chat/easy_chat_group_endings.h:328 easy_chat_group_endings_line_328
	.globl gText_Rom_57647C
gText_Rom_57647C: @ 0x0857647C
	.string "ばっかり$"
	.if (. - gText_Rom_57647C) > 0x5
	.error "gText_Rom_57647C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57647C) < 0x5
	.space 0x5 - (. - gText_Rom_57647C)
	.endif
