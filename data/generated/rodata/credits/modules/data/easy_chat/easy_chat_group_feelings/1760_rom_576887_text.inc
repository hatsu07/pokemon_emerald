	@ src/data/easy_chat/easy_chat_group_feelings.h:31 gEasyChatWord_Never (+1 aliases)
	.globl gText_Rom_576887
gText_Rom_576887: @ 0x08576887
	.string "したくない$"
	.if (. - gText_Rom_576887) > 0x6
	.error "gText_Rom_576887 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576887) < 0x6
	.space 0x6 - (. - gText_Rom_576887)
	.endif
