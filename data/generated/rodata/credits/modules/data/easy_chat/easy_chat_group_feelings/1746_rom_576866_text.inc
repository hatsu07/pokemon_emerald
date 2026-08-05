	@ src/data/easy_chat/easy_chat_group_feelings.h:24 gEasyChatWord_Angry (+1 aliases)
	.globl gText_Rom_576866
gText_Rom_576866: @ 0x08576866
	.string "くやしい$"
	.if (. - gText_Rom_576866) > 0x5
	.error "gText_Rom_576866 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576866) < 0x5
	.space 0x5 - (. - gText_Rom_576866)
	.endif
