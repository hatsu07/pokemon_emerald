	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+5 aliases)
	.globl gText_Rom_24ED02
gText_Rom_24ED02: @ 0x0824ED02
	.string "おねえさん『くろうして　やっと\nつかまえた　ポケモンは\lだいじに　されるって　いうしね！$"
	.if (. - gText_Rom_24ED02) > 0x2d
	.error "gText_Rom_24ED02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24ED02) < 0x2d
	.space 0x2d - (. - gText_Rom_24ED02)
	.endif
