	@ src/data/easy_chat/easy_chat_group_people.h:52 easy_chat_group_people_line_52
	.globl gText_Rom_575745
gText_Rom_575745: @ 0x08575745
	.string "おかあさん$"
	.if (. - gText_Rom_575745) > 0x6
	.error "gText_Rom_575745 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575745) < 0x6
	.space 0x6 - (. - gText_Rom_575745)
	.endif
