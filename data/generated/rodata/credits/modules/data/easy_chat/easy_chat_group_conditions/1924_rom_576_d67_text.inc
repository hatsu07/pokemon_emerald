	@ src/data/easy_chat/easy_chat_group_conditions.h:304 easy_chat_group_conditions_line_304
	.globl gText_Rom_576D67
gText_Rom_576D67: @ 0x08576D67
	.string "なって$"
	.if (. - gText_Rom_576D67) > 0x4
	.error "gText_Rom_576D67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D67) < 0x4
	.space 0x4 - (. - gText_Rom_576D67)
	.endif
