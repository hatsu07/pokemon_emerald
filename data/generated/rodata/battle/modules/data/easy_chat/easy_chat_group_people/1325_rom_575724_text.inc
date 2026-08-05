	@ src/data/easy_chat/easy_chat_group_people.h:10 easy_chat_group_people_line_10
	.globl gText_Rom_575724
gText_Rom_575724: @ 0x08575724
	.string "あたし$"
	.if (. - gText_Rom_575724) > 0x4
	.error "gText_Rom_575724 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575724) < 0x4
	.space 0x4 - (. - gText_Rom_575724)
	.endif
