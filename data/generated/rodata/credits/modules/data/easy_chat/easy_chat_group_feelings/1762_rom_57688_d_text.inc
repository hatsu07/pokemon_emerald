	@ src/data/easy_chat/easy_chat_group_feelings.h:32 gEasyChatWord_Darn (+1 aliases)
	.globl gText_Rom_57688D
gText_Rom_57688D: @ 0x0857688D
	.string "しまった$"
	.if (. - gText_Rom_57688D) > 0x5
	.error "gText_Rom_57688D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57688D) < 0x5
	.space 0x5 - (. - gText_Rom_57688D)
	.endif
