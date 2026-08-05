	@ src/data/easy_chat/easy_chat_group_feelings.h:6 gEasyChatWord_Happy (+1 aliases)
	.globl gText_Rom_57680A
gText_Rom_57680A: @ 0x0857680A
	.string "うれしい$"
	.if (. - gText_Rom_57680A) > 0x5
	.error "gText_Rom_57680A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57680A) < 0x5
	.space 0x5 - (. - gText_Rom_57680A)
	.endif
