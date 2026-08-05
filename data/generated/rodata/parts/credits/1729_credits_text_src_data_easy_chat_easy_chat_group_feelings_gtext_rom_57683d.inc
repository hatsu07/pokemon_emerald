	@ src/data/easy_chat/easy_chat_group_feelings.h:16 gEasyChatWord_Try (+1 aliases)
	.globl gText_Rom_57683D
gText_Rom_57683D: @ 0x0857683D
	.string "がんばって$"
	.if (. - gText_Rom_57683D) > 0x6
	.error "gText_Rom_57683D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57683D) < 0x6
	.space 0x6 - (. - gText_Rom_57683D)
	.endif
