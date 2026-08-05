	@ src/data/easy_chat/easy_chat_group_status.h:310 easy_chat_group_status_line_310
	.globl gText_Rom_574A01
gText_Rom_574A01: @ 0x08574A01
	.string "たくましい$"
	.if (. - gText_Rom_574A01) > 0x6
	.error "gText_Rom_574A01 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A01) < 0x6
	.space 0x6 - (. - gText_Rom_574A01)
	.endif
