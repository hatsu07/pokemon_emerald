	@ src/data/easy_chat/easy_chat_group_feelings.h:23 gEasyChatWord_Dislike (+1 aliases)
	.globl gText_Rom_576862
gText_Rom_576862: @ 0x08576862
	.string "きらい$"
	.if (. - gText_Rom_576862) > 0x4
	.error "gText_Rom_576862 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576862) < 0x4
	.space 0x4 - (. - gText_Rom_576862)
	.endif
