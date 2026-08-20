	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5C9438
gText_Rom_5C9438: @ 0x085C9438
	.string "あげる{EOS}"
	.if (. - gText_Rom_5C9438) > 0x4
	.error "gText_Rom_5C9438 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9438) < 0x4
	.space 0x4 - (. - gText_Rom_5C9438)
	.endif
