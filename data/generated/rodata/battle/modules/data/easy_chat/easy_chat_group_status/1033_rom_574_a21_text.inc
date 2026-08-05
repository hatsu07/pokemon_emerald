	@ src/data/easy_chat/easy_chat_group_status.h:346 easy_chat_group_status_line_346 (+1 aliases)
	.globl gText_Rom_574A21
gText_Rom_574A21: @ 0x08574A21
	.string "でんき$"
	.if (. - gText_Rom_574A21) > 0x4
	.error "gText_Rom_574A21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A21) < 0x4
	.space 0x4 - (. - gText_Rom_574A21)
	.endif
