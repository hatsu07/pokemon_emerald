	@ src/data/easy_chat/easy_chat_group_speech.h:58 easy_chat_group_speech_line_58
	.globl gText_Rom_576002
gText_Rom_576002: @ 0x08576002
	.string "きぶん$"
	.if (. - gText_Rom_576002) > 0x4
	.error "gText_Rom_576002 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576002) < 0x4
	.space 0x4 - (. - gText_Rom_576002)
	.endif
	@ Replaced baserom.gba range: offset=0x576006, size=0xE
	.byte 0x09, 0x45, 0xFF, 0x0A, 0x0F, 0xFF, 0x0A, 0x14, 0xFF, 0x8C, 0xFF, 0x0B, 0x01, 0xFF
