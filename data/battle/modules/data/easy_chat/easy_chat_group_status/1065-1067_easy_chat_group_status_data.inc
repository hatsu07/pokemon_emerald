	@ src/data/easy_chat/easy_chat_group_status.h:448 easy_chat_group_status_line_448
	.globl gText_Rom_574A76
gText_Rom_574A76: @ 0x08574A76
	.string "ひかる{EOS}"
	.if (. - gText_Rom_574A76) > 0x4
	.error "gText_Rom_574A76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A76) < 0x4
	.space 0x4 - (. - gText_Rom_574A76)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:454 easy_chat_group_status_line_454 (+2 aliases)
	.globl gText_Rom_574A7A
gText_Rom_574A7A: @ 0x08574A7A
	.string "ひこう{EOS}"
	.if (. - gText_Rom_574A7A) > 0x4
	.error "gText_Rom_574A7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A7A) < 0x4
	.space 0x4 - (. - gText_Rom_574A7A)
	.endif
