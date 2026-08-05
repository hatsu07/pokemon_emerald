	@ src/data/easy_chat/easy_chat_group_status.h:376 easy_chat_group_status_line_376 (+2 aliases)
	.globl gText_Rom_574A3A
gText_Rom_574A3A: @ 0x08574A3A
	.string "ドラゴン$"
	.if (. - gText_Rom_574A3A) > 0x5
	.error "gText_Rom_574A3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A3A) < 0x5
	.space 0x5 - (. - gText_Rom_574A3A)
	.endif
