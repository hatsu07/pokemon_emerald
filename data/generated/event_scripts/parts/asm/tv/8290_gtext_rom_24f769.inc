	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+18 aliases)
	.globl gText_Rom_24F769
gText_Rom_24F769: @ 0x0824F769
	.string "バッジは　まだ　1こも\nかくとく　されていませんねー！$"
	.if (. - gText_Rom_24F769) > 0x1c
	.error "gText_Rom_24F769 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F769) < 0x1c
	.space 0x1c - (. - gText_Rom_24F769)
	.endif
