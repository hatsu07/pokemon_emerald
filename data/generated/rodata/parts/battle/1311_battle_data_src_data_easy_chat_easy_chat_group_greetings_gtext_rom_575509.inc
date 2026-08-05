	@ src/data/easy_chat/easy_chat_group_greetings.h:214 easy_chat_group_greetings_line_214
	.globl gText_Rom_575509
gText_Rom_575509: @ 0x08575509
	.string "またね$"
	.if (. - gText_Rom_575509) > 0x4
	.error "gText_Rom_575509 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575509) < 0x4
	.space 0x4 - (. - gText_Rom_575509)
	.endif
