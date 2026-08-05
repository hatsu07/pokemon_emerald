	@ src/data/easy_chat/easy_chat_group_actions.h:124 easy_chat_group_actions_line_124
	.globl gText_Rom_57713F
gText_Rom_57713F: @ 0x0857713F
	.string "かたり$"
	.if (. - gText_Rom_57713F) > 0x4
	.error "gText_Rom_57713F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57713F) < 0x4
	.space 0x4 - (. - gText_Rom_57713F)
	.endif
