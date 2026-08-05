	@ src/data/easy_chat/easy_chat_group_conditions.h:196 easy_chat_group_conditions_line_196
	.globl gText_Rom_576D16
gText_Rom_576D16: @ 0x08576D16
	.string "しかたない$"
	.if (. - gText_Rom_576D16) > 0x6
	.error "gText_Rom_576D16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D16) < 0x6
	.space 0x6 - (. - gText_Rom_576D16)
	.endif
