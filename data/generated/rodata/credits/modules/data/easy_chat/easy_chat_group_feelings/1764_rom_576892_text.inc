	@ src/data/easy_chat/easy_chat_group_feelings.h:33 gEasyChatWord_Downcast (+1 aliases)
	.globl gText_Rom_576892
gText_Rom_576892: @ 0x08576892
	.string "しょんぼり$"
	.if (. - gText_Rom_576892) > 0x6
	.error "gText_Rom_576892 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576892) < 0x6
	.space 0x6 - (. - gText_Rom_576892)
	.endif
