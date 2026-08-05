	@ src/data/easy_chat/easy_chat_group_events.h:8 gEasyChatWord_Super (+3 aliases)
	.globl gText_Rom_5CACA5
gText_Rom_5CACA5: @ 0x085CACA5
	.string "スーパー$"
	.if (. - gText_Rom_5CACA5) > 0x5
	.error "gText_Rom_5CACA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACA5) < 0x5
	.space 0x5 - (. - gText_Rom_5CACA5)
	.endif
