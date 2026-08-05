	@ src/data/easy_chat/easy_chat_group_adjectives.h:58 easy_chat_group_adjectives_line_58
	.globl gText_Rom_5781E3
gText_Rom_5781E3: @ 0x085781E3
	.string "ごろごろ$"
	.if (. - gText_Rom_5781E3) > 0x5
	.error "gText_Rom_5781E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781E3) < 0x5
	.space 0x5 - (. - gText_Rom_5781E3)
	.endif
