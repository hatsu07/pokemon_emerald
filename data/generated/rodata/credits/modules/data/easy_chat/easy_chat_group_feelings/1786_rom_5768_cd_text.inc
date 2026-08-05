	@ src/data/easy_chat/easy_chat_group_feelings.h:44 gEasyChatWord_Enjoys (+1 aliases)
	.globl gText_Rom_5768CD
gText_Rom_5768CD: @ 0x085768CD
	.string "たのしすぎ$"
	.if (. - gText_Rom_5768CD) > 0x6
	.error "gText_Rom_5768CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768CD) < 0x6
	.space 0x6 - (. - gText_Rom_5768CD)
	.endif
