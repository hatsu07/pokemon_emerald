	@ src/data/easy_chat/easy_chat_group_actions.h:190 easy_chat_group_actions_line_190
	.globl gText_Rom_57716A
gText_Rom_57716A: @ 0x0857716A
	.string "さわぎ$"
	.if (. - gText_Rom_57716A) > 0x4
	.error "gText_Rom_57716A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57716A) < 0x4
	.space 0x4 - (. - gText_Rom_57716A)
	.endif
