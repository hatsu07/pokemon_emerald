	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+22 aliases)
	.globl gText_Rom_24FEAB
gText_Rom_24FEAB: @ 0x0824FEAB
	.string "……きんきゅう　スペシャル　テレビ！！$"
	.if (. - gText_Rom_24FEAB) > 0x14
	.error "gText_Rom_24FEAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24FEAB) < 0x14
	.space 0x14 - (. - gText_Rom_24FEAB)
	.endif
