	@ src/data/easy_chat/easy_chat_group_feelings.h:41 gEasyChatWord_Adore (+2 aliases)
	.globl gText_Rom_5768BE
gText_Rom_5768BE: @ 0x085768BE
	.string "だいすき$"
	.if (. - gText_Rom_5768BE) > 0x5
	.error "gText_Rom_5768BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768BE) < 0x5
	.space 0x5 - (. - gText_Rom_5768BE)
	.endif
