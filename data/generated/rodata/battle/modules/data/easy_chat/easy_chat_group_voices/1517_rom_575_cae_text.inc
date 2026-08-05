	@ src/data/easy_chat/easy_chat_group_voices.h:304 easy_chat_group_voices_line_304
	.globl gText_Rom_575CAE
gText_Rom_575CAE: @ 0x08575CAE
	.string "ほら$"
	.if (. - gText_Rom_575CAE) > 0x3
	.error "gText_Rom_575CAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CAE) < 0x3
	.space 0x3 - (. - gText_Rom_575CAE)
	.endif
	@ Decoded text from ROM range: offset=0x575CB1, size=0x3
	.string "まあ$"
