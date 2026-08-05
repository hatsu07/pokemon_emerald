	@ src/data/easy_chat/easy_chat_group_conditions.h:256 easy_chat_group_conditions_line_256
	.globl gText_Rom_576D43
gText_Rom_576D43: @ 0x08576D43
	.string "つかれ$"
	.if (. - gText_Rom_576D43) > 0x4
	.error "gText_Rom_576D43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D43) < 0x4
	.space 0x4 - (. - gText_Rom_576D43)
	.endif
