	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251C80
gText_Rom_251C80: @ 0x08251C80
	.string "きんのたてを　みています！\pキラキラと　めを\nかがやかせて　いますね$"
	.if (. - gText_Rom_251C80) > 0x23
	.error "gText_Rom_251C80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251C80) < 0x23
	.space 0x23 - (. - gText_Rom_251C80)
	.endif
