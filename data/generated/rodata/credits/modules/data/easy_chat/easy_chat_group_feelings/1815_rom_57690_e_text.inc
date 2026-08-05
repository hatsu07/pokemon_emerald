	@ src/data/easy_chat/easy_chat_group_feelings.h:57 gEasyChatWord_Satisfied (+2 aliases)
	.globl gText_Rom_57690E
gText_Rom_57690E: @ 0x0857690E
	.string "まんぞく$"
	.if (. - gText_Rom_57690E) > 0x5
	.error "gText_Rom_57690E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57690E) < 0x5
	.space 0x5 - (. - gText_Rom_57690E)
	.endif
