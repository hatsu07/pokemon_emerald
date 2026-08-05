	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C2D8
gText_Rom_24C2D8: @ 0x0824C2D8
	.string "プリティー　{0xFD}{0x02}たんの\nおすまし　ショット$"
	.if (. - gText_Rom_24C2D8) > 0x16
	.error "gText_Rom_24C2D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C2D8) < 0x16
	.space 0x16 - (. - gText_Rom_24C2D8)
	.endif
