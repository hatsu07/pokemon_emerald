	@ src/data/easy_chat/easy_chat_group_actions.h:334 easy_chat_group_actions_line_334
	.globl gText_Rom_5771C8
gText_Rom_5771C8: @ 0x085771C8
	.string "はしり$"
	.if (. - gText_Rom_5771C8) > 0x4
	.error "gText_Rom_5771C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771C8) < 0x4
	.space 0x4 - (. - gText_Rom_5771C8)
	.endif
