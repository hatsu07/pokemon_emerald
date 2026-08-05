	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251BEA
gText_Rom_251BEA: @ 0x08251BEA
	.string "ふうせんに　とつげきだー！\pわっちゃいました！\pちょっと　おとに\nビックリ　しています$"
	.if (. - gText_Rom_251BEA) > 0x2c
	.error "gText_Rom_251BEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251BEA) < 0x2c
	.space 0x2c - (. - gText_Rom_251BEA)
	.endif
