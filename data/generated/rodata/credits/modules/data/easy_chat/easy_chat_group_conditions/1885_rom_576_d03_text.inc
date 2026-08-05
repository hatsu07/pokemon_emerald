	@ src/data/easy_chat/easy_chat_group_conditions.h:172 easy_chat_group_conditions_line_172 (+1 aliases)
	.globl gText_Rom_576D03
gText_Rom_576D03: @ 0x08576D03
	.string "さいこう$"
	.if (. - gText_Rom_576D03) > 0x5
	.error "gText_Rom_576D03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D03) < 0x5
	.space 0x5 - (. - gText_Rom_576D03)
	.endif
