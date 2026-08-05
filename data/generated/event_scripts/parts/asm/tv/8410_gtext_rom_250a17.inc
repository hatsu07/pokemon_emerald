	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+26 aliases)
	.globl gText_Rom_250A17
gText_Rom_250A17: @ 0x08250A17
	.string "ファン『ポケモンに　たいして\nいつも　やさしい　ところ！！$"
	.if (. - gText_Rom_250A17) > 0x1e
	.error "gText_Rom_250A17 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250A17) < 0x1e
	.space 0x1e - (. - gText_Rom_250A17)
	.endif
