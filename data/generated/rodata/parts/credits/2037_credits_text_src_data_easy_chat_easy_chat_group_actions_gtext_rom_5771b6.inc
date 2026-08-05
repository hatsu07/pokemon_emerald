	@ src/data/easy_chat/easy_chat_group_actions.h:304 easy_chat_group_actions_line_304
	.globl gText_Rom_5771B6
gText_Rom_5771B6: @ 0x085771B6
	.string "なやみ$"
	.if (. - gText_Rom_5771B6) > 0x4
	.error "gText_Rom_5771B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771B6) < 0x4
	.space 0x4 - (. - gText_Rom_5771B6)
	.endif
