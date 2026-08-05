	@ src/data/easy_chat/easy_chat_group_events.h:11 gEasyChatWord_Evolution (+4 aliases)
	.globl gText_Rom_578457
gText_Rom_578457: @ 0x08578457
	.string "ノーマル$"
	.if (. - gText_Rom_578457) > 0x5
	.error "gText_Rom_578457 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578457) < 0x5
	.space 0x5 - (. - gText_Rom_578457)
	.endif
