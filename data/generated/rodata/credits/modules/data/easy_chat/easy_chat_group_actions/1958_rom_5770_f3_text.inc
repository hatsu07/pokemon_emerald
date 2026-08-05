	@ src/data/easy_chat/easy_chat_group_actions.h:10 easy_chat_group_actions_line_10
	.globl gText_Rom_5770F3
gText_Rom_5770F3: @ 0x085770F3
	.string "あきらめ$"
	.if (. - gText_Rom_5770F3) > 0x5
	.error "gText_Rom_5770F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5770F3) < 0x5
	.space 0x5 - (. - gText_Rom_5770F3)
	.endif
