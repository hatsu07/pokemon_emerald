	@ src/data/easy_chat/easy_chat_group_actions.h:256 easy_chat_group_actions_line_256 (+1 aliases)
	.globl gText_Rom_577195
gText_Rom_577195: @ 0x08577195
	.string "つかう$"
	.if (. - gText_Rom_577195) > 0x4
	.error "gText_Rom_577195 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577195) < 0x4
	.space 0x4 - (. - gText_Rom_577195)
	.endif
