	@ asm/contest_painting.s:452 PrintContestPaintingCaption
	.globl gText_Rom_24C1F5
gText_Rom_24C1F5: @ 0x0824C1F5
	.string "{0xFD}{0x02}\n{0xFD}{0x03}　の　{0xFD}{0x04}{EOS}"
	.if (. - gText_Rom_24C1F5) > 0xb
	.error "gText_Rom_24C1F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C1F5) < 0xb
	.space 0xb - (. - gText_Rom_24C1F5)
	.endif
