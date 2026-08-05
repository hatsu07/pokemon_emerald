	@ src/data/easy_chat/easy_chat_group_feelings.h:68 gEasyChatWord_Understand (+1 aliases)
	.globl gText_Rom_576941
gText_Rom_576941: @ 0x08576941
	.string "わから$"
	.if (. - gText_Rom_576941) > 0x4
	.error "gText_Rom_576941 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576941) < 0x4
	.space 0x4 - (. - gText_Rom_576941)
	.endif
