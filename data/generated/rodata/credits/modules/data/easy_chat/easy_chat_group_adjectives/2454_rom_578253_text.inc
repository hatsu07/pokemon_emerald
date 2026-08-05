	@ src/data/easy_chat/easy_chat_group_adjectives.h:190 easy_chat_group_adjectives_line_190
	.globl gText_Rom_578253
gText_Rom_578253: @ 0x08578253
	.string "めちゃめちゃ$"
	.if (. - gText_Rom_578253) > 0x7
	.error "gText_Rom_578253 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578253) < 0x7
	.space 0x7 - (. - gText_Rom_578253)
	.endif
