	@ src/data/easy_chat/easy_chat_group_greetings.h:88 easy_chat_group_greetings_line_88
	.globl gText_Rom_5754A5
gText_Rom_5754A5: @ 0x085754A5
	.string "こらっ$"
	.if (. - gText_Rom_5754A5) > 0x4
	.error "gText_Rom_5754A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754A5) < 0x4
	.space 0x4 - (. - gText_Rom_5754A5)
	.endif
