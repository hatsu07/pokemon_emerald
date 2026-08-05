	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+3 aliases)
	.globl gText_Rom_24C23C
gText_Rom_24C23C: @ 0x0824C23C
	.string "かしこさ$"
	.if (. - gText_Rom_24C23C) > 0x5
	.error "gText_Rom_24C23C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C23C) < 0x5
	.space 0x5 - (. - gText_Rom_24C23C)
	.endif
