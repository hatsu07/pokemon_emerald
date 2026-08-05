	@ src/data/easy_chat/easy_chat_group_feelings.h:54 gEasyChatWord_Fear (+1 aliases)
	.globl gText_Rom_576901
gText_Rom_576901: @ 0x08576901
	.string "ふあん$"
	.if (. - gText_Rom_576901) > 0x4
	.error "gText_Rom_576901 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576901) < 0x4
	.space 0x4 - (. - gText_Rom_576901)
	.endif
