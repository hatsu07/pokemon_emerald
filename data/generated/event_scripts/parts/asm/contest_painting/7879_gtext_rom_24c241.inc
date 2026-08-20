	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+3 aliases)
	.globl gText_Rom_24C241
gText_Rom_24C241: @ 0x0824C241
	.string "たくましさ{EOS}"
	.if (. - gText_Rom_24C241) > 0x6
	.error "gText_Rom_24C241 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C241) < 0x6
	.space 0x6 - (. - gText_Rom_24C241)
	.endif
