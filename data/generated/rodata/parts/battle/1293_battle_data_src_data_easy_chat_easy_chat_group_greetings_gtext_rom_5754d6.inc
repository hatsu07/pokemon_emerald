	@ src/data/easy_chat/easy_chat_group_greetings.h:142 easy_chat_group_greetings_line_142
	.globl gText_Rom_5754D6
gText_Rom_5754D6: @ 0x085754D6
	.string "それじゃ$"
	.if (. - gText_Rom_5754D6) > 0x5
	.error "gText_Rom_5754D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754D6) < 0x5
	.space 0x5 - (. - gText_Rom_5754D6)
	.endif
