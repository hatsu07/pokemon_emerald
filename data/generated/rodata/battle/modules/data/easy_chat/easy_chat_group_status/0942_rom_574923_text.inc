	@ src/data/easy_chat/easy_chat_group_status.h:76 easy_chat_group_status_line_76 (+2 aliases)
	.globl gText_Rom_574923
gText_Rom_574923: @ 0x08574923
	.string "うつくしさ$"
	.if (. - gText_Rom_574923) > 0x6
	.error "gText_Rom_574923 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574923) < 0x6
	.space 0x6 - (. - gText_Rom_574923)
	.endif
