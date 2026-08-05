	@ src/data/easy_chat/easy_chat_group_actions.h:394 easy_chat_group_actions_line_394
	.globl gText_Rom_5771F1
gText_Rom_5771F1: @ 0x085771F1
	.string "まくり$"
	.if (. - gText_Rom_5771F1) > 0x4
	.error "gText_Rom_5771F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771F1) < 0x4
	.space 0x4 - (. - gText_Rom_5771F1)
	.endif
