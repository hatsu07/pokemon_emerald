	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+13 aliases)
	.globl gText_Rom_24E534
gText_Rom_24E534: @ 0x0824E534
	.string "……さて　そのほかに\nよい　ニックネームの　れい　として$"
	.if (. - gText_Rom_24E534) > 0x1d
	.error "gText_Rom_24E534 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E534) < 0x1d
	.space 0x1d - (. - gText_Rom_24E534)
	.endif
