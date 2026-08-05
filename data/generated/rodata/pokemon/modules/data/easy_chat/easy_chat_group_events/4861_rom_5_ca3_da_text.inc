	@ src/data/easy_chat/easy_chat_group_events.h:2 gEasyChatWord_Events (+3 aliases)
	.globl gText_Rom_5CA3DA
gText_Rom_5CA3DA: @ 0x085CA3DA
	.string "イベント$"
	.if (. - gText_Rom_5CA3DA) > 0x5
	.error "gText_Rom_5CA3DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3DA) < 0x5
	.space 0x5 - (. - gText_Rom_5CA3DA)
	.endif
