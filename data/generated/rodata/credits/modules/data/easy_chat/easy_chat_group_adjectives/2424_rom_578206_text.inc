	@ src/data/easy_chat/easy_chat_group_adjectives.h:100 easy_chat_group_adjectives_line_100
	.globl gText_Rom_578206
gText_Rom_578206: @ 0x08578206
	.string "どんどん$"
	.if (. - gText_Rom_578206) > 0x5
	.error "gText_Rom_578206 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578206) < 0x5
	.space 0x5 - (. - gText_Rom_578206)
	.endif
