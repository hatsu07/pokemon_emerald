	@ src/data/easy_chat/easy_chat_group_conditions.h:118 easy_chat_group_conditions_line_118
	.globl gText_Rom_576CD6
gText_Rom_576CD6: @ 0x08576CD6
	.string "おおきい$"
	.if (. - gText_Rom_576CD6) > 0x5
	.error "gText_Rom_576CD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CD6) < 0x5
	.space 0x5 - (. - gText_Rom_576CD6)
	.endif
