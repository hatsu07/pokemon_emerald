	@ src/data/easy_chat/easy_chat_group_actions.h:208 easy_chat_group_actions_line_208
	.globl gText_Rom_577175
gText_Rom_577175: @ 0x08577175
	.string "しない$"
	.if (. - gText_Rom_577175) > 0x4
	.error "gText_Rom_577175 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577175) < 0x4
	.space 0x4 - (. - gText_Rom_577175)
	.endif
