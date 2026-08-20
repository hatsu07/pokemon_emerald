	@ src/data/easy_chat/easy_chat_group_actions.h:256 easy_chat_group_actions_line_256 (+1 aliases)
	.globl gText_Rom_5C93A3
gText_Rom_5C93A3: @ 0x085C93A3
	.string "つかう{EOS}"
	.if (. - gText_Rom_5C93A3) > 0x4
	.error "gText_Rom_5C93A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93A3) < 0x4
	.space 0x4 - (. - gText_Rom_5C93A3)
	.endif

