	@ src/data/easy_chat/easy_chat_group_people.h:244 easy_chat_group_people_line_244
	.globl gText_Rom_5757D7
gText_Rom_5757D7: @ 0x085757D7
	.string "じぶんの$"
	.if (. - gText_Rom_5757D7) > 0x5
	.error "gText_Rom_5757D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757D7) < 0x5
	.space 0x5 - (. - gText_Rom_5757D7)
	.endif
