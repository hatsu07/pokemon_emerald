	@ src/data/easy_chat/easy_chat_group_feelings.h:21 gEasyChatWord_Wants (+1 aliases)
	.globl gText_Rom_576858
gText_Rom_576858: @ 0x08576858
	.string "きになる$"
	.if (. - gText_Rom_576858) > 0x5
	.error "gText_Rom_576858 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576858) < 0x5
	.space 0x5 - (. - gText_Rom_576858)
	.endif
