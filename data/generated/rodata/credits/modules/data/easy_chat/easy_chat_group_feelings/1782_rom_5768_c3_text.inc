	@ src/data/easy_chat/easy_chat_group_feelings.h:42 gEasyChatWord_Disaster (+1 aliases)
	.globl gText_Rom_5768C3
gText_Rom_5768C3: @ 0x085768C3
	.string "たいへん$"
	.if (. - gText_Rom_5768C3) > 0x5
	.error "gText_Rom_5768C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768C3) < 0x5
	.space 0x5 - (. - gText_Rom_5768C3)
	.endif
