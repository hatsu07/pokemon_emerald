	@ src/data/easy_chat/easy_chat_group_conditions.h:376 easy_chat_group_conditions_line_376
	.globl gText_Rom_576D96
gText_Rom_576D96: @ 0x08576D96
	.string "まちがって$"
	.if (. - gText_Rom_576D96) > 0x6
	.error "gText_Rom_576D96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D96) < 0x6
	.space 0x6 - (. - gText_Rom_576D96)
	.endif
