	@ src/data/easy_chat/easy_chat_group_feelings.h:14 gEasyChatWord_Disappoints (+1 aliases)
	.globl gText_Rom_576833
gText_Rom_576833: @ 0x08576833
	.string "がっくし$"
	.if (. - gText_Rom_576833) > 0x5
	.error "gText_Rom_576833 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576833) < 0x5
	.space 0x5 - (. - gText_Rom_576833)
	.endif
