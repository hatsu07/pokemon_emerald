	@ src/data/easy_chat/easy_chat_group_adjectives.h:22 easy_chat_group_adjectives_line_22
	.globl gText_Rom_5781C3
gText_Rom_5781C3: @ 0x085781C3
	.string "がつがつ$"
	.if (. - gText_Rom_5781C3) > 0x5
	.error "gText_Rom_5781C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781C3) < 0x5
	.space 0x5 - (. - gText_Rom_5781C3)
	.endif
