	@ src/data/easy_chat/easy_chat_group_actions.h:370 easy_chat_group_actions_line_370
	.globl gText_Rom_5771E2
gText_Rom_5771E2: @ 0x085771E2
	.string "はまって$"
	.if (. - gText_Rom_5771E2) > 0x5
	.error "gText_Rom_5771E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771E2) < 0x5
	.space 0x5 - (. - gText_Rom_5771E2)
	.endif
