	@ src/data/easy_chat/easy_chat_group_adjectives.h:154 easy_chat_group_adjectives_line_154
	.globl gText_Rom_578235
gText_Rom_578235: @ 0x08578235
	.string "ふらふら$"
	.if (. - gText_Rom_578235) > 0x5
	.error "gText_Rom_578235 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578235) < 0x5
	.space 0x5 - (. - gText_Rom_578235)
	.endif
