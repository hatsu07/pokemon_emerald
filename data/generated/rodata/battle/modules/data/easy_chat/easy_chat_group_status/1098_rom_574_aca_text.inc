	@ src/data/easy_chat/easy_chat_group_status.h:544 easy_chat_group_status_line_544 (+1 aliases)
	.globl gText_Rom_574ACA
gText_Rom_574ACA: @ 0x08574ACA
	.string "ほのお$"
	.if (. - gText_Rom_574ACA) > 0x4
	.error "gText_Rom_574ACA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574ACA) < 0x4
	.space 0x4 - (. - gText_Rom_574ACA)
	.endif
