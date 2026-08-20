	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C31F
gText_Rom_24C31F: @ 0x0824C31F
	.string "えらばれた　ポケモン…\nポケモンの　なかの　ポケモン　{0xFD}{0x02}{EOS}"
	.if (. - gText_Rom_24C31F) > 0x1e
	.error "gText_Rom_24C31F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C31F) < 0x1e
	.space 0x1e - (. - gText_Rom_24C31F)
	.endif
