	@ src/data/easy_chat/easy_chat_group_people.h:424 easy_chat_group_people_line_424
	.globl gText_Rom_575855
gText_Rom_575855: @ 0x08575855
	.string "わたしが$"
	.if (. - gText_Rom_575855) > 0x5
	.error "gText_Rom_575855 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575855) < 0x5
	.space 0x5 - (. - gText_Rom_575855)
	.endif
