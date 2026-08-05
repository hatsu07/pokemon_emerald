	@ src/data/easy_chat/easy_chat_group_people.h:46 easy_chat_group_people_line_46
	.globl gText_Rom_575740
gText_Rom_575740: @ 0x08575740
	.string "あなたを$"
	.if (. - gText_Rom_575740) > 0x5
	.error "gText_Rom_575740 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575740) < 0x5
	.space 0x5 - (. - gText_Rom_575740)
	.endif
