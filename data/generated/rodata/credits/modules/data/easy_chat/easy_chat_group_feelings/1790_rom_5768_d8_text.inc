	@ src/data/easy_chat/easy_chat_group_feelings.h:46 gEasyChatWord_Lacking (+1 aliases)
	.globl gText_Rom_5768D8
gText_Rom_5768D8: @ 0x085768D8
	.string "たりない$"
	.if (. - gText_Rom_5768D8) > 0x5
	.error "gText_Rom_5768D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768D8) < 0x5
	.space 0x5 - (. - gText_Rom_5768D8)
	.endif
