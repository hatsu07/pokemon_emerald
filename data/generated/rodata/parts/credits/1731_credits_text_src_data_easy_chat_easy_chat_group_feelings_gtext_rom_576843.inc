	@ src/data/easy_chat/easy_chat_group_feelings.h:17 gEasyChatWord_Tries (+1 aliases)
	.globl gText_Rom_576843
gText_Rom_576843: @ 0x08576843
	.string "がんばる$"
	.if (. - gText_Rom_576843) > 0x5
	.error "gText_Rom_576843 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576843) < 0x5
	.space 0x5 - (. - gText_Rom_576843)
	.endif
