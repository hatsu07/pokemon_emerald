	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+18 aliases)
	.globl gText_Rom_24F7AA
gText_Rom_24F7AA: @ 0x0824F7AA
	.string "バトルフロンティアの　シンボルは\nゴールドシンボルを　{0xFD}{0x02}こ\lシルバーシンボルを　{0xFD}{0x03}こ\lかくとく　されていますねー！$"
	.if (. - gText_Rom_24F7AA) > 0x3c
	.error "gText_Rom_24F7AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F7AA) < 0x3c
	.space 0x3c - (. - gText_Rom_24F7AA)
	.endif
