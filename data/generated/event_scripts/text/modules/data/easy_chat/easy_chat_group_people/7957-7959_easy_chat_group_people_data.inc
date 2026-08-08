	@ src/data/easy_chat/easy_chat_group_people.h:58 easy_chat_group_people_line_58 (+1 aliases)
	.globl gText_Rom_24C43C
gText_Rom_24C43C: @ 0x0824C43C
	.string "おじいさん$"
	.if (. - gText_Rom_24C43C) > 0x6
	.error "gText_Rom_24C43C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C43C) < 0x6
	.space 0x6 - (. - gText_Rom_24C43C)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:100 easy_chat_group_people_line_100 (+1 aliases)
	.globl gText_Rom_24C442
gText_Rom_24C442: @ 0x0824C442
	.string "おばあさん$"
	.if (. - gText_Rom_24C442) > 0x6
	.error "gText_Rom_24C442 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C442) < 0x6
	.space 0x6 - (. - gText_Rom_24C442)
	.endif
