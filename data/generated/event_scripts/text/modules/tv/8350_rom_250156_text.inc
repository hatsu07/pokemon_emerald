	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+22 aliases)
	.globl gText_Rom_250156
gText_Rom_250156: @ 0x08250156
	.string "しかし……\p{0xFD}{0x03}は　あっというまに\nにげてしまった　のです\pその　しゅんかん　{0xFD}{0x04}には\n{0xFD}{0x02}さんの　かなしみの　さけびが\lひびき　わたった　そうです……$"
	.if (. - gText_Rom_250156) > 0x4d
	.error "gText_Rom_250156 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250156) < 0x4d
	.space 0x4d - (. - gText_Rom_250156)
	.endif
