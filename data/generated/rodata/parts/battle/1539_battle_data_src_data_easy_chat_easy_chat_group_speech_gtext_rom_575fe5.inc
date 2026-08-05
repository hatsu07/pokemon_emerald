	@ src/data/easy_chat/easy_chat_group_speech.h:16 easy_chat_group_speech_line_16
	.globl gText_Rom_575FE5
gText_Rom_575FE5: @ 0x08575FE5
	.string "いじわる$"
	.if (. - gText_Rom_575FE5) > 0x5
	.error "gText_Rom_575FE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575FE5) < 0x5
	.space 0x5 - (. - gText_Rom_575FE5)
	.endif
	@ Decoded text from ROM range: offset=0x575FEA, size=0x6
	.string "うそ$"
	.string "うむ$"
