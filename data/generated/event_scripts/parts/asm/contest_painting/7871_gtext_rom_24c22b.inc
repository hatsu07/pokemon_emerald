	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+3 aliases)
	.globl gText_Rom_24C22B
gText_Rom_24C22B: @ 0x0824C22B
	.string "かっこよさ$"
	.if (. - gText_Rom_24C22B) > 0x6
	.error "gText_Rom_24C22B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C22B) < 0x6
	.space 0x6 - (. - gText_Rom_24C22B)
	.endif
