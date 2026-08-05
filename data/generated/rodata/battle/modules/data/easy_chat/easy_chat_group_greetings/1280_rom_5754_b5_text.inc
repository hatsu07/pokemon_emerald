	@ src/data/easy_chat/easy_chat_group_greetings.h:106 easy_chat_group_greetings_line_106 (+1 aliases)
	.globl gText_Rom_5754B5
gText_Rom_5754B5: @ 0x085754B5
	.string "サンキュー$"
	.if (. - gText_Rom_5754B5) > 0x6
	.error "gText_Rom_5754B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754B5) < 0x6
	.space 0x6 - (. - gText_Rom_5754B5)
	.endif
