	@ src/data/easy_chat/easy_chat_group_feelings.h:67 gEasyChatWord_Question (+1 aliases)
	.globl gText_Rom_57693C
gText_Rom_57693C: @ 0x0857693C
	.string "ろんがい$"
	.if (. - gText_Rom_57693C) > 0x5
	.error "gText_Rom_57693C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57693C) < 0x5
	.space 0x5 - (. - gText_Rom_57693C)
	.endif
