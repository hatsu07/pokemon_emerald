	@ src/data/easy_chat/easy_chat_group_people.h:394 easy_chat_group_people_line_394
	.globl gText_Rom_57583F
gText_Rom_57583F: @ 0x0857583F
	.string "みんなは$"
	.if (. - gText_Rom_57583F) > 0x5
	.error "gText_Rom_57583F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57583F) < 0x5
	.space 0x5 - (. - gText_Rom_57583F)
	.endif

