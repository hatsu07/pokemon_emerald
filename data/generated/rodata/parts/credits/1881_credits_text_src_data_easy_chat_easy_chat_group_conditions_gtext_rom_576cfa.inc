	@ src/data/easy_chat/easy_chat_group_conditions.h:160 easy_chat_group_conditions_line_160
	.globl gText_Rom_576CFA
gText_Rom_576CFA: @ 0x08576CFA
	.string "けっこう$"
	.if (. - gText_Rom_576CFA) > 0x5
	.error "gText_Rom_576CFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CFA) < 0x5
	.space 0x5 - (. - gText_Rom_576CFA)
	.endif
