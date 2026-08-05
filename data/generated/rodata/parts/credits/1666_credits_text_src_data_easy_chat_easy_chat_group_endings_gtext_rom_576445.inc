	@ src/data/easy_chat/easy_chat_group_endings.h:244 easy_chat_group_endings_line_244
	.globl gText_Rom_576445
gText_Rom_576445: @ 0x08576445
	.string "どうよ?$"
	.if (. - gText_Rom_576445) > 0x5
	.error "gText_Rom_576445 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576445) < 0x5
	.space 0x5 - (. - gText_Rom_576445)
	.endif
