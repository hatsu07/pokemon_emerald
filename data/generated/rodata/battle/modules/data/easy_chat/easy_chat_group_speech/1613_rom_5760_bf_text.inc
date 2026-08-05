	@ src/data/easy_chat/easy_chat_group_speech.h:334 easy_chat_group_speech_line_334
	.globl gText_Rom_5760BF
gText_Rom_5760BF: @ 0x085760BF
	.string "もはや$"
	.if (. - gText_Rom_5760BF) > 0x4
	.error "gText_Rom_5760BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5760BF) < 0x4
	.space 0x4 - (. - gText_Rom_5760BF)
	.endif
