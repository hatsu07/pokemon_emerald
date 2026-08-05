	@ src/data/easy_chat/easy_chat_group_people.h:28 easy_chat_group_people_line_28
	.globl gText_Rom_575731
gText_Rom_575731: @ 0x08575731
	.string "あなたに$"
	.if (. - gText_Rom_575731) > 0x5
	.error "gText_Rom_575731 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575731) < 0x5
	.space 0x5 - (. - gText_Rom_575731)
	.endif
