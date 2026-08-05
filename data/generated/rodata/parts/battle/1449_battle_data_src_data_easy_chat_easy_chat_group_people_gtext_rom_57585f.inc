	@ src/data/easy_chat/easy_chat_group_people.h:436 easy_chat_group_people_line_436
	.globl gText_Rom_57585F
gText_Rom_57585F: @ 0x0857585F
	.string "わたしの$"
	.if (. - gText_Rom_57585F) > 0x5
	.error "gText_Rom_57585F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57585F) < 0x5
	.space 0x5 - (. - gText_Rom_57585F)
	.endif
