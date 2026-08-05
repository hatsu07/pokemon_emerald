	@ src/data/easy_chat/easy_chat_group_speech.h:130 easy_chat_group_speech_line_130
	.globl gText_Rom_576030
gText_Rom_576030: @ 0x08576030
	.string "それで$"
	.if (. - gText_Rom_576030) > 0x4
	.error "gText_Rom_576030 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576030) < 0x4
	.space 0x4 - (. - gText_Rom_576030)
	.endif
	@ Decoded text from ROM range: offset=0x576034, size=0x3
	.string "だけ$"
