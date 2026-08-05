	@ src/data/easy_chat/easy_chat_group_actions.h:118 easy_chat_group_actions_line_118
	.globl gText_Rom_57713B
gText_Rom_57713B: @ 0x0857713B
	.string "かえる$"
	.if (. - gText_Rom_57713B) > 0x4
	.error "gText_Rom_57713B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57713B) < 0x4
	.space 0x4 - (. - gText_Rom_57713B)
	.endif
