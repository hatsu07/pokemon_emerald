	@ src/data/easy_chat/easy_chat_group_status.h:316 easy_chat_group_status_line_316 (+2 aliases)
	.globl gText_Rom_5CAC9A
gText_Rom_5CAC9A: @ 0x085CAC9A
	.string "たくましさ$"
	.if (. - gText_Rom_5CAC9A) > 0x6
	.error "gText_Rom_5CAC9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC9A) < 0x6
	.space 0x6 - (. - gText_Rom_5CAC9A)
	.endif
