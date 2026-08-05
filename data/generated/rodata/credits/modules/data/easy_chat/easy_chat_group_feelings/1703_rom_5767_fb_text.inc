	@ src/data/easy_chat/easy_chat_group_feelings.h:3 gEasyChatWord_Hurried (+1 aliases)
	.globl gText_Rom_5767FB
gText_Rom_5767FB: @ 0x085767FB
	.string "あわてて$"
	.if (. - gText_Rom_5767FB) > 0x5
	.error "gText_Rom_5767FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5767FB) < 0x5
	.space 0x5 - (. - gText_Rom_5767FB)
	.endif
