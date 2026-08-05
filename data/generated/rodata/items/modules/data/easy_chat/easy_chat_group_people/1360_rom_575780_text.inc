	@ src/data/easy_chat/easy_chat_group_people.h:118 easy_chat_group_people_line_118
	.globl gText_Rom_575780
gText_Rom_575780: @ 0x08575780
	.string "オヤジ$"
	.if (. - gText_Rom_575780) > 0x4
	.error "gText_Rom_575780 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575780) < 0x4
	.space 0x4 - (. - gText_Rom_575780)
	.endif
