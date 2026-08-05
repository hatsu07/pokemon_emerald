	@ src/data/easy_chat/easy_chat_group_people.h:40 easy_chat_group_people_line_40
	.globl gText_Rom_57573B
gText_Rom_57573B: @ 0x0857573B
	.string "あなたは$"
	.if (. - gText_Rom_57573B) > 0x5
	.error "gText_Rom_57573B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57573B) < 0x5
	.space 0x5 - (. - gText_Rom_57573B)
	.endif
