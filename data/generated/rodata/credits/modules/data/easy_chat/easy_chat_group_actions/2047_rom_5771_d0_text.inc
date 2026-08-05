	@ src/data/easy_chat/easy_chat_group_actions.h:346 easy_chat_group_actions_line_346
	.globl gText_Rom_5771D0
gText_Rom_5771D0: @ 0x085771D0
	.string "はたらき$"
	.if (. - gText_Rom_5771D0) > 0x5
	.error "gText_Rom_5771D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771D0) < 0x5
	.space 0x5 - (. - gText_Rom_5771D0)
	.endif
