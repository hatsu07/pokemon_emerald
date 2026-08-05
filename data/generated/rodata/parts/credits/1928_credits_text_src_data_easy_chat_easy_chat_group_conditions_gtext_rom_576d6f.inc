	@ src/data/easy_chat/easy_chat_group_conditions.h:316 easy_chat_group_conditions_line_316 (+1 aliases)
	.globl gText_Rom_576D6F
gText_Rom_576D6F: @ 0x08576D6F
	.string "はやい$"
	.if (. - gText_Rom_576D6F) > 0x4
	.error "gText_Rom_576D6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D6F) < 0x4
	.space 0x4 - (. - gText_Rom_576D6F)
	.endif
