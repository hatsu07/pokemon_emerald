	@ src/data/easy_chat/easy_chat_group_feelings.h:48 gEasyChatWord_Hard (+1 aliases)
	.globl gText_Rom_5768E3
gText_Rom_5768E3: @ 0x085768E3
	.string "つらい$"
	.if (. - gText_Rom_5768E3) > 0x4
	.error "gText_Rom_5768E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768E3) < 0x4
	.space 0x4 - (. - gText_Rom_5768E3)
	.endif
