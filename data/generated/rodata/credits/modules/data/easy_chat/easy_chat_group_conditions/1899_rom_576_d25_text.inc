	@ src/data/easy_chat/easy_chat_group_conditions.h:214 easy_chat_group_conditions_line_214
	.globl gText_Rom_576D25
gText_Rom_576D25: @ 0x08576D25
	.string "すてき$"
	.if (. - gText_Rom_576D25) > 0x4
	.error "gText_Rom_576D25 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D25) < 0x4
	.space 0x4 - (. - gText_Rom_576D25)
	.endif
