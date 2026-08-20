	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+3 aliases)
	.globl gText_Rom_24C237
gText_Rom_24C237: @ 0x0824C237
	.string "かわいさ{EOS}"
	.if (. - gText_Rom_24C237) > 0x5
	.error "gText_Rom_24C237 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C237) < 0x5
	.space 0x5 - (. - gText_Rom_24C237)
	.endif
