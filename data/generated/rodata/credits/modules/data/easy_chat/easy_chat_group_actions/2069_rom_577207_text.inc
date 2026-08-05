	@ src/data/easy_chat/easy_chat_group_actions.h:430 easy_chat_group_actions_line_430
	.globl gText_Rom_577207
gText_Rom_577207: @ 0x08577207
	.string "ゆずる$"
	.if (. - gText_Rom_577207) > 0x4
	.error "gText_Rom_577207 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577207) < 0x4
	.space 0x4 - (. - gText_Rom_577207)
	.endif
