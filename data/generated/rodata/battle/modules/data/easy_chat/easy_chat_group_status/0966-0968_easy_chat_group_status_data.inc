	@ src/data/easy_chat/easy_chat_group_status.h:148 easy_chat_group_status_line_148
	.globl gText_Rom_574968
gText_Rom_574968: @ 0x08574968
	.string "かわいい{EOS}"
	.if (. - gText_Rom_574968) > 0x5
	.error "gText_Rom_574968 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574968) < 0x5
	.space 0x5 - (. - gText_Rom_574968)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:154 easy_chat_group_status_line_154 (+2 aliases)
	.globl gText_Rom_57496D
gText_Rom_57496D: @ 0x0857496D
	.string "かわいさ{EOS}"
	.if (. - gText_Rom_57496D) > 0x5
	.error "gText_Rom_57496D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57496D) < 0x5
	.space 0x5 - (. - gText_Rom_57496D)
	.endif
