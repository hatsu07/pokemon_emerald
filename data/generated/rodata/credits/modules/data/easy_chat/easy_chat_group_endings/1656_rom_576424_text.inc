	@ src/data/easy_chat/easy_chat_group_endings.h:202 easy_chat_group_endings_line_202
	.globl gText_Rom_576424
gText_Rom_576424: @ 0x08576424
	.string "でしょ?$"
	.if (. - gText_Rom_576424) > 0x5
	.error "gText_Rom_576424 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576424) < 0x5
	.space 0x5 - (. - gText_Rom_576424)
	.endif
