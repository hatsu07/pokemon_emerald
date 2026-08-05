	@ src/data/easy_chat/easy_chat_group_status.h:424 easy_chat_group_status_line_424 (+1 aliases)
	.globl gText_Rom_574A63
gText_Rom_574A63: @ 0x08574A63
	.string "はがね$"
	.if (. - gText_Rom_574A63) > 0x4
	.error "gText_Rom_574A63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A63) < 0x4
	.space 0x4 - (. - gText_Rom_574A63)
	.endif
