	@ src/data/easy_chat/easy_chat_group_events.h:22 gEasyChatWord_Ribbon (+1 aliases)
	.globl gText_Rom_578494
gText_Rom_578494: @ 0x08578494
	.string "リボン$"
	.if (. - gText_Rom_578494) > 0x4
	.error "gText_Rom_578494 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578494) < 0x4
	.space 0x4 - (. - gText_Rom_578494)
	.endif
