	@ src/data/easy_chat/easy_chat_group_people.h:292 easy_chat_group_people_line_292
	.globl gText_Rom_5757F9
gText_Rom_5757F9: @ 0x085757F9
	.string "だれも$"
	.if (. - gText_Rom_5757F9) > 0x4
	.error "gText_Rom_5757F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757F9) < 0x4
	.space 0x4 - (. - gText_Rom_5757F9)
	.endif
