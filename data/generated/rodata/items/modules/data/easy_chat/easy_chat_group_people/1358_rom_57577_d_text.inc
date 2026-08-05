	@ src/data/easy_chat/easy_chat_group_people.h:112 easy_chat_group_people_line_112
	.globl gText_Rom_57577D
gText_Rom_57577D: @ 0x0857577D
	.string "おや$"
	.if (. - gText_Rom_57577D) > 0x3
	.error "gText_Rom_57577D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57577D) < 0x3
	.space 0x3 - (. - gText_Rom_57577D)
	.endif
