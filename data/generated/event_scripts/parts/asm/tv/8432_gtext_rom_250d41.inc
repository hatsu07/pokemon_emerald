	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+27 aliases)
	.globl gText_Rom_250D41
gText_Rom_250D41: @ 0x08250D41
	.string "さて　{0xFD}{0x03}に　ついている\nたくさんの　リボン　ざますが……$"
	.if (. - gText_Rom_250D41) > 0x1e
	.error "gText_Rom_250D41 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250D41) < 0x1e
	.space 0x1e - (. - gText_Rom_250D41)
	.endif
