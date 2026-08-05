	@ src/data/easy_chat/easy_chat_group_feelings.h:45 gEasyChatWord_Eat (+1 aliases)
	.globl gText_Rom_5768D3
gText_Rom_5768D3: @ 0x085768D3
	.string "たべたい$"
	.if (. - gText_Rom_5768D3) > 0x5
	.error "gText_Rom_5768D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768D3) < 0x5
	.space 0x5 - (. - gText_Rom_5768D3)
	.endif
