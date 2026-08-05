	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+22 aliases)
	.globl gText_Rom_24FF3B
gText_Rom_24FF3B: @ 0x0824FF3B
	.string "ボールを　{0xFD}{0x02}かい　なげて\nみごと　{0xFD}{0x03}の　なかに\lつかまえた　のです！$"
	.if (. - gText_Rom_24FF3B) > 0x25
	.error "gText_Rom_24FF3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24FF3B) < 0x25
	.space 0x25 - (. - gText_Rom_24FF3B)
	.endif
