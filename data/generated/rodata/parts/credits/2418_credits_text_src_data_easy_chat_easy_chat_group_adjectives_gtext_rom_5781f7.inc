	@ src/data/easy_chat/easy_chat_group_adjectives.h:82 easy_chat_group_adjectives_line_82
	.globl gText_Rom_5781F7
gText_Rom_5781F7: @ 0x085781F7
	.string "ダメダメ$"
	.if (. - gText_Rom_5781F7) > 0x5
	.error "gText_Rom_5781F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781F7) < 0x5
	.space 0x5 - (. - gText_Rom_5781F7)
	.endif
