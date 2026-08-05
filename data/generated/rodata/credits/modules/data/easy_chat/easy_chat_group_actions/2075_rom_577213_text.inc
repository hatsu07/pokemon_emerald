	@ src/data/easy_chat/easy_chat_group_actions.h:448 easy_chat_group_actions_line_448
	.globl gText_Rom_577213
gText_Rom_577213: @ 0x08577213
	.string "られない$"
	.if (. - gText_Rom_577213) > 0x5
	.error "gText_Rom_577213 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577213) < 0x5
	.space 0x5 - (. - gText_Rom_577213)
	.endif
