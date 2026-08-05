	@ src/data/easy_chat/easy_chat_group_conditions.h:76 easy_chat_group_conditions_line_76
	.globl gText_Rom_576CBA
gText_Rom_576CBA: @ 0x08576CBA
	.string "いっぱい$"
	.if (. - gText_Rom_576CBA) > 0x5
	.error "gText_Rom_576CBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CBA) < 0x5
	.space 0x5 - (. - gText_Rom_576CBA)
	.endif
