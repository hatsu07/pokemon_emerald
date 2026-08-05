	@ src/data/easy_chat/easy_chat_group_feelings.h:4 gEasyChatWord_Goes (+1 aliases)
	.globl gText_Rom_576800
gText_Rom_576800: @ 0x08576800
	.string "いきたい$"
	.if (. - gText_Rom_576800) > 0x5
	.error "gText_Rom_576800 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576800) < 0x5
	.space 0x5 - (. - gText_Rom_576800)
	.endif
