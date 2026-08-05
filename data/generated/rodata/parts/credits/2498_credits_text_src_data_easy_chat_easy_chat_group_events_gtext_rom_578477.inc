	@ src/data/easy_chat/easy_chat_group_events.h:16 gEasyChatWord_Hidden (+1 aliases)
	.globl gText_Rom_578477
gText_Rom_578477: @ 0x08578477
	.string "ひでん$"
	.if (. - gText_Rom_578477) > 0x4
	.error "gText_Rom_578477 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578477) < 0x4
	.space 0x4 - (. - gText_Rom_578477)
	.endif
