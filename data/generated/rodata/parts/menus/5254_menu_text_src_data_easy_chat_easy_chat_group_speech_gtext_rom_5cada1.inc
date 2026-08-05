	@ src/data/easy_chat/easy_chat_group_speech.h:322 easy_chat_group_speech_line_322
	.globl gText_Rom_5CADA1
gText_Rom_5CADA1: @ 0x085CADA1
	.string "モード$"
	.if (. - gText_Rom_5CADA1) > 0x4
	.error "gText_Rom_5CADA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADA1) < 0x4
	.space 0x4 - (. - gText_Rom_5CADA1)
	.endif
	@ Replaced baserom.gba range: offset=0x5CADA5, size=0x5
	.byte 0x89, 0x7B, 0xAE, 0x96, 0x79
