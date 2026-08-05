	@ src/data/easy_chat/easy_chat_group_actions.h:280 easy_chat_group_actions_line_280
	.globl gText_Rom_5771A7
gText_Rom_5771A7: @ 0x085771A7
	.string "できる$"
	.if (. - gText_Rom_5771A7) > 0x4
	.error "gText_Rom_5771A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771A7) < 0x4
	.space 0x4 - (. - gText_Rom_5771A7)
	.endif
