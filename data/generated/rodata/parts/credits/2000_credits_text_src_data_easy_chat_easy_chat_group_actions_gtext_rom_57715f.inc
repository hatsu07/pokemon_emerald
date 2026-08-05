	@ src/data/easy_chat/easy_chat_group_actions.h:172 easy_chat_group_actions_line_172
	.globl gText_Rom_57715F
gText_Rom_57715F: @ 0x0857715F
	.string "こない$"
	.if (. - gText_Rom_57715F) > 0x4
	.error "gText_Rom_57715F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57715F) < 0x4
	.space 0x4 - (. - gText_Rom_57715F)
	.endif
