	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+17 aliases)
	.globl gText_Rom_24F531
gText_Rom_24F531: @ 0x0824F531
	.string "きっと　あいぼうの　{0xFD}{0x02}と\nしんらい　しあっている　からこそ\lこんな　すごいことが　できるんですね$"
	.if (. - gText_Rom_24F531) > 0x32
	.error "gText_Rom_24F531 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F531) < 0x32
	.space 0x32 - (. - gText_Rom_24F531)
	.endif
