	@ src/data/easy_chat/easy_chat_group_feelings.h:15 gEasyChatWord_Sad (+1 aliases)
	.globl gText_Rom_576838
gText_Rom_576838: @ 0x08576838
	.string "かなしい$"
	.if (. - gText_Rom_576838) > 0x5
	.error "gText_Rom_576838 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576838) < 0x5
	.space 0x5 - (. - gText_Rom_576838)
	.endif
