	@ src/data/easy_chat/easy_chat_group_people.h:238 easy_chat_group_people_line_238
	.globl gText_Rom_5757D2
gText_Rom_5757D2: @ 0x085757D2
	.string "じぶんに$"
	.if (. - gText_Rom_5757D2) > 0x5
	.error "gText_Rom_5757D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757D2) < 0x5
	.space 0x5 - (. - gText_Rom_5757D2)
	.endif
