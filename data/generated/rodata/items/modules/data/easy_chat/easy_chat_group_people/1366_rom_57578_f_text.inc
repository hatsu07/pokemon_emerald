	@ src/data/easy_chat/easy_chat_group_people.h:136 easy_chat_group_people_line_136
	.globl gText_Rom_57578F
gText_Rom_57578F: @ 0x0857578F
	.string "ガール$"
	.if (. - gText_Rom_57578F) > 0x4
	.error "gText_Rom_57578F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57578F) < 0x4
	.space 0x4 - (. - gText_Rom_57578F)
	.endif
