	@ src/data/easy_chat/easy_chat_group_feelings.h:22 gEasyChatWord_Misheard (+1 aliases)
	.globl gText_Rom_57685D
gText_Rom_57685D: @ 0x0857685D
	.string "きのせい$"
	.if (. - gText_Rom_57685D) > 0x5
	.error "gText_Rom_57685D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57685D) < 0x5
	.space 0x5 - (. - gText_Rom_57685D)
	.endif
