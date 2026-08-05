	@ src/data/easy_chat/easy_chat_group_adjectives.h:184 easy_chat_group_adjectives_line_184
	.globl gText_Rom_57824E
gText_Rom_57824E: @ 0x0857824E
	.string "まだまだ$"
	.if (. - gText_Rom_57824E) > 0x5
	.error "gText_Rom_57824E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57824E) < 0x5
	.space 0x5 - (. - gText_Rom_57824E)
	.endif
