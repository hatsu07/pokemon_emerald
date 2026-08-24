	@ src/data/abilities.h:35 abilities_line_35 (+1 aliases)
	.globl gText_Rom_574960
gText_Rom_574960: @ 0x08574960
	.string "カブトアーマー{EOS}"
	.if (. - gText_Rom_574960) > 0x8
	.error "gText_Rom_574960 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574960) < 0x8
	.space 0x8 - (. - gText_Rom_574960)
	.endif
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
