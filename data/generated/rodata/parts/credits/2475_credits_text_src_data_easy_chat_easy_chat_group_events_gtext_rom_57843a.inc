	@ src/data/easy_chat/easy_chat_group_events.h:6 gEasyChatWord_Mc (+1 aliases)
	.globl gText_Rom_57843A
gText_Rom_57843A: @ 0x0857843A
	.string "しかいしゃ$"
	.if (. - gText_Rom_57843A) > 0x6
	.error "gText_Rom_57843A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57843A) < 0x6
	.space 0x6 - (. - gText_Rom_57843A)
	.endif
