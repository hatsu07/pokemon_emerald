	@ src/data/easy_chat/easy_chat_group_people.h:82 easy_chat_group_people_line_82
	.globl gText_Rom_575762
gText_Rom_575762: @ 0x08575762
	.string "おとな$"
	.if (. - gText_Rom_575762) > 0x4
	.error "gText_Rom_575762 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575762) < 0x4
	.space 0x4 - (. - gText_Rom_575762)
	.endif
