	@ src/data/easy_chat/easy_chat_group_conditions.h:112 easy_chat_group_conditions_line_112
	.globl gText_Rom_576CD1
gText_Rom_576CD1: @ 0x08576CD1
	.string "うるさい$"
	.if (. - gText_Rom_576CD1) > 0x5
	.error "gText_Rom_576CD1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CD1) < 0x5
	.space 0x5 - (. - gText_Rom_576CD1)
	.endif
