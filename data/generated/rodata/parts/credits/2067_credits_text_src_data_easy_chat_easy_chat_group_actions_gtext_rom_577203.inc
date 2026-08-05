	@ src/data/easy_chat/easy_chat_group_actions.h:424 easy_chat_group_actions_line_424
	.globl gText_Rom_577203
gText_Rom_577203: @ 0x08577203
	.string "もって$"
	.if (. - gText_Rom_577203) > 0x4
	.error "gText_Rom_577203 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577203) < 0x4
	.space 0x4 - (. - gText_Rom_577203)
	.endif
