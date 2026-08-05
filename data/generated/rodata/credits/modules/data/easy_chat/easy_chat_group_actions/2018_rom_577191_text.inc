	@ src/data/easy_chat/easy_chat_group_actions.h:250 easy_chat_group_actions_line_250
	.globl gText_Rom_577191
gText_Rom_577191: @ 0x08577191
	.string "たべる$"
	.if (. - gText_Rom_577191) > 0x4
	.error "gText_Rom_577191 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577191) < 0x4
	.space 0x4 - (. - gText_Rom_577191)
	.endif
