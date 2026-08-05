	@ src/data/easy_chat/easy_chat_group_events.h:9 gEasyChatWord_Stage (+1 aliases)
	.globl gText_Rom_57844B
gText_Rom_57844B: @ 0x0857844B
	.string "ステージ$"
	.if (. - gText_Rom_57844B) > 0x5
	.error "gText_Rom_57844B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57844B) < 0x5
	.space 0x5 - (. - gText_Rom_57844B)
	.endif
