	@ src/data/easy_chat/easy_chat_group_people.h:94 easy_chat_group_people_line_94 (+1 aliases)
	.globl gText_Rom_57576C
gText_Rom_57576C: @ 0x0857576C
	.string "おねえさん$"
	.if (. - gText_Rom_57576C) > 0x6
	.error "gText_Rom_57576C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57576C) < 0x6
	.space 0x6 - (. - gText_Rom_57576C)
	.endif
