	@ src/data/easy_chat/easy_chat_group_feelings.h:64 gEasyChatWord_Beat (+1 aliases)
	.globl gText_Rom_57692E
gText_Rom_57692E: @ 0x0857692E
	.string "やられて$"
	.if (. - gText_Rom_57692E) > 0x5
	.error "gText_Rom_57692E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57692E) < 0x5
	.space 0x5 - (. - gText_Rom_57692E)
	.endif
