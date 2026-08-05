	@ src/data/easy_chat/easy_chat_group_conditions.h:346 easy_chat_group_conditions_line_346
	.globl gText_Rom_576D83
gText_Rom_576D83: @ 0x08576D83
	.string "ひみつ$"
	.if (. - gText_Rom_576D83) > 0x4
	.error "gText_Rom_576D83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D83) < 0x4
	.space 0x4 - (. - gText_Rom_576D83)
	.endif
