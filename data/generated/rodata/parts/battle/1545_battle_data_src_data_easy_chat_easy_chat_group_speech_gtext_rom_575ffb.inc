	@ src/data/easy_chat/easy_chat_group_speech.h:46 easy_chat_group_speech_line_46
	.globl gText_Rom_575FFB
gText_Rom_575FFB: @ 0x08575FFB
	.string "かなり$"
	.if (. - gText_Rom_575FFB) > 0x4
	.error "gText_Rom_575FFB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575FFB) < 0x4
	.space 0x4 - (. - gText_Rom_575FFB)
	.endif
	@ Decoded text from ROM range: offset=0x575FFF, size=0x3
	.string "から$"
