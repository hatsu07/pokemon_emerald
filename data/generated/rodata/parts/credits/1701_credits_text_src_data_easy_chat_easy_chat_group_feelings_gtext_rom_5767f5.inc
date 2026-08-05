	@ src/data/easy_chat/easy_chat_group_feelings.h:2 gEasyChatWord_Play (+1 aliases)
	.globl gText_Rom_5767F5
gText_Rom_5767F5: @ 0x085767F5
	.string "あそびたい$"
	.if (. - gText_Rom_5767F5) > 0x6
	.error "gText_Rom_5767F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5767F5) < 0x6
	.space 0x6 - (. - gText_Rom_5767F5)
	.endif
