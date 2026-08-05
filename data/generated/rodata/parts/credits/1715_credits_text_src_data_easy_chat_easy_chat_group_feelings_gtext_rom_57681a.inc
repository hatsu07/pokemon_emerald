	@ src/data/easy_chat/easy_chat_group_feelings.h:9 gEasyChatWord_Important (+1 aliases)
	.globl gText_Rom_57681A
gText_Rom_57681A: @ 0x0857681A
	.string "えらい$"
	.if (. - gText_Rom_57681A) > 0x4
	.error "gText_Rom_57681A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57681A) < 0x4
	.space 0x4 - (. - gText_Rom_57681A)
	.endif
