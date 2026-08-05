	@ src/data/easy_chat/easy_chat_group_people.h:388 easy_chat_group_people_line_388
	.globl gText_Rom_57583A
gText_Rom_57583A: @ 0x0857583A
	.string "みんなの$"
	.if (. - gText_Rom_57583A) > 0x5
	.error "gText_Rom_57583A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57583A) < 0x5
	.space 0x5 - (. - gText_Rom_57583A)
	.endif
