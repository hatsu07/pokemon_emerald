	@ src/data/easy_chat/easy_chat_group_people.h:34 easy_chat_group_people_line_34
	.globl gText_Rom_575736
gText_Rom_575736: @ 0x08575736
	.string "あなたの$"
	.if (. - gText_Rom_575736) > 0x5
	.error "gText_Rom_575736 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575736) < 0x5
	.space 0x5 - (. - gText_Rom_575736)
	.endif
