	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C25A
gText_Rom_24C25A: @ 0x0824C25A
	.string "グッドルッキン　ポケモン　{0xFD}{0x02}$"
	.if (. - gText_Rom_24C25A) > 0x10
	.error "gText_Rom_24C25A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C25A) < 0x10
	.space 0x10 - (. - gText_Rom_24C25A)
	.endif
