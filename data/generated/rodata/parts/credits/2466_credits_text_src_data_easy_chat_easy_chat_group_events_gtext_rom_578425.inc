	@ src/data/easy_chat/easy_chat_group_events.h:2 gEasyChatWord_Events (+3 aliases)
	.globl gText_Rom_578425
gText_Rom_578425: @ 0x08578425
	.string "イベント$"
	.if (. - gText_Rom_578425) > 0x5
	.error "gText_Rom_578425 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578425) < 0x5
	.space 0x5 - (. - gText_Rom_578425)
	.endif
