	@ src/data/easy_chat/easy_chat_group_actions.h:442 easy_chat_group_actions_line_442
	.globl gText_Rom_57720F
gText_Rom_57720F: @ 0x0857720F
	.string "ゆるせ$"
	.if (. - gText_Rom_57720F) > 0x4
	.error "gText_Rom_57720F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57720F) < 0x4
	.space 0x4 - (. - gText_Rom_57720F)
	.endif
