	@ src/data/easy_chat/easy_chat_group_feelings.h:66 gEasyChatWord_Romantic (+1 aliases)
	.globl gText_Rom_576938
gText_Rom_576938: @ 0x08576938
	.string "ロマン$"
	.if (. - gText_Rom_576938) > 0x4
	.error "gText_Rom_576938 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576938) < 0x4
	.space 0x4 - (. - gText_Rom_576938)
	.endif
