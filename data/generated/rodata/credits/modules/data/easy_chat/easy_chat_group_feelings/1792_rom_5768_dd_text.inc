	@ src/data/easy_chat/easy_chat_group_feelings.h:47 gEasyChatWord_Bad (+1 aliases)
	.globl gText_Rom_5768DD
gText_Rom_5768DD: @ 0x085768DD
	.string "ちくしょー$"
	.if (. - gText_Rom_5768DD) > 0x6
	.error "gText_Rom_5768DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768DD) < 0x6
	.space 0x6 - (. - gText_Rom_5768DD)
	.endif
