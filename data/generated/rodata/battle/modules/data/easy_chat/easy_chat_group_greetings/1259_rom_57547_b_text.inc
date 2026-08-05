	@ src/data/easy_chat/easy_chat_group_greetings.h:40 easy_chat_group_greetings_line_40
	.globl gText_Rom_57547B
gText_Rom_57547B: @ 0x0857547B
	.string "いらっしゃい$"
	.if (. - gText_Rom_57547B) > 0x7
	.error "gText_Rom_57547B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57547B) < 0x7
	.space 0x7 - (. - gText_Rom_57547B)
	.endif
