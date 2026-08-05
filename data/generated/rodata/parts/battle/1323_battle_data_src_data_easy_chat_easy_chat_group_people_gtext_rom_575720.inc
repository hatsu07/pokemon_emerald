	@ src/data/easy_chat/easy_chat_group_people.h:4 easy_chat_group_people_line_4 (+1 aliases)
	.globl gText_Rom_575720
gText_Rom_575720: @ 0x08575720
	.string "あいて$"
	.if (. - gText_Rom_575720) > 0x4
	.error "gText_Rom_575720 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575720) < 0x4
	.space 0x4 - (. - gText_Rom_575720)
	.endif
