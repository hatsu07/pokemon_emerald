	@ src/data/easy_chat/easy_chat_group_feelings.h:37 gEasyChatWord_Boring (+1 aliases)
	.globl gText_Rom_5768A9
gText_Rom_5768A9: @ 0x085768A9
	.string "たいくつ$"
	.if (. - gText_Rom_5768A9) > 0x5
	.error "gText_Rom_5768A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768A9) < 0x5
	.space 0x5 - (. - gText_Rom_5768A9)
	.endif
