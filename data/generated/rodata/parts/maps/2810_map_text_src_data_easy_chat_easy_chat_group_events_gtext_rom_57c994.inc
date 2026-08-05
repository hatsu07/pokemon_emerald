	@ src/data/easy_chat/easy_chat_group_events.h:17 gEasyChatWord_SecretBase (+3 aliases)
	.globl gText_Rom_57C994
gText_Rom_57C994: @ 0x0857C994
	.string "ひみつきち$"
	.if (. - gText_Rom_57C994) > 0x6
	.error "gText_Rom_57C994 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C994) < 0x6
	.space 0x6 - (. - gText_Rom_57C994)
	.endif
	@ Replaced baserom.gba range: offset=0x57C99A, size=0xF
	.byte 0x14, 0x08, 0x0C, 0x35, 0xFF, 0x6F, 0x5B, 0x77, 0x60, 0x53, 0x7E, 0xFF, 0x64, 0x57, 0x7C

