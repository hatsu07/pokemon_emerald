	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+26 aliases)
	.globl gText_Rom_2509DA
gText_Rom_2509DA: @ 0x082509DA
	.string "ファン『ポケモンバトルで\nここ　いちばんに　つよい　ところ！！$"
	.if (. - gText_Rom_2509DA) > 0x20
	.error "gText_Rom_2509DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2509DA) < 0x20
	.space 0x20 - (. - gText_Rom_2509DA)
	.endif
