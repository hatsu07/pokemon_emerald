	@ src/data/easy_chat/easy_chat_group_people.h:172 easy_chat_group_people_line_172
	.globl gText_Rom_5757A6
gText_Rom_5757A6: @ 0x085757A6
	.string "きみに$"
	.if (. - gText_Rom_5757A6) > 0x4
	.error "gText_Rom_5757A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757A6) < 0x4
	.space 0x4 - (. - gText_Rom_5757A6)
	.endif
