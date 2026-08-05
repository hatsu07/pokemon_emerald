	@ src/data/easy_chat/easy_chat_group_speech.h:4 easy_chat_group_speech_line_4
	.globl gText_Rom_575FDC
gText_Rom_575FDC: @ 0x08575FDC
	.string "あのね$"
	.if (. - gText_Rom_575FDC) > 0x4
	.error "gText_Rom_575FDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575FDC) < 0x4
	.space 0x4 - (. - gText_Rom_575FDC)
	.endif
