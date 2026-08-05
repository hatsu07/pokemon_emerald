	@ src/data/easy_chat/easy_chat_group_people.h:76 easy_chat_group_people_line_76
	.globl gText_Rom_57575C
gText_Rom_57575C: @ 0x0857575C
	.string "おとこのこ$"
	.if (. - gText_Rom_57575C) > 0x6
	.error "gText_Rom_57575C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57575C) < 0x6
	.space 0x6 - (. - gText_Rom_57575C)
	.endif
