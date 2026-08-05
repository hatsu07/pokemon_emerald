	@ src/data/easy_chat/easy_chat_group_events.h:7 gEasyChatWord_Judge (+1 aliases)
	.globl gText_Rom_578440
gText_Rom_578440: @ 0x08578440
	.string "しんさいん$"
	.if (. - gText_Rom_578440) > 0x6
	.error "gText_Rom_578440 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578440) < 0x6
	.space 0x6 - (. - gText_Rom_578440)
	.endif
