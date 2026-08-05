	@ src/data/easy_chat/easy_chat_group_adjectives.h:208 easy_chat_group_adjectives_line_208
	.globl gText_Rom_578264
gText_Rom_578264: @ 0x08578264
	.string "るんるん$"
	.if (. - gText_Rom_578264) > 0x5
	.error "gText_Rom_578264 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578264) < 0x5
	.space 0x5 - (. - gText_Rom_578264)
	.endif
