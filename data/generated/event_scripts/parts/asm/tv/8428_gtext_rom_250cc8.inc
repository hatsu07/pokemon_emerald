	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+27 aliases)
	.globl gText_Rom_250CC8
gText_Rom_250CC8: @ 0x08250CC8
	.string "{0xFD}{0x03}は　ビックリ　ざます！\nリボンを　{0xFD}{0x04}こも　つけている　ざますよ\p{0xFD}{0x02}さんの　しゅうねんを\nかんじる　ざますねー$"
	.if (. - gText_Rom_250CC8) > 0x3b
	.error "gText_Rom_250CC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250CC8) < 0x3b
	.space 0x3b - (. - gText_Rom_250CC8)
	.endif
