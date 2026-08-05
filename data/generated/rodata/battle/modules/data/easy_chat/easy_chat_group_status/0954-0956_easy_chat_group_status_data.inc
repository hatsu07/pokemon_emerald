	@ src/data/easy_chat/easy_chat_group_status.h:112 easy_chat_group_status_line_112
	.globl gText_Rom_574946
gText_Rom_574946: @ 0x08574946
	.string "かしこい$"
	.if (. - gText_Rom_574946) > 0x5
	.error "gText_Rom_574946 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574946) < 0x5
	.space 0x5 - (. - gText_Rom_574946)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:118 easy_chat_group_status_line_118 (+2 aliases)
	.globl gText_Rom_57494B
gText_Rom_57494B: @ 0x0857494B
	.string "かしこさ$"
	.if (. - gText_Rom_57494B) > 0x5
	.error "gText_Rom_57494B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57494B) < 0x5
	.space 0x5 - (. - gText_Rom_57494B)
	.endif
