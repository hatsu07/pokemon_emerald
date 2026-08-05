	@ src/data/easy_chat/easy_chat_group_feelings.h:1 gEasyChatWord_Meet (+1 aliases)
	.globl gText_Rom_5767F0
gText_Rom_5767F0: @ 0x085767F0
	.string "あいたい$"
	.if (. - gText_Rom_5767F0) > 0x5
	.error "gText_Rom_5767F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5767F0) < 0x5
	.space 0x5 - (. - gText_Rom_5767F0)
	.endif
