	@ src/data/easy_chat/easy_chat_group_adjectives.h:28 easy_chat_group_adjectives_line_28
	.globl gText_Rom_5781C8
gText_Rom_5781C8: @ 0x085781C8
	.string "ぎゅうぎゅう$"
	.if (. - gText_Rom_5781C8) > 0x7
	.error "gText_Rom_5781C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781C8) < 0x7
	.space 0x7 - (. - gText_Rom_5781C8)
	.endif
