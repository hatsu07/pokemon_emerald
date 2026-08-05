	@ src/data/easy_chat/easy_chat_group_adjectives.h:40 easy_chat_group_adjectives_line_40
	.globl gText_Rom_5781D4
gText_Rom_5781D4: @ 0x085781D4
	.string "くるくる$"
	.if (. - gText_Rom_5781D4) > 0x5
	.error "gText_Rom_5781D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781D4) < 0x5
	.space 0x5 - (. - gText_Rom_5781D4)
	.endif
