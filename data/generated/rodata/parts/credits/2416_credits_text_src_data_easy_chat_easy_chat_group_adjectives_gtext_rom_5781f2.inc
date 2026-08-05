	@ src/data/easy_chat/easy_chat_group_adjectives.h:76 easy_chat_group_adjectives_line_76
	.globl gText_Rom_5781F2
gText_Rom_5781F2: @ 0x085781F2
	.string "ぜんぜん$"
	.if (. - gText_Rom_5781F2) > 0x5
	.error "gText_Rom_5781F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781F2) < 0x5
	.space 0x5 - (. - gText_Rom_5781F2)
	.endif
