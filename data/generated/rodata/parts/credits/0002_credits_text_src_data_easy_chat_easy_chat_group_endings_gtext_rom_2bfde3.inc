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
