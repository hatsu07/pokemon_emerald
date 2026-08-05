	@ src/data/easy_chat/easy_chat_group_events.h:28 gEasyChatWord_Wireless (+1 aliases)
	.globl gText_Rom_5784B1
gText_Rom_5784B1: @ 0x085784B1
	.string "ワイヤレス$"
	.if (. - gText_Rom_5784B1) > 0x6
	.error "gText_Rom_5784B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5784B1) < 0x6
	.space 0x6 - (. - gText_Rom_5784B1)
	.endif
