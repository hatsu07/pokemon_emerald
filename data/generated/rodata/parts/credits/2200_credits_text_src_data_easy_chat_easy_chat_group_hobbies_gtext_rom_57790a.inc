	@ src/data/easy_chat/easy_chat_group_hobbies.h:106 easy_chat_group_hobbies_line_106
	.globl gText_Rom_57790A
gText_Rom_57790A: @ 0x0857790A
	.string "コレクション$"
	.if (. - gText_Rom_57790A) > 0x7
	.error "gText_Rom_57790A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57790A) < 0x7
	.space 0x7 - (. - gText_Rom_57790A)
	.endif
