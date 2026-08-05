	@ src/data/easy_chat/easy_chat_group_endings.h:352 easy_chat_group_endings_line_352
	.globl gText_Rom_2BFDBF
gText_Rom_2BFDBF: @ 0x082BFDBF
	.string "ません$"
	.if (. - gText_Rom_2BFDBF) > 0x4
	.error "gText_Rom_2BFDBF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2BFDBF) < 0x4
	.space 0x4 - (. - gText_Rom_2BFDBF)
	.endif
	@ Replaced baserom.gba range: offset=0x2BFDC3, size=0x20
	.byte 0x00, 0x06, 0x08, 0x16, 0x2E, 0x00, 0x11, 0x35, 0x03, 0x44, 0x0D, 0xFF, 0x00, 0x06, 0x08, 0x16
	.byte 0x2E, 0x00, 0x44, 0x07, 0x1F, 0x0C, 0x10, 0xFF, 0x00, 0x06, 0x08, 0x16, 0x2E, 0x00, 0x44, 0x07

	@ src/data/easy_chat/easy_chat_group_endings.h:352 easy_chat_group_endings_line_352
	.globl gText_Rom_2BFDE3
gText_Rom_2BFDE3: @ 0x082BFDE3
	.string "ません$"
	.if (. - gText_Rom_2BFDE3) > 0x4
	.error "gText_Rom_2BFDE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2BFDE3) < 0x4
	.space 0x4 - (. - gText_Rom_2BFDE3)
	.endif
	@ Decoded text from ROM range: offset=0x2BFDE7, size=0x19
	.string "　かくにん　を　かくにん$"
	.string "かくにん　は　しっぱい$"
