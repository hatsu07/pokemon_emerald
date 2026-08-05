	@ src/data/easy_chat/easy_chat_group_adjectives.h:112 easy_chat_group_adjectives_line_112
	.globl gText_Rom_578210
gText_Rom_578210: @ 0x08578210
	.string "ぬるぬる$"
	.if (. - gText_Rom_578210) > 0x5
	.error "gText_Rom_578210 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578210) < 0x5
	.space 0x5 - (. - gText_Rom_578210)
	.endif
