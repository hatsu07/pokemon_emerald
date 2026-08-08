	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C298
gText_Rom_24C298: @ 0x0824C298
	.string "{0xFD}{0x02}　クンの　マブシイ\nキラキラ　スマイル$"
	.if (. - gText_Rom_24C298) > 0x16
	.error "gText_Rom_24C298 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C298) < 0x16
	.space 0x16 - (. - gText_Rom_24C298)
	.endif
