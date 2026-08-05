	@ src/data/easy_chat/easy_chat_group_events.h:26 gEasyChatWord_Union (+1 aliases)
	.globl gText_Rom_5784A8
gText_Rom_5784A8: @ 0x085784A8
	.string "ユニオン$"
	.if (. - gText_Rom_5784A8) > 0x5
	.error "gText_Rom_5784A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5784A8) < 0x5
	.space 0x5 - (. - gText_Rom_5784A8)
	.endif
