	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C27E
gText_Rom_24C27E: @ 0x0824C27E
	.string "こんせいき　さいごの　ビーナス\nビューティー　{0xFD}{0x02}{EOS}"
	.if (. - gText_Rom_24C27E) > 0x1a
	.error "gText_Rom_24C27E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C27E) < 0x1a
	.space 0x1a - (. - gText_Rom_24C27E)
	.endif
