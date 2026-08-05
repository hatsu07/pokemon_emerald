	@ src/data/easy_chat/easy_chat_group_status.h:622 easy_chat_group_status_line_622
	.globl gText_Rom_574B14
gText_Rom_574B14: @ 0x08574B14
	.string "もよう$"
	.if (. - gText_Rom_574B14) > 0x4
	.error "gText_Rom_574B14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B14) < 0x4
	.space 0x4 - (. - gText_Rom_574B14)
	.endif
