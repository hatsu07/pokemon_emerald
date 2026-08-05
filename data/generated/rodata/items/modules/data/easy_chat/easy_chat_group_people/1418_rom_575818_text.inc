	@ src/data/easy_chat/easy_chat_group_people.h:340 easy_chat_group_people_line_340
	.globl gText_Rom_575818
gText_Rom_575818: @ 0x08575818
	.string "ボクが$"
	.if (. - gText_Rom_575818) > 0x4
	.error "gText_Rom_575818 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575818) < 0x4
	.space 0x4 - (. - gText_Rom_575818)
	.endif
