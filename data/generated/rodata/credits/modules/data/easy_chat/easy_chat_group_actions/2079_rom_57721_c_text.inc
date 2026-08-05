	@ src/data/easy_chat/easy_chat_group_actions.h:460 easy_chat_group_actions_line_460
	.globl gText_Rom_57721C
gText_Rom_57721C: @ 0x0857721C
	.string "わかる$"
	.if (. - gText_Rom_57721C) > 0x4
	.error "gText_Rom_57721C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57721C) < 0x4
	.space 0x4 - (. - gText_Rom_57721C)
	.endif
