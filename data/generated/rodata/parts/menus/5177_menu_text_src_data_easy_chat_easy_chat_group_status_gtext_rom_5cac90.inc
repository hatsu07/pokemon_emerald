	@ src/data/easy_chat/easy_chat_group_status.h:154 easy_chat_group_status_line_154 (+2 aliases)
	.globl gText_Rom_5CAC90
gText_Rom_5CAC90: @ 0x085CAC90
	.string "かわいさ$"
	.if (. - gText_Rom_5CAC90) > 0x5
	.error "gText_Rom_5CAC90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC90) < 0x5
	.space 0x5 - (. - gText_Rom_5CAC90)
	.endif
