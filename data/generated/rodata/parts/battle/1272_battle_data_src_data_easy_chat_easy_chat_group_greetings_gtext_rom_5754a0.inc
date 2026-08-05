	@ src/data/easy_chat/easy_chat_group_greetings.h:82 easy_chat_group_greetings_line_82
	.globl gText_Rom_5754A0
gText_Rom_5754A0: @ 0x085754A0
	.string "ごめんね$"
	.if (. - gText_Rom_5754A0) > 0x5
	.error "gText_Rom_5754A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754A0) < 0x5
	.space 0x5 - (. - gText_Rom_5754A0)
	.endif
