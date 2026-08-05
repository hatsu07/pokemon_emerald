	@ src/data/easy_chat/easy_chat_group_events.h:12 gEasyChatWord_Hyper (+3 aliases)
	.globl gText_Rom_5CACAA
gText_Rom_5CACAA: @ 0x085CACAA
	.string "ハイパー$"
	.if (. - gText_Rom_5CACAA) > 0x5
	.error "gText_Rom_5CACAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACAA) < 0x5
	.space 0x5 - (. - gText_Rom_5CACAA)
	.endif
