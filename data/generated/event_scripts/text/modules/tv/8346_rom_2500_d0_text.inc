	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+22 aliases)
	.globl gText_Rom_2500D0
gText_Rom_2500D0: @ 0x082500D0
	.string "その　しゅんかん　{0xFD}{0x03}には\n{0xFD}{0x02}さんの　かなしみの　さけびが\lひびき　わたった　そうです……$"
	.if (. - gText_Rom_2500D0) > 0x2f
	.error "gText_Rom_2500D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2500D0) < 0x2f
	.space 0x2f - (. - gText_Rom_2500D0)
	.endif
