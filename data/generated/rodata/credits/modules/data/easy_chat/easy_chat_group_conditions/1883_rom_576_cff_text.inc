	@ src/data/easy_chat/easy_chat_group_conditions.h:166 easy_chat_group_conditions_line_166
	.globl gText_Rom_576CFF
gText_Rom_576CFF: @ 0x08576CFF
	.string "げんき$"
	.if (. - gText_Rom_576CFF) > 0x4
	.error "gText_Rom_576CFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CFF) < 0x4
	.space 0x4 - (. - gText_Rom_576CFF)
	.endif
