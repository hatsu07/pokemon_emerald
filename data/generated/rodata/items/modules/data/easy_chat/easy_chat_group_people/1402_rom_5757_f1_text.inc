	@ src/data/easy_chat/easy_chat_group_people.h:280 easy_chat_group_people_line_280
	.globl gText_Rom_5757F1
gText_Rom_5757F1: @ 0x085757F1
	.string "だれに$"
	.if (. - gText_Rom_5757F1) > 0x4
	.error "gText_Rom_5757F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757F1) < 0x4
	.space 0x4 - (. - gText_Rom_5757F1)
	.endif
