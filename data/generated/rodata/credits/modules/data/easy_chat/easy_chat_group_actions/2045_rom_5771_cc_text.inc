	@ src/data/easy_chat/easy_chat_group_actions.h:340 easy_chat_group_actions_line_340
	.globl gText_Rom_5771CC
gText_Rom_5771CC: @ 0x085771CC
	.string "はしる$"
	.if (. - gText_Rom_5771CC) > 0x4
	.error "gText_Rom_5771CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771CC) < 0x4
	.space 0x4 - (. - gText_Rom_5771CC)
	.endif
