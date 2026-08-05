	@ src/data/easy_chat/easy_chat_group_actions.h:40 easy_chat_group_actions_line_40
	.globl gText_Rom_577108
gText_Rom_577108: @ 0x08577108
	.string "あつめ$"
	.if (. - gText_Rom_577108) > 0x4
	.error "gText_Rom_577108 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577108) < 0x4
	.space 0x4 - (. - gText_Rom_577108)
	.endif
