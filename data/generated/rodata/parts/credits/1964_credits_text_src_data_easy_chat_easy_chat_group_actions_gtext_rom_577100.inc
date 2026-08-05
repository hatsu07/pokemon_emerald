	@ src/data/easy_chat/easy_chat_group_actions.h:28 easy_chat_group_actions_line_28
	.globl gText_Rom_577100
gText_Rom_577100: @ 0x08577100
	.string "あそび$"
	.if (. - gText_Rom_577100) > 0x4
	.error "gText_Rom_577100 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577100) < 0x4
	.space 0x4 - (. - gText_Rom_577100)
	.endif
