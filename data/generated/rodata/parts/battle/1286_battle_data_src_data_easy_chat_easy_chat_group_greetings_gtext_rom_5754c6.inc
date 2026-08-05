	@ src/data/easy_chat/easy_chat_group_greetings.h:124 easy_chat_group_greetings_line_124
	.globl gText_Rom_5754C6
gText_Rom_5754C6: @ 0x085754C6
	.string "しつれい$"
	.if (. - gText_Rom_5754C6) > 0x5
	.error "gText_Rom_5754C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754C6) < 0x5
	.space 0x5 - (. - gText_Rom_5754C6)
	.endif
