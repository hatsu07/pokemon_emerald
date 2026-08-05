	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251A46
gText_Rom_251A46: @ 0x08251A46
	.string "この　あと\n{0xFD}{0x03}さんは……$"
	.if (. - gText_Rom_251A46) > 0xe
	.error "gText_Rom_251A46 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251A46) < 0xe
	.space 0xe - (. - gText_Rom_251A46)
	.endif
