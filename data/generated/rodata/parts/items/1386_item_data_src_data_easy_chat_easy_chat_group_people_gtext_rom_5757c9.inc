	@ src/data/easy_chat/easy_chat_group_people.h:226 easy_chat_group_people_line_226
	.globl gText_Rom_5757C9
gText_Rom_5757C9: @ 0x085757C9
	.string "じぶん$"
	.if (. - gText_Rom_5757C9) > 0x4
	.error "gText_Rom_5757C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757C9) < 0x4
	.space 0x4 - (. - gText_Rom_5757C9)
	.endif
