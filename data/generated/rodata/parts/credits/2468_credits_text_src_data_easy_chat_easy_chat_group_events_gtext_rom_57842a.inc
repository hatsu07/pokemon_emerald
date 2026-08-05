	@ src/data/easy_chat/easy_chat_group_events.h:3 gEasyChatWord_StayAtHome (+1 aliases)
	.globl gText_Rom_57842A
gText_Rom_57842A: @ 0x0857842A
	.string "おるすばん$"
	.if (. - gText_Rom_57842A) > 0x6
	.error "gText_Rom_57842A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57842A) < 0x6
	.space 0x6 - (. - gText_Rom_57842A)
	.endif
