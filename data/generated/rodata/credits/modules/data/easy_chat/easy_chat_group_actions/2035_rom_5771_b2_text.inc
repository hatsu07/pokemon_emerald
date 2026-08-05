	@ src/data/easy_chat/easy_chat_group_actions.h:298 easy_chat_group_actions_line_298
	.globl gText_Rom_5771B2
gText_Rom_5771B2: @ 0x085771B2
	.string "なげる$"
	.if (. - gText_Rom_5771B2) > 0x4
	.error "gText_Rom_5771B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771B2) < 0x4
	.space 0x4 - (. - gText_Rom_5771B2)
	.endif
