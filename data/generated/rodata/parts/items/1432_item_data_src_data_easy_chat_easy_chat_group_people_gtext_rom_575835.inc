	@ src/data/easy_chat/easy_chat_group_people.h:382 easy_chat_group_people_line_382
	.globl gText_Rom_575835
gText_Rom_575835: @ 0x08575835
	.string "みんなに$"
	.if (. - gText_Rom_575835) > 0x5
	.error "gText_Rom_575835 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575835) < 0x5
	.space 0x5 - (. - gText_Rom_575835)
	.endif
