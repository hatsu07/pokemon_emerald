	@ src/data/easy_chat/easy_chat_group_speech.h:148 easy_chat_group_speech_line_148
	.globl gText_Rom_57603B
gText_Rom_57603B: @ 0x0857603B
	.string "たぶん$"
	.if (. - gText_Rom_57603B) > 0x4
	.error "gText_Rom_57603B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57603B) < 0x4
	.space 0x4 - (. - gText_Rom_57603B)
	.endif
	@ Decoded text from ROM range: offset=0x57603F, size=0x3
	.string "たら$"
