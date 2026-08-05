	@ src/data/easy_chat/easy_chat_group_adjectives.h:10 easy_chat_group_adjectives_line_10
	.globl gText_Rom_5781B9
gText_Rom_5781B9: @ 0x085781B9
	.string "がたがた$"
	.if (. - gText_Rom_5781B9) > 0x5
	.error "gText_Rom_5781B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781B9) < 0x5
	.space 0x5 - (. - gText_Rom_5781B9)
	.endif
