	@ src/data/easy_chat/easy_chat_group_endings.h:184 easy_chat_group_endings_line_184
	.globl gText_Rom_576417
gText_Rom_576417: @ 0x08576417
	.string "ている$"
	.if (. - gText_Rom_576417) > 0x4
	.error "gText_Rom_576417 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576417) < 0x4
	.space 0x4 - (. - gText_Rom_576417)
	.endif
