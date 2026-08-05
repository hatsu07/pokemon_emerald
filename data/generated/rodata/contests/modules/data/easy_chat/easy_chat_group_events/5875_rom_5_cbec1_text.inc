	@ src/data/easy_chat/easy_chat_group_events.h:17 gEasyChatWord_SecretBase (+3 aliases)
	.globl gText_Rom_5CBEC1
gText_Rom_5CBEC1: @ 0x085CBEC1
	.string "ひみつきち$"
	.if (. - gText_Rom_5CBEC1) > 0x6
	.error "gText_Rom_5CBEC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBEC1) < 0x6
	.space 0x6 - (. - gText_Rom_5CBEC1)
	.endif
