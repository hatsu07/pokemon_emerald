	@ src/data/easy_chat/easy_chat_group_people.h:376 easy_chat_group_people_line_376
	.globl gText_Rom_575830
gText_Rom_575830: @ 0x08575830
	.string "みんなが$"
	.if (. - gText_Rom_575830) > 0x5
	.error "gText_Rom_575830 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575830) < 0x5
	.space 0x5 - (. - gText_Rom_575830)
	.endif
