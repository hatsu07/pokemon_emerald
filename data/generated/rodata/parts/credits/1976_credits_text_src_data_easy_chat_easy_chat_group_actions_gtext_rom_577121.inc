	@ src/data/easy_chat/easy_chat_group_actions.h:82 easy_chat_group_actions_line_82
	.globl gText_Rom_577121
gText_Rom_577121: @ 0x08577121
	.string "おこり$"
	.if (. - gText_Rom_577121) > 0x4
	.error "gText_Rom_577121 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577121) < 0x4
	.space 0x4 - (. - gText_Rom_577121)
	.endif
