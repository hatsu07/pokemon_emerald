	@ src/data/easy_chat/easy_chat_group_feelings.h:38 gEasyChatWord_Care (+1 aliases)
	.globl gText_Rom_5768AE
gText_Rom_5768AE: @ 0x085768AE
	.string "だいじ$"
	.if (. - gText_Rom_5768AE) > 0x4
	.error "gText_Rom_5768AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768AE) < 0x4
	.space 0x4 - (. - gText_Rom_5768AE)
	.endif
