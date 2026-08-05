	@ src/data/easy_chat/easy_chat_group_feelings.h:11 gEasyChatWord_Got (+1 aliases)
	.globl gText_Rom_576823
gText_Rom_576823: @ 0x08576823
	.string "オッケー$"
	.if (. - gText_Rom_576823) > 0x5
	.error "gText_Rom_576823 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576823) < 0x5
	.space 0x5 - (. - gText_Rom_576823)
	.endif
