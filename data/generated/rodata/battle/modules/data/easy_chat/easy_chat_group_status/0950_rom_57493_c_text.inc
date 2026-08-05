	@ src/data/easy_chat/easy_chat_group_status.h:100 easy_chat_group_status_line_100 (+1 aliases)
	.globl gText_Rom_57493C
gText_Rom_57493C: @ 0x0857493C
	.string "かくとう$"
	.if (. - gText_Rom_57493C) > 0x5
	.error "gText_Rom_57493C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57493C) < 0x5
	.space 0x5 - (. - gText_Rom_57493C)
	.endif
