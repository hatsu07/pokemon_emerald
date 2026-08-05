	@ src/data/easy_chat/easy_chat_group_adjectives.h:136 easy_chat_group_adjectives_line_136
	.globl gText_Rom_578224
gText_Rom_578224: @ 0x08578224
	.string "パラパラ$"
	.if (. - gText_Rom_578224) > 0x5
	.error "gText_Rom_578224 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578224) < 0x5
	.space 0x5 - (. - gText_Rom_578224)
	.endif
