	@ src/data/easy_chat/easy_chat_group_hobbies.h:148 easy_chat_group_hobbies_line_148
	.globl gText_Rom_57792F
gText_Rom_57792F: @ 0x0857792F
	.string "ソフト$"
	.if (. - gText_Rom_57792F) > 0x4
	.error "gText_Rom_57792F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57792F) < 0x4
	.space 0x4 - (. - gText_Rom_57792F)
	.endif
