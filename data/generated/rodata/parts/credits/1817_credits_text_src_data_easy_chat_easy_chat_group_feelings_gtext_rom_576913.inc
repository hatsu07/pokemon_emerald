	@ src/data/easy_chat/easy_chat_group_feelings.h:58 gEasyChatWord_See (+1 aliases)
	.globl gText_Rom_576913
gText_Rom_576913: @ 0x08576913
	.string "みたい$"
	.if (. - gText_Rom_576913) > 0x4
	.error "gText_Rom_576913 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576913) < 0x4
	.space 0x4 - (. - gText_Rom_576913)
	.endif
