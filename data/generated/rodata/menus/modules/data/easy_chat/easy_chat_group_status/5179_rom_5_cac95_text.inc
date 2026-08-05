	@ src/data/easy_chat/easy_chat_group_status.h:118 easy_chat_group_status_line_118 (+2 aliases)
	.globl gText_Rom_5CAC95
gText_Rom_5CAC95: @ 0x085CAC95
	.string "かしこさ$"
	.if (. - gText_Rom_5CAC95) > 0x5
	.error "gText_Rom_5CAC95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC95) < 0x5
	.space 0x5 - (. - gText_Rom_5CAC95)
	.endif
