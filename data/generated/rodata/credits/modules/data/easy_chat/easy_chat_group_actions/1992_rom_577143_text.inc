	@ src/data/easy_chat/easy_chat_group_actions.h:130 easy_chat_group_actions_line_130 (+1 aliases)
	.globl gText_Rom_577143
gText_Rom_577143: @ 0x08577143
	.string "がまん$"
	.if (. - gText_Rom_577143) > 0x4
	.error "gText_Rom_577143 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577143) < 0x4
	.space 0x4 - (. - gText_Rom_577143)
	.endif
