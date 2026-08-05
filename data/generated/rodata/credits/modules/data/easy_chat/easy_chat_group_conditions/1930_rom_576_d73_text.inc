	@ src/data/easy_chat/easy_chat_group_conditions.h:322 easy_chat_group_conditions_line_322
	.globl gText_Rom_576D73
gText_Rom_576D73: @ 0x08576D73
	.string "ひくい$"
	.if (. - gText_Rom_576D73) > 0x4
	.error "gText_Rom_576D73 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D73) < 0x4
	.space 0x4 - (. - gText_Rom_576D73)
	.endif
