	@ src/data/easy_chat/easy_chat_group_people.h:286 easy_chat_group_people_line_286
	.globl gText_Rom_5757F5
gText_Rom_5757F5: @ 0x085757F5
	.string "だれの$"
	.if (. - gText_Rom_5757F5) > 0x4
	.error "gText_Rom_5757F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757F5) < 0x4
	.space 0x4 - (. - gText_Rom_5757F5)
	.endif
