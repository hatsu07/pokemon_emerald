
	@ src/data/easy_chat/easy_chat_group_status.h:136 easy_chat_group_status_line_136 (+2 aliases)
	.globl gStdString_Cool
gStdString_Cool: @ 0x085CAC84
	.string "かっこよさ{EOS}"
	.if (. - gStdString_Cool) > 0x6
	.error "gStdString_Cool may not grow beyond its original slot"
	.endif
	.if (. - gStdString_Cool) < 0x6
	.space 0x6 - (. - gStdString_Cool)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:76 easy_chat_group_status_line_76 (+2 aliases)
	.globl gStdString_Beauty
gStdString_Beauty: @ 0x085CAC8A
	.string "うつくしさ{EOS}"
	.if (. - gStdString_Beauty) > 0x6
	.error "gStdString_Beauty may not grow beyond its original slot"
	.endif
	.if (. - gStdString_Beauty) < 0x6
	.space 0x6 - (. - gStdString_Beauty)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:154 easy_chat_group_status_line_154 (+2 aliases)
	.globl gStdString_Cute
gStdString_Cute: @ 0x085CAC90
	.string "かわいさ{EOS}"
	.if (. - gStdString_Cute) > 0x5
	.error "gStdString_Cute may not grow beyond its original slot"
	.endif
	.if (. - gStdString_Cute) < 0x5
	.space 0x5 - (. - gStdString_Cute)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:118 easy_chat_group_status_line_118 (+2 aliases)
	.globl gStdString_Smart
gStdString_Smart: @ 0x085CAC95
	.string "かしこさ{EOS}"
	.if (. - gStdString_Smart) > 0x5
	.error "gStdString_Smart may not grow beyond its original slot"
	.endif
	.if (. - gStdString_Smart) < 0x5
	.space 0x5 - (. - gStdString_Smart)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:316 easy_chat_group_status_line_316 (+2 aliases)
	.globl gStdString_Tough
gStdString_Tough: @ 0x085CAC9A
	.string "たくましさ{EOS}"
	.if (. - gStdString_Tough) > 0x6
	.error "gStdString_Tough may not grow beyond its original slot"
	.endif
	.if (. - gStdString_Tough) < 0x6
	.space 0x6 - (. - gStdString_Tough)
	.endif
