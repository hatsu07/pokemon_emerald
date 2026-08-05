	@ src/data/easy_chat/easy_chat_group_events.h:19 gEasyChatWord_POKEBLOCK (+1 aliases)
	.globl gText_Rom_578486
gText_Rom_578486: @ 0x08578486
	.string "ポロック$"
	.if (. - gText_Rom_578486) > 0x5
	.error "gText_Rom_578486 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578486) < 0x5
	.space 0x5 - (. - gText_Rom_578486)
	.endif
