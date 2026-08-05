	@ src/data/easy_chat/easy_chat_group_actions.h:34 easy_chat_group_actions_line_34
	.globl gText_Rom_577104
gText_Rom_577104: @ 0x08577104
	.string "あそぶ$"
	.if (. - gText_Rom_577104) > 0x4
	.error "gText_Rom_577104 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577104) < 0x4
	.space 0x4 - (. - gText_Rom_577104)
	.endif
