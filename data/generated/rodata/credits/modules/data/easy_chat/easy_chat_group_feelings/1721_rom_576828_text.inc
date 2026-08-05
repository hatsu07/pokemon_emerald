	@ src/data/easy_chat/easy_chat_group_feelings.h:12 gEasyChatWord_GoHome (+1 aliases)
	.globl gText_Rom_576828
gText_Rom_576828: @ 0x08576828
	.string "かえりたい$"
	.if (. - gText_Rom_576828) > 0x6
	.error "gText_Rom_576828 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576828) < 0x6
	.space 0x6 - (. - gText_Rom_576828)
	.endif
