	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+2 aliases)
	.globl gText_Rom_24DA91
gText_Rom_24DA91: @ 0x0824DA91
	.string "「{0xFD}{0x04}」という　ことばが\nおはなしに　ストーリーを　かんじさせますね$"
	.if (. - gText_Rom_24DA91) > 0x23
	.error "gText_Rom_24DA91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DA91) < 0x23
	.space 0x23 - (. - gText_Rom_24DA91)
	.endif
