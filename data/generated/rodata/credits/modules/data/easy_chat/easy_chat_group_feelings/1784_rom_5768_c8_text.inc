	@ src/data/easy_chat/easy_chat_group_feelings.h:43 gEasyChatWord_Enjoy (+1 aliases)
	.globl gText_Rom_5768C8
gText_Rom_5768C8: @ 0x085768C8
	.string "たのしい$"
	.if (. - gText_Rom_5768C8) > 0x5
	.error "gText_Rom_5768C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768C8) < 0x5
	.space 0x5 - (. - gText_Rom_5768C8)
	.endif
