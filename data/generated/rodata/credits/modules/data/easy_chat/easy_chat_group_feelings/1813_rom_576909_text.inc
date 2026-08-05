	@ src/data/easy_chat/easy_chat_group_feelings.h:56 gEasyChatWord_Wait (+1 aliases)
	.globl gText_Rom_576909
gText_Rom_576909: @ 0x08576909
	.string "まてない$"
	.if (. - gText_Rom_576909) > 0x5
	.error "gText_Rom_576909 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576909) < 0x5
	.space 0x5 - (. - gText_Rom_576909)
	.endif
