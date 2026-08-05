	@ src/data/easy_chat/easy_chat_group_events.h:25 gEasyChatWord_Tower (+1 aliases)
	.globl gText_Rom_5784A4
gText_Rom_5784A4: @ 0x085784A4
	.string "タワー$"
	.if (. - gText_Rom_5784A4) > 0x4
	.error "gText_Rom_5784A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5784A4) < 0x4
	.space 0x4 - (. - gText_Rom_5784A4)
	.endif
