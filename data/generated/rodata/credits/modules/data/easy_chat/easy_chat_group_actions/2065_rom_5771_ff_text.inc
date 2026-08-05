	@ src/data/easy_chat/easy_chat_group_actions.h:418 easy_chat_group_actions_line_418
	.globl gText_Rom_5771FF
gText_Rom_5771FF: @ 0x085771FF
	.string "めざす$"
	.if (. - gText_Rom_5771FF) > 0x4
	.error "gText_Rom_5771FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771FF) < 0x4
	.space 0x4 - (. - gText_Rom_5771FF)
	.endif
