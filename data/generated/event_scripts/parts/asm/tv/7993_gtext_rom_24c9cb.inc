	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+7 aliases)
	.globl gText_Rom_24C9CB
gText_Rom_24C9CB: @ 0x0824C9CB
	.string "{0xFD}{0x02}　の　しょうかいだー！$"
	.if (. - gText_Rom_24C9CB) > 0xe
	.error "gText_Rom_24C9CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C9CB) < 0xe
	.space 0xe - (. - gText_Rom_24C9CB)
	.endif
