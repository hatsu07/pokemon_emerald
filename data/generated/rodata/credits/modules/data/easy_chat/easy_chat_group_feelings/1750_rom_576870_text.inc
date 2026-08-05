	@ src/data/easy_chat/easy_chat_group_feelings.h:26 gEasyChatWord_Scary (+1 aliases)
	.globl gText_Rom_576870
gText_Rom_576870: @ 0x08576870
	.string "こわい$"
	.if (. - gText_Rom_576870) > 0x4
	.error "gText_Rom_576870 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576870) < 0x4
	.space 0x4 - (. - gText_Rom_576870)
	.endif
