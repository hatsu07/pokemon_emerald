	@ src/data/easy_chat/easy_chat_group_feelings.h:30 gEasyChatWord_Gets (+1 aliases)
	.globl gText_Rom_576883
gText_Rom_576883: @ 0x08576883
	.string "したい$"
	.if (. - gText_Rom_576883) > 0x4
	.error "gText_Rom_576883 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576883) < 0x4
	.space 0x4 - (. - gText_Rom_576883)
	.endif
