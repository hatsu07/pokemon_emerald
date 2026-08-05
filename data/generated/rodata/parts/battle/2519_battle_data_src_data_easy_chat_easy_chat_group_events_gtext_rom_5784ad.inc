	@ src/data/easy_chat/easy_chat_group_events.h:27 gEasyChatWord_Room (+1 aliases)
	.globl gText_Rom_5784AD
gText_Rom_5784AD: @ 0x085784AD
	.string "ルーム$"
	.if (. - gText_Rom_5784AD) > 0x4
	.error "gText_Rom_5784AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5784AD) < 0x4
	.space 0x4 - (. - gText_Rom_5784AD)
	.endif
