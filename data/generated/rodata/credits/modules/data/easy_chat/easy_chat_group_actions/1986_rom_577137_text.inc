	@ src/data/easy_chat/easy_chat_group_actions.h:112 easy_chat_group_actions_line_112
	.globl gText_Rom_577137
gText_Rom_577137: @ 0x08577137
	.string "おぼえ$"
	.if (. - gText_Rom_577137) > 0x4
	.error "gText_Rom_577137 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577137) < 0x4
	.space 0x4 - (. - gText_Rom_577137)
	.endif
