	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251A3A
gText_Rom_251A3A: @ 0x08251A3A
	.string "{0xFD}{0x03}さんは　つぎに……$"
	.if (. - gText_Rom_251A3A) > 0xc
	.error "gText_Rom_251A3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251A3A) < 0xc
	.space 0xc - (. - gText_Rom_251A3A)
	.endif
