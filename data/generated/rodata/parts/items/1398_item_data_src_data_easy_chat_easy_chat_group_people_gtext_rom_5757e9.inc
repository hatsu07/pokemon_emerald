	@ src/data/easy_chat/easy_chat_group_people.h:268 easy_chat_group_people_line_268
	.globl gText_Rom_5757E9
gText_Rom_5757E9: @ 0x085757E9
	.string "だれか$"
	.if (. - gText_Rom_5757E9) > 0x4
	.error "gText_Rom_5757E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757E9) < 0x4
	.space 0x4 - (. - gText_Rom_5757E9)
	.endif
