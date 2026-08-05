	@ src/data/easy_chat/easy_chat_group_feelings.h:40 gEasyChatWord_AllRight (+1 aliases)
	.globl gText_Rom_5768B7
gText_Rom_5768B7: @ 0x085768B7
	.string "だいじょうぶ$"
	.if (. - gText_Rom_5768B7) > 0x7
	.error "gText_Rom_5768B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768B7) < 0x7
	.space 0x7 - (. - gText_Rom_5768B7)
	.endif
