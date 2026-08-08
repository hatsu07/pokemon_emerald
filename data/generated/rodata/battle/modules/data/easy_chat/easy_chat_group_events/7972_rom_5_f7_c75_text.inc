	@ src/data/easy_chat/easy_chat_group_events.h:1 gEasyChatWord_Appeal (+3 aliases)
	.globl gText_Rom_5F7C75
gText_Rom_5F7C75: @ 0x085F7C75
	.string "アピール$"
	.if (. - gText_Rom_5F7C75) > 0x5
	.error "gText_Rom_5F7C75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7C75) < 0x5
	.space 0x5 - (. - gText_Rom_5F7C75)
	.endif
