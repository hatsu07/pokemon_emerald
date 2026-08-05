	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+18 aliases)
	.globl gText_Rom_24F751
gText_Rom_24F751: @ 0x0824F751
	.string "バッジは　{0xFD}{0x02}こ\nかくとく　されていますよー！$"
	.if (. - gText_Rom_24F751) > 0x18
	.error "gText_Rom_24F751 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F751) < 0x18
	.space 0x18 - (. - gText_Rom_24F751)
	.endif
