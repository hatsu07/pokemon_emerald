	@ src/data/easy_chat/easy_chat_group_feelings.h:8 gEasyChatWord_Excite (+1 aliases)
	.globl gText_Rom_576814
gText_Rom_576814: @ 0x08576814
	.string "エキサイト$"
	.if (. - gText_Rom_576814) > 0x6
	.error "gText_Rom_576814 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576814) < 0x6
	.space 0x6 - (. - gText_Rom_576814)
	.endif
