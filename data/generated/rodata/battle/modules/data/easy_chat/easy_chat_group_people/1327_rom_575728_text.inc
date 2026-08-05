	@ src/data/easy_chat/easy_chat_group_people.h:16 easy_chat_group_people_line_16
	.globl gText_Rom_575728
gText_Rom_575728: @ 0x08575728
	.string "あなた$"
	.if (. - gText_Rom_575728) > 0x4
	.error "gText_Rom_575728 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575728) < 0x4
	.space 0x4 - (. - gText_Rom_575728)
	.endif
