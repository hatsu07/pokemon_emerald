	@ src/data/easy_chat/easy_chat_group_hobbies.h:94 easy_chat_group_hobbies_line_94
	.globl gText_Rom_577902
gText_Rom_577902: @ 0x08577902
	.string "ゲーム$"
	.if (. - gText_Rom_577902) > 0x4
	.error "gText_Rom_577902 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577902) < 0x4
	.space 0x4 - (. - gText_Rom_577902)
	.endif
