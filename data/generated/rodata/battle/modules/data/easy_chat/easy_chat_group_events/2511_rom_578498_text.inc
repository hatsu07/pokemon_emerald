	@ src/data/easy_chat/easy_chat_group_events.h:23 gEasyChatWord_Crush (+1 aliases)
	.globl gText_Rom_578498
gText_Rom_578498: @ 0x08578498
	.string "クラッシュ$"
	.if (. - gText_Rom_578498) > 0x6
	.error "gText_Rom_578498 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578498) < 0x6
	.space 0x6 - (. - gText_Rom_578498)
	.endif
