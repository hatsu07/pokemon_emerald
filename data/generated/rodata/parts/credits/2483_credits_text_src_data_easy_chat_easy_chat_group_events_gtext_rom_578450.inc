	@ src/data/easy_chat/easy_chat_group_events.h:10 gEasyChatWord_HallOfFame (+2 aliases)
	.globl gText_Rom_578450
gText_Rom_578450: @ 0x08578450
	.string "でんどういり$"
	.if (. - gText_Rom_578450) > 0x7
	.error "gText_Rom_578450 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578450) < 0x7
	.space 0x7 - (. - gText_Rom_578450)
	.endif
