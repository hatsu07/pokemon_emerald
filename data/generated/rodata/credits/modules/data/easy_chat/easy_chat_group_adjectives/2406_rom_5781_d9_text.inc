	@ src/data/easy_chat/easy_chat_group_adjectives.h:46 easy_chat_group_adjectives_line_46
	.globl gText_Rom_5781D9
gText_Rom_5781D9: @ 0x085781D9
	.string "グルグル$"
	.if (. - gText_Rom_5781D9) > 0x5
	.error "gText_Rom_5781D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781D9) < 0x5
	.space 0x5 - (. - gText_Rom_5781D9)
	.endif
