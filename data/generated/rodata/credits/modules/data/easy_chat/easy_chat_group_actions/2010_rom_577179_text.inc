	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_577179
gText_Rom_577179: @ 0x08577179
	.string "しまう$"
	.if (. - gText_Rom_577179) > 0x4
	.error "gText_Rom_577179 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577179) < 0x4
	.space 0x4 - (. - gText_Rom_577179)
	.endif
