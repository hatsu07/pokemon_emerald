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

	@ src/data/easy_chat/easy_chat_group_status.h:76 easy_chat_group_status_line_76 (+2 aliases)
	.globl gText_Rom_5CAC8A
gText_Rom_5CAC8A: @ 0x085CAC8A
	.string "うつくしさ$"
	.if (. - gText_Rom_5CAC8A) > 0x6
	.error "gText_Rom_5CAC8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC8A) < 0x6
	.space 0x6 - (. - gText_Rom_5CAC8A)
	.endif

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
