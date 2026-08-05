	@ src/data/easy_chat/easy_chat_group_adjectives.h:4 easy_chat_group_adjectives_line_4
	.globl gText_Rom_5781B4
gText_Rom_5781B4: @ 0x085781B4
	.string "うろうろ$"
	.if (. - gText_Rom_5781B4) > 0x5
	.error "gText_Rom_5781B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781B4) < 0x5
	.space 0x5 - (. - gText_Rom_5781B4)
	.endif
