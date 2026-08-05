	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251CA3
gText_Rom_251CA3: @ 0x08251CA3
	.string "ぎんのたてを　みています！\pめを　まるーく　していますね$"
	.if (. - gText_Rom_251CA3) > 0x1d
	.error "gText_Rom_251CA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251CA3) < 0x1d
	.space 0x1d - (. - gText_Rom_251CA3)
	.endif
