	@ src/data/easy_chat/easy_chat_group_people.h:358 easy_chat_group_people_line_358
	.globl gText_Rom_575824
gText_Rom_575824: @ 0x08575824
	.string "ボクは$"
	.if (. - gText_Rom_575824) > 0x4
	.error "gText_Rom_575824 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575824) < 0x4
	.space 0x4 - (. - gText_Rom_575824)
	.endif
