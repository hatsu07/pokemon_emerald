	@ src/data/easy_chat/easy_chat_group_feelings.h:28 gEasyChatWord_Disappoint (+1 aliases)
	.globl gText_Rom_576879
gText_Rom_576879: @ 0x08576879
	.string "ざんねん$"
	.if (. - gText_Rom_576879) > 0x5
	.error "gText_Rom_576879 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576879) < 0x5
	.space 0x5 - (. - gText_Rom_576879)
	.endif
