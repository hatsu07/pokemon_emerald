	@ src/data/easy_chat/easy_chat_group_actions.h:352 easy_chat_group_actions_line_352
	.globl gText_Rom_5771D5
gText_Rom_5771D5: @ 0x085771D5
	.string "はたらく$"
	.if (. - gText_Rom_5771D5) > 0x5
	.error "gText_Rom_5771D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771D5) < 0x5
	.space 0x5 - (. - gText_Rom_5771D5)
	.endif
