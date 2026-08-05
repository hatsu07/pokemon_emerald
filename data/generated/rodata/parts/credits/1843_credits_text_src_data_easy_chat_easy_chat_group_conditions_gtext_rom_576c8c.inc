	@ src/data/easy_chat/easy_chat_group_conditions.h:10 easy_chat_group_conditions_line_10
	.globl gText_Rom_576C8C
gText_Rom_576C8C: @ 0x08576C8C
	.string "あった$"
	.if (. - gText_Rom_576C8C) > 0x4
	.error "gText_Rom_576C8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576C8C) < 0x4
	.space 0x4 - (. - gText_Rom_576C8C)
	.endif
