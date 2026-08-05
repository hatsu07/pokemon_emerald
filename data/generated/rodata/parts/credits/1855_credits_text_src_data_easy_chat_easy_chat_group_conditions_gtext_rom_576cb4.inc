	@ src/data/easy_chat/easy_chat_group_conditions.h:70 easy_chat_group_conditions_line_70
	.globl gText_Rom_576CB4
gText_Rom_576CB4: @ 0x08576CB4
	.string "いっしょに$"
	.if (. - gText_Rom_576CB4) > 0x6
	.error "gText_Rom_576CB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CB4) < 0x6
	.space 0x6 - (. - gText_Rom_576CB4)
	.endif
