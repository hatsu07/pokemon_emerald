	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+2 aliases)
	.globl gText_Rom_24DAB4
gText_Rom_24DAB4: @ 0x0824DAB4
	.string "「{0xFD}{0x04}」という　ことばの\nおかげで　まるで　じょうけいが\lうかんで　くるようですね$"
	.if (. - gText_Rom_24DAB4) > 0x2a
	.error "gText_Rom_24DAB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DAB4) < 0x2a
	.space 0x2a - (. - gText_Rom_24DAB4)
	.endif
