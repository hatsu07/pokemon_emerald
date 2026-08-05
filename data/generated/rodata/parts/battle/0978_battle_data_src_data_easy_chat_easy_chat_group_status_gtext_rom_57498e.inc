	@ src/data/easy_chat/easy_chat_group_status.h:190 easy_chat_group_status_line_190 (+3 aliases)
	.globl gText_Rom_57498E
gText_Rom_57498E: @ 0x0857498E
	.string "ゴースト$"
	.if (. - gText_Rom_57498E) > 0x5
	.error "gText_Rom_57498E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57498E) < 0x5
	.space 0x5 - (. - gText_Rom_57498E)
	.endif
