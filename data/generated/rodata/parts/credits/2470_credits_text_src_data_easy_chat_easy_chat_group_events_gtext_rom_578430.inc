	@ src/data/easy_chat/easy_chat_group_events.h:4 gEasyChatWord_Berry (+4 aliases)
	.globl gText_Rom_578430
gText_Rom_578430: @ 0x08578430
	.string "きのみ$"
	.if (. - gText_Rom_578430) > 0x4
	.error "gText_Rom_578430 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578430) < 0x4
	.space 0x4 - (. - gText_Rom_578430)
	.endif
