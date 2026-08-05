	@ src/data/easy_chat/easy_chat_group_actions.h:136 easy_chat_group_actions_line_136
	.globl gText_Rom_577147
gText_Rom_577147: @ 0x08577147
	.string "かわいがって$"
	.if (. - gText_Rom_577147) > 0x7
	.error "gText_Rom_577147 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577147) < 0x7
	.space 0x7 - (. - gText_Rom_577147)
	.endif
