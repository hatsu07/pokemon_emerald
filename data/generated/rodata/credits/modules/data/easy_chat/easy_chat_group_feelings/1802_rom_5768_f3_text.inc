	@ src/data/easy_chat/easy_chat_group_feelings.h:51 gEasyChatWord_Nice (+1 aliases)
	.globl gText_Rom_5768F3
gText_Rom_5768F3: @ 0x085768F3
	.string "ナイス$"
	.if (. - gText_Rom_5768F3) > 0x4
	.error "gText_Rom_5768F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768F3) < 0x4
	.space 0x4 - (. - gText_Rom_5768F3)
	.endif
