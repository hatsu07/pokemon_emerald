	@ src/data/easy_chat/easy_chat_group_actions.h:262 easy_chat_group_actions_line_262
	.globl gText_Rom_577199
gText_Rom_577199: @ 0x08577199
	.string "つかえ$"
	.if (. - gText_Rom_577199) > 0x4
	.error "gText_Rom_577199 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577199) < 0x4
	.space 0x4 - (. - gText_Rom_577199)
	.endif
