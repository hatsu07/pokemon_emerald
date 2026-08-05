	@ src/data/easy_chat/easy_chat_group_feelings.h:29 gEasyChatWord_Joy (+1 aliases)
	.globl gText_Rom_57687E
gText_Rom_57687E: @ 0x0857687E
	.string "しあわせ$"
	.if (. - gText_Rom_57687E) > 0x5
	.error "gText_Rom_57687E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57687E) < 0x5
	.space 0x5 - (. - gText_Rom_57687E)
	.endif
