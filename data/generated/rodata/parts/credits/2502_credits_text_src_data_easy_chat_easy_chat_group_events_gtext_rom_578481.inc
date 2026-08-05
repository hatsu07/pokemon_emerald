	@ src/data/easy_chat/easy_chat_group_events.h:18 gEasyChatWord_Blend (+1 aliases)
	.globl gText_Rom_578481
gText_Rom_578481: @ 0x08578481
	.string "ブレンド$"
	.if (. - gText_Rom_578481) > 0x5
	.error "gText_Rom_578481 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578481) < 0x5
	.space 0x5 - (. - gText_Rom_578481)
	.endif
