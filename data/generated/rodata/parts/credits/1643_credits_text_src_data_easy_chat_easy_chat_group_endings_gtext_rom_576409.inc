	@ src/data/easy_chat/easy_chat_group_endings.h:166 easy_chat_group_endings_line_166
	.globl gText_Rom_576409
gText_Rom_576409: @ 0x08576409
	.string "っぱなし$"
	.if (. - gText_Rom_576409) > 0x5
	.error "gText_Rom_576409 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576409) < 0x5
	.space 0x5 - (. - gText_Rom_576409)
	.endif
