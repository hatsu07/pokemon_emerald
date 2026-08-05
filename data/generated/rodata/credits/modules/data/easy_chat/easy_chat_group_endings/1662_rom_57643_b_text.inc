	@ src/data/easy_chat/easy_chat_group_endings.h:232 easy_chat_group_endings_line_232
	.globl gText_Rom_57643B
gText_Rom_57643B: @ 0x0857643B
	.string "ですわ$"
	.if (. - gText_Rom_57643B) > 0x4
	.error "gText_Rom_57643B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57643B) < 0x4
	.space 0x4 - (. - gText_Rom_57643B)
	.endif
