	@ src/data/easy_chat/easy_chat_group_feelings.h:19 gEasyChatWord_Think (+1 aliases)
	.globl gText_Rom_57684E
gText_Rom_57684E: @ 0x0857684E
	.string "きがする$"
	.if (. - gText_Rom_57684E) > 0x5
	.error "gText_Rom_57684E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57684E) < 0x5
	.space 0x5 - (. - gText_Rom_57684E)
	.endif
