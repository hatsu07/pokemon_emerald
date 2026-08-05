	@ src/data/easy_chat/easy_chat_group_people.h:418 easy_chat_group_people_line_418
	.globl gText_Rom_575851
gText_Rom_575851: @ 0x08575851
	.string "わたし$"
	.if (. - gText_Rom_575851) > 0x4
	.error "gText_Rom_575851 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575851) < 0x4
	.space 0x4 - (. - gText_Rom_575851)
	.endif
