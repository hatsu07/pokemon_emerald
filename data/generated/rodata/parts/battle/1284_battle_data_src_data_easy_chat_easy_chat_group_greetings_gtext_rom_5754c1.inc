	@ src/data/easy_chat/easy_chat_group_greetings.h:118 easy_chat_group_greetings_line_118
	.globl gText_Rom_5754C1
gText_Rom_5754C1: @ 0x085754C1
	.string "しっけい$"
	.if (. - gText_Rom_5754C1) > 0x5
	.error "gText_Rom_5754C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754C1) < 0x5
	.space 0x5 - (. - gText_Rom_5754C1)
	.endif
