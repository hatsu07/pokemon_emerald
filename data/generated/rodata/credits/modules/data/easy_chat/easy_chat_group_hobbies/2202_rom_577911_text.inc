	@ src/data/easy_chat/easy_chat_group_hobbies.h:112 easy_chat_group_hobbies_line_112
	.globl gText_Rom_577911
gText_Rom_577911: @ 0x08577911
	.string "コンプリート$"
	.if (. - gText_Rom_577911) > 0x7
	.error "gText_Rom_577911 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577911) < 0x7
	.space 0x7 - (. - gText_Rom_577911)
	.endif
