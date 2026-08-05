	@ src/data/easy_chat/easy_chat_group_endings.h:172 easy_chat_group_endings_line_172
	.globl gText_Rom_57640E
gText_Rom_57640E: @ 0x0857640E
	.string "つもり$"
	.if (. - gText_Rom_57640E) > 0x4
	.error "gText_Rom_57640E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57640E) < 0x4
	.space 0x4 - (. - gText_Rom_57640E)
	.endif
