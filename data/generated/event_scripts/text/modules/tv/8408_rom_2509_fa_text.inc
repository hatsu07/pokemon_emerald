	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+26 aliases)
	.globl gText_Rom_2509FA
gText_Rom_2509FA: @ 0x082509FA
	.string "ファン『ポケモンの　ことに　ついて\nくわしい　ところ！！$"
	.if (. - gText_Rom_2509FA) > 0x1d
	.error "gText_Rom_2509FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2509FA) < 0x1d
	.space 0x1d - (. - gText_Rom_2509FA)
	.endif
