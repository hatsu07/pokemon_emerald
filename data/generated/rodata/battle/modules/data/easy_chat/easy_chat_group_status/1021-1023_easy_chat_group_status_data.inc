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

	@ src/data/easy_chat/easy_chat_group_status.h:316 easy_chat_group_status_line_316 (+2 aliases)
	.globl gText_Rom_574A07
gText_Rom_574A07: @ 0x08574A07
	.string "たくましさ$"
	.if (. - gText_Rom_574A07) > 0x6
	.error "gText_Rom_574A07 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A07) < 0x6
	.space 0x6 - (. - gText_Rom_574A07)
	.endif
