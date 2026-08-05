	@ src/data/easy_chat/easy_chat_group_feelings.h:10 gEasyChatWord_Funny (+1 aliases)
	.globl gText_Rom_57681E
gText_Rom_57681E: @ 0x0857681E
	.string "おかしい$"
	.if (. - gText_Rom_57681E) > 0x5
	.error "gText_Rom_57681E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57681E) < 0x5
	.space 0x5 - (. - gText_Rom_57681E)
	.endif
