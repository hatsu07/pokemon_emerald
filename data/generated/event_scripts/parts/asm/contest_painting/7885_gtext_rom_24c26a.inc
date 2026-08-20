	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C26A
gText_Rom_24C26A: @ 0x0824C26A
	.string "マーベラス　ワンダフル\nグレート　{0xFD}{0x02}{EOS}"
	.if (. - gText_Rom_24C26A) > 0x14
	.error "gText_Rom_24C26A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C26A) < 0x14
	.space 0x14 - (. - gText_Rom_24C26A)
	.endif
