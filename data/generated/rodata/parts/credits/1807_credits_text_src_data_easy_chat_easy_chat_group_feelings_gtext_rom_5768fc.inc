	@ src/data/easy_chat/easy_chat_group_feelings.h:53 gEasyChatWord_Surprise (+1 aliases)
	.globl gText_Rom_5768FC
gText_Rom_5768FC: @ 0x085768FC
	.string "びっくり$"
	.if (. - gText_Rom_5768FC) > 0x5
	.error "gText_Rom_5768FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768FC) < 0x5
	.space 0x5 - (. - gText_Rom_5768FC)
	.endif
