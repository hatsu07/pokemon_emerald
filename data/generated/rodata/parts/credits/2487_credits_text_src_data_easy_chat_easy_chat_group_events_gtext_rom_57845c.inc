	@ src/data/easy_chat/easy_chat_group_events.h:12 gEasyChatWord_Hyper (+3 aliases)
	.globl gText_Rom_57845C
gText_Rom_57845C: @ 0x0857845C
	.string "ハイパー$"
	.if (. - gText_Rom_57845C) > 0x5
	.error "gText_Rom_57845C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57845C) < 0x5
	.space 0x5 - (. - gText_Rom_57845C)
	.endif
