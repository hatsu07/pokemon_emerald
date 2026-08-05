	@ src/data/easy_chat/easy_chat_group_events.h:1 gEasyChatWord_Appeal (+3 aliases)
	.globl gText_Rom_5CA3AB
gText_Rom_5CA3AB: @ 0x085CA3AB
	.string "アピール$"
	.if (. - gText_Rom_5CA3AB) > 0x5
	.error "gText_Rom_5CA3AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3AB) < 0x5
	.space 0x5 - (. - gText_Rom_5CA3AB)
	.endif
