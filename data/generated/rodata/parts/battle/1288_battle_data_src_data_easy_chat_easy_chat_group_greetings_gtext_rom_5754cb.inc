	@ src/data/easy_chat/easy_chat_group_greetings.h:130 easy_chat_group_greetings_line_130
	.globl gText_Rom_5754CB
gText_Rom_5754CB: @ 0x085754CB
	.string "じゃーね$"
	.if (. - gText_Rom_5754CB) > 0x5
	.error "gText_Rom_5754CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754CB) < 0x5
	.space 0x5 - (. - gText_Rom_5754CB)
	.endif
