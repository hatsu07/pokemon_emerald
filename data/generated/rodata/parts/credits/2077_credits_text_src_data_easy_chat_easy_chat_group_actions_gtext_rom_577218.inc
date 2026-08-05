	@ src/data/easy_chat/easy_chat_group_actions.h:454 easy_chat_group_actions_line_454
	.globl gText_Rom_577218
gText_Rom_577218: @ 0x08577218
	.string "られる$"
	.if (. - gText_Rom_577218) > 0x4
	.error "gText_Rom_577218 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577218) < 0x4
	.space 0x4 - (. - gText_Rom_577218)
	.endif
