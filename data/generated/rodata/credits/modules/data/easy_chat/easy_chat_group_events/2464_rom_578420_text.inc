	@ src/data/easy_chat/easy_chat_group_events.h:1 gEasyChatWord_Appeal (+3 aliases)
	.globl gText_Rom_578420
gText_Rom_578420: @ 0x08578420
	.string "アピール$"
	.if (. - gText_Rom_578420) > 0x5
	.error "gText_Rom_578420 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578420) < 0x5
	.space 0x5 - (. - gText_Rom_578420)
	.endif
