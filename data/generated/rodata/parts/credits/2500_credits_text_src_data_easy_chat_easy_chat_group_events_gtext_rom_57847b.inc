	@ src/data/easy_chat/easy_chat_group_events.h:17 gEasyChatWord_SecretBase (+3 aliases)
	.globl gText_Rom_57847B
gText_Rom_57847B: @ 0x0857847B
	.string "ひみつきち$"
	.if (. - gText_Rom_57847B) > 0x6
	.error "gText_Rom_57847B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57847B) < 0x6
	.space 0x6 - (. - gText_Rom_57847B)
	.endif
