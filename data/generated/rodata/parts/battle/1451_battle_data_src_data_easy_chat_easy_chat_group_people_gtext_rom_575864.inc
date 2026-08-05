	@ src/data/easy_chat/easy_chat_group_people.h:442 easy_chat_group_people_line_442
	.globl gText_Rom_575864
gText_Rom_575864: @ 0x08575864
	.string "わたしは$"
	.if (. - gText_Rom_575864) > 0x5
	.error "gText_Rom_575864 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575864) < 0x5
	.space 0x5 - (. - gText_Rom_575864)
	.endif
