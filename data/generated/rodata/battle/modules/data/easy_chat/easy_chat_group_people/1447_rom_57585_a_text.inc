	@ src/data/easy_chat/easy_chat_group_people.h:430 easy_chat_group_people_line_430
	.globl gText_Rom_57585A
gText_Rom_57585A: @ 0x0857585A
	.string "わたしに$"
	.if (. - gText_Rom_57585A) > 0x5
	.error "gText_Rom_57585A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57585A) < 0x5
	.space 0x5 - (. - gText_Rom_57585A)
	.endif
