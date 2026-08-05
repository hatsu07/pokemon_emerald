	@ src/data/easy_chat/easy_chat_group_feelings.h:39 gEasyChatWord_Cares (+1 aliases)
	.globl gText_Rom_5768B2
gText_Rom_5768B2: @ 0x085768B2
	.string "だいじに$"
	.if (. - gText_Rom_5768B2) > 0x5
	.error "gText_Rom_5768B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768B2) < 0x5
	.space 0x5 - (. - gText_Rom_5768B2)
	.endif
