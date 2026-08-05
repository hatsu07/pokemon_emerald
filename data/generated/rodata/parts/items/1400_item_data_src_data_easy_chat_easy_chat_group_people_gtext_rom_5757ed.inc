	@ src/data/easy_chat/easy_chat_group_people.h:274 easy_chat_group_people_line_274
	.globl gText_Rom_5757ED
gText_Rom_5757ED: @ 0x085757ED
	.string "だれが$"
	.if (. - gText_Rom_5757ED) > 0x4
	.error "gText_Rom_5757ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757ED) < 0x4
	.space 0x4 - (. - gText_Rom_5757ED)
	.endif
