	@ src/data/easy_chat/easy_chat_group_conditions.h:100 easy_chat_group_conditions_line_100
	.globl gText_Rom_576CC9
gText_Rom_576CC9: @ 0x08576CC9
	.string "うまい$"
	.if (. - gText_Rom_576CC9) > 0x4
	.error "gText_Rom_576CC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CC9) < 0x4
	.space 0x4 - (. - gText_Rom_576CC9)
	.endif
