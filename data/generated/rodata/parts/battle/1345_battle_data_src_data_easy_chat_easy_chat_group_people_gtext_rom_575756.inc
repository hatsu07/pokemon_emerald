	@ src/data/easy_chat/easy_chat_group_people.h:70 easy_chat_group_people_line_70
	.globl gText_Rom_575756
gText_Rom_575756: @ 0x08575756
	.string "おとうさん$"
	.if (. - gText_Rom_575756) > 0x6
	.error "gText_Rom_575756 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575756) < 0x6
	.space 0x6 - (. - gText_Rom_575756)
	.endif
