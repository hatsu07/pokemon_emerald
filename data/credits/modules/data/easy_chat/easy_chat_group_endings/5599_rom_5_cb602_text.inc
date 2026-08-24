	@ ANALYSIS: RAW_RANGE offset=0x5CB5F2, size=0x10
	.byte 0x64, 0x7A, 0xAE, 0x65, 0xAE, 0x37, 0x00, 0x14, 0x03, 0x2B, 0x08, 0x00, 0x0B, 0x2A, 0x13, 0x02

	@ src/data/easy_chat/easy_chat_group_endings.h:352 easy_chat_group_endings_line_352
	.globl gText_Rom_5CB602
gText_Rom_5CB602: @ 0x085CB602
	.string "ません{EOS}"
	.if (. - gText_Rom_5CB602) > 0x4
	.error "gText_Rom_5CB602 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB602) < 0x4
	.space 0x4 - (. - gText_Rom_5CB602)
	.endif

