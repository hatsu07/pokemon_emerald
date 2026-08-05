	@ src/data/easy_chat/easy_chat_group_feelings.h:27 gEasyChatWord_Lonesome (+1 aliases)
	.globl gText_Rom_576874
gText_Rom_576874: @ 0x08576874
	.string "さみしい$"
	.if (. - gText_Rom_576874) > 0x5
	.error "gText_Rom_576874 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576874) < 0x5
	.space 0x5 - (. - gText_Rom_576874)
	.endif
