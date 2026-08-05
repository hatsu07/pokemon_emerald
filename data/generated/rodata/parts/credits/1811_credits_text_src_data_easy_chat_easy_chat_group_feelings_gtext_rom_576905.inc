	@ src/data/easy_chat/easy_chat_group_feelings.h:55 gEasyChatWord_Want (+1 aliases)
	.globl gText_Rom_576905
gText_Rom_576905: @ 0x08576905
	.string "ほしい$"
	.if (. - gText_Rom_576905) > 0x4
	.error "gText_Rom_576905 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576905) < 0x4
	.space 0x4 - (. - gText_Rom_576905)
	.endif
