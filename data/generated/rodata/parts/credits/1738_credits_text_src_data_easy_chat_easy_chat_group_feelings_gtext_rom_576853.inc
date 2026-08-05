	@ src/data/easy_chat/easy_chat_group_feelings.h:20 gEasyChatWord_Hear (+1 aliases)
	.globl gText_Rom_576853
gText_Rom_576853: @ 0x08576853
	.string "ききたい$"
	.if (. - gText_Rom_576853) > 0x5
	.error "gText_Rom_576853 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576853) < 0x5
	.space 0x5 - (. - gText_Rom_576853)
	.endif
