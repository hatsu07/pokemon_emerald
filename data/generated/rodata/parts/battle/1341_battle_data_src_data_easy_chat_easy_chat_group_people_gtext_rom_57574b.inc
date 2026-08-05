	@ src/data/easy_chat/easy_chat_group_people.h:58 easy_chat_group_people_line_58 (+1 aliases)
	.globl gText_Rom_57574B
gText_Rom_57574B: @ 0x0857574B
	.string "おじいさん$"
	.if (. - gText_Rom_57574B) > 0x6
	.error "gText_Rom_57574B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57574B) < 0x6
	.space 0x6 - (. - gText_Rom_57574B)
	.endif
