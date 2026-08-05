	@ src/data/easy_chat/easy_chat_group_feelings.h:13 gEasyChatWord_Disappointed (+1 aliases)
	.globl gText_Rom_57682E
gText_Rom_57682E: @ 0x0857682E
	.string "がっかり$"
	.if (. - gText_Rom_57682E) > 0x5
	.error "gText_Rom_57682E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57682E) < 0x5
	.space 0x5 - (. - gText_Rom_57682E)
	.endif
