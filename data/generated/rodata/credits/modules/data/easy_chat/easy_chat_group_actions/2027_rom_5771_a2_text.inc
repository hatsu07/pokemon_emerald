	@ src/data/easy_chat/easy_chat_group_actions.h:274 easy_chat_group_actions_line_274
	.globl gText_Rom_5771A2
gText_Rom_5771A2: @ 0x085771A2
	.string "できない$"
	.if (. - gText_Rom_5771A2) > 0x5
	.error "gText_Rom_5771A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771A2) < 0x5
	.space 0x5 - (. - gText_Rom_5771A2)
	.endif
