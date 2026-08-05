	@ src/data/easy_chat/easy_chat_group_people.h:190 easy_chat_group_people_line_190
	.globl gText_Rom_5757B2
gText_Rom_5757B2: @ 0x085757B2
	.string "きみを$"
	.if (. - gText_Rom_5757B2) > 0x4
	.error "gText_Rom_5757B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757B2) < 0x4
	.space 0x4 - (. - gText_Rom_5757B2)
	.endif
