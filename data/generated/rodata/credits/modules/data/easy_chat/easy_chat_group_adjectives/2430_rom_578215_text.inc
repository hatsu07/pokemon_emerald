	@ src/data/easy_chat/easy_chat_group_adjectives.h:118 easy_chat_group_adjectives_line_118
	.globl gText_Rom_578215
gText_Rom_578215: @ 0x08578215
	.string "はあはあ$"
	.if (. - gText_Rom_578215) > 0x5
	.error "gText_Rom_578215 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578215) < 0x5
	.space 0x5 - (. - gText_Rom_578215)
	.endif
