	@ src/data/easy_chat/easy_chat_group_adjectives.h:16 easy_chat_group_adjectives_line_16
	.globl gText_Rom_5781BE
gText_Rom_5781BE: @ 0x085781BE
	.string "カチカチ$"
	.if (. - gText_Rom_5781BE) > 0x5
	.error "gText_Rom_5781BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781BE) < 0x5
	.space 0x5 - (. - gText_Rom_5781BE)
	.endif
