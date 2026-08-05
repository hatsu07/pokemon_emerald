	@ src/data/easy_chat/easy_chat_group_greetings.h:226 easy_chat_group_greetings_line_226
	.globl gText_Rom_575512
gText_Rom_575512: @ 0x08575512
	.string "やあ$"
	.if (. - gText_Rom_575512) > 0x3
	.error "gText_Rom_575512 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575512) < 0x3
	.space 0x3 - (. - gText_Rom_575512)
	.endif
