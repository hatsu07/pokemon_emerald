	@ src/data/easy_chat/easy_chat_group_actions.h:106 easy_chat_group_actions_line_106
	.globl gText_Rom_577132
gText_Rom_577132: @ 0x08577132
	.string "おねがい$"
	.if (. - gText_Rom_577132) > 0x5
	.error "gText_Rom_577132 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577132) < 0x5
	.space 0x5 - (. - gText_Rom_577132)
	.endif
