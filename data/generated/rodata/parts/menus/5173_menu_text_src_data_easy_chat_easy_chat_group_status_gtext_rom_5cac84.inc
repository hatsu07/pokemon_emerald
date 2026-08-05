	@ src/data/easy_chat/easy_chat_group_status.h:136 easy_chat_group_status_line_136 (+2 aliases)
	.globl gText_Rom_5CAC84
gText_Rom_5CAC84: @ 0x085CAC84
	.string "かっこよさ$"
	.if (. - gText_Rom_5CAC84) > 0x6
	.error "gText_Rom_5CAC84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC84) < 0x6
	.space 0x6 - (. - gText_Rom_5CAC84)
	.endif
