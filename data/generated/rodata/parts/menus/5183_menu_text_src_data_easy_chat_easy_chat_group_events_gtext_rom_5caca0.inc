	@ src/data/easy_chat/easy_chat_group_events.h:11 gEasyChatWord_Evolution (+4 aliases)
	.globl gText_Rom_5CACA0
gText_Rom_5CACA0: @ 0x085CACA0
	.string "ノーマル$"
	.if (. - gText_Rom_5CACA0) > 0x5
	.error "gText_Rom_5CACA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACA0) < 0x5
	.space 0x5 - (. - gText_Rom_5CACA0)
	.endif
