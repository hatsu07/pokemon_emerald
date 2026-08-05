	@ src/data/easy_chat/easy_chat_group_actions.h:376 easy_chat_group_actions_line_376
	.globl gText_Rom_5771E7
gText_Rom_5771E7: @ 0x085771E7
	.string "ぶつけ$"
	.if (. - gText_Rom_5771E7) > 0x4
	.error "gText_Rom_5771E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771E7) < 0x4
	.space 0x4 - (. - gText_Rom_5771E7)
	.endif
