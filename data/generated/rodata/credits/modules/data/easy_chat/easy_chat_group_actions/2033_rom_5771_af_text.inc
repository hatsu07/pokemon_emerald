	@ src/data/easy_chat/easy_chat_group_actions.h:292 easy_chat_group_actions_line_292 (+2 aliases)
	.globl gText_Rom_5771AF
gText_Rom_5771AF: @ 0x085771AF
	.string "でる$"
	.if (. - gText_Rom_5771AF) > 0x3
	.error "gText_Rom_5771AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771AF) < 0x3
	.space 0x3 - (. - gText_Rom_5771AF)
	.endif
