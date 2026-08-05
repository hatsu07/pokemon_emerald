	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+18 aliases)
	.globl gText_Rom_24F785
gText_Rom_24F785: @ 0x0824F785
	.string "バトルフロンティアの　シンボルは\n1こも　かくとく　されていませんねー！$"
	.if (. - gText_Rom_24F785) > 0x25
	.error "gText_Rom_24F785 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F785) < 0x25
	.space 0x25 - (. - gText_Rom_24F785)
	.endif
