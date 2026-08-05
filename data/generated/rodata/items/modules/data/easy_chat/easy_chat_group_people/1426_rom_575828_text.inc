	@ src/data/easy_chat/easy_chat_group_people.h:364 easy_chat_group_people_line_364
	.globl gText_Rom_575828
gText_Rom_575828: @ 0x08575828
	.string "ボクを$"
	.if (. - gText_Rom_575828) > 0x4
	.error "gText_Rom_575828 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575828) < 0x4
	.space 0x4 - (. - gText_Rom_575828)
	.endif
