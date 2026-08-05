	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_2526CB
gText_Rom_2526CB: @ 0x082526CB
	.string "かんきゃく『{0xFD}{0x03}の\nあの　{0xFD}{0x02}は　ケタちがい　でしたね！\lつぎは　もっと　アピールを　がんばってー！$"
	.if (. - gText_Rom_2526CB) > 0x33
	.error "gText_Rom_2526CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2526CB) < 0x33
	.space 0x33 - (. - gText_Rom_2526CB)
	.endif
