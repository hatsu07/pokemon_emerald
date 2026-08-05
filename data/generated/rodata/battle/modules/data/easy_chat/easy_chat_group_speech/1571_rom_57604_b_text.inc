	@ src/data/easy_chat/easy_chat_group_speech.h:172 easy_chat_group_speech_line_172
	.globl gText_Rom_57604B
gText_Rom_57604B: @ 0x0857604B
	.string "ったら$"
	.if (. - gText_Rom_57604B) > 0x4
	.error "gText_Rom_57604B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57604B) < 0x4
	.space 0x4 - (. - gText_Rom_57604B)
	.endif
	@ Decoded text from ROM range: offset=0x57604F, size=0x3
	.string "って$"
