	@ src/data/easy_chat/easy_chat_group_people.h:88 easy_chat_group_people_line_88
	.globl gText_Rom_575766
gText_Rom_575766: @ 0x08575766
	.string "おにいさん$"
	.if (. - gText_Rom_575766) > 0x6
	.error "gText_Rom_575766 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575766) < 0x6
	.space 0x6 - (. - gText_Rom_575766)
	.endif
