	@ src/data/easy_chat/easy_chat_group_actions.h:46 easy_chat_group_actions_line_46
	.globl gText_Rom_57710C
gText_Rom_57710C: @ 0x0857710C
	.string "あるき$"
	.if (. - gText_Rom_57710C) > 0x4
	.error "gText_Rom_57710C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57710C) < 0x4
	.space 0x4 - (. - gText_Rom_57710C)
	.endif
