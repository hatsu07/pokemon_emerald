	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+3 aliases)
	.globl gText_Rom_24C231
gText_Rom_24C231: @ 0x0824C231
	.string "うつくしさ$"
	.if (. - gText_Rom_24C231) > 0x6
	.error "gText_Rom_24C231 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C231) < 0x6
	.space 0x6 - (. - gText_Rom_24C231)
	.endif
