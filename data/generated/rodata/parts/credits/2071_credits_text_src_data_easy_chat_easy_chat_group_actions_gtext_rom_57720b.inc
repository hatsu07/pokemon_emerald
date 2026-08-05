	@ src/data/easy_chat/easy_chat_group_actions.h:436 easy_chat_group_actions_line_436
	.globl gText_Rom_57720B
gText_Rom_57720B: @ 0x0857720B
	.string "ゆるす$"
	.if (. - gText_Rom_57720B) > 0x4
	.error "gText_Rom_57720B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57720B) < 0x4
	.space 0x4 - (. - gText_Rom_57720B)
	.endif
