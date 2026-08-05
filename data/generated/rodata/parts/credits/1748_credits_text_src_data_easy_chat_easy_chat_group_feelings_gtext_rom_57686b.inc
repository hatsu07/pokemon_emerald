	@ src/data/easy_chat/easy_chat_group_feelings.h:25 gEasyChatWord_Anger (+1 aliases)
	.globl gText_Rom_57686B
gText_Rom_57686B: @ 0x0857686B
	.string "くやしさ$"
	.if (. - gText_Rom_57686B) > 0x5
	.error "gText_Rom_57686B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57686B) < 0x5
	.space 0x5 - (. - gText_Rom_57686B)
	.endif
