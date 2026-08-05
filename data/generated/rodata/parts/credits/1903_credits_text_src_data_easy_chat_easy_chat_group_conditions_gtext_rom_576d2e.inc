	@ src/data/easy_chat/easy_chat_group_conditions.h:226 easy_chat_group_conditions_line_226
	.globl gText_Rom_576D2E
gText_Rom_576D2E: @ 0x08576D2E
	.string "たかい$"
	.if (. - gText_Rom_576D2E) > 0x4
	.error "gText_Rom_576D2E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D2E) < 0x4
	.space 0x4 - (. - gText_Rom_576D2E)
	.endif
