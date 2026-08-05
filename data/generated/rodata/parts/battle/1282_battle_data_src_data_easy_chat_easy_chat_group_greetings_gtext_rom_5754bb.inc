	@ src/data/easy_chat/easy_chat_group_greetings.h:112 easy_chat_group_greetings_line_112
	.globl gText_Rom_5754BB
gText_Rom_5754BB: @ 0x085754BB
	.string "さんじょう$"
	.if (. - gText_Rom_5754BB) > 0x6
	.error "gText_Rom_5754BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754BB) < 0x6
	.space 0x6 - (. - gText_Rom_5754BB)
	.endif
