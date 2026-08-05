	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+22 aliases)
	.globl gText_Rom_2500FF
gText_Rom_2500FF: @ 0x082500FF
	.string "しかし……\pボールが　なかったのか　このあと\n{0xFD}{0x03}から　にげてしまった　のです\pその　しゅんかん　{0xFD}{0x04}には\n{0xFD}{0x02}さんの　かなしみの　さけびが\lひびき　わたった　そうです……$"
	.if (. - gText_Rom_2500FF) > 0x57
	.error "gText_Rom_2500FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2500FF) < 0x57
	.space 0x57 - (. - gText_Rom_2500FF)
	.endif
