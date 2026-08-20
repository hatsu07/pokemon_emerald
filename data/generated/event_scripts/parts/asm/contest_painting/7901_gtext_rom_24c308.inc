	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C308
gText_Rom_24C308: @ 0x0824C308
	.string "かしこさ　マエストロ\nワイズ　ポケモン　{0xFD}{0x02}{EOS}"
	.if (. - gText_Rom_24C308) > 0x17
	.error "gText_Rom_24C308 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C308) < 0x17
	.space 0x17 - (. - gText_Rom_24C308)
	.endif
