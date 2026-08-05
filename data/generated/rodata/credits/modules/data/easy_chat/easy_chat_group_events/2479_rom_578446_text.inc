	@ src/data/easy_chat/easy_chat_group_events.h:8 gEasyChatWord_Super (+3 aliases)
	.globl gText_Rom_578446
gText_Rom_578446: @ 0x08578446
	.string "スーパー$"
	.if (. - gText_Rom_578446) > 0x5
	.error "gText_Rom_578446 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578446) < 0x5
	.space 0x5 - (. - gText_Rom_578446)
	.endif
