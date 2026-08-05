	@ src/data/easy_chat/easy_chat_group_actions.h:220 easy_chat_group_actions_line_220
	.globl gText_Rom_57717D
gText_Rom_57717D: @ 0x0857717D
	.string "じまん$"
	.if (. - gText_Rom_57717D) > 0x4
	.error "gText_Rom_57717D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57717D) < 0x4
	.space 0x4 - (. - gText_Rom_57717D)
	.endif
