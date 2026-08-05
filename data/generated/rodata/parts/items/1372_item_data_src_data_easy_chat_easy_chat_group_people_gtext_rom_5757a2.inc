	@ src/data/easy_chat/easy_chat_group_people.h:166 easy_chat_group_people_line_166
	.globl gText_Rom_5757A2
gText_Rom_5757A2: @ 0x085757A2
	.string "きみが$"
	.if (. - gText_Rom_5757A2) > 0x4
	.error "gText_Rom_5757A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757A2) < 0x4
	.space 0x4 - (. - gText_Rom_5757A2)
	.endif
