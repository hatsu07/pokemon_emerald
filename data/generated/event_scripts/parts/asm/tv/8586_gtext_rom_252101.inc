	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_252101
gText_Rom_252101: @ 0x08252101
	.string "おおきなだいに　のぼりました！\p{0xFD}{0x02}さんの　きちを\nうえから　みわたしています！\p……そして\pさけんだー！$"
	.if (. - gText_Rom_252101) > 0x36
	.error "gText_Rom_252101 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252101) < 0x36
	.space 0x36 - (. - gText_Rom_252101)
	.endif
