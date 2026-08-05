	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251D8E
gText_Rom_251D8E: @ 0x08251D8E
	.string "クッションを　つかんで……$"
	.if (. - gText_Rom_251D8E) > 0xe
	.error "gText_Rom_251D8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251D8E) < 0xe
	.space 0xe - (. - gText_Rom_251D8E)
	.endif
