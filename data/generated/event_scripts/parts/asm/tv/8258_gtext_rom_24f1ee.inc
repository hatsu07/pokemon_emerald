	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+6 aliases)
	.globl gText_Rom_24F1EE
gText_Rom_24F1EE: @ 0x0824F1EE
	.string "てんいん『ついでに　{0xFD}{0x03}も\n{0xFD}{0x04}こ　かわれて　いきました$"
	.if (. - gText_Rom_24F1EE) > 0x1d
	.error "gText_Rom_24F1EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F1EE) < 0x1d
	.space 0x1d - (. - gText_Rom_24F1EE)
	.endif
