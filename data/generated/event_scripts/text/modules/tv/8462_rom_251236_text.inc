	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+28 aliases)
	.globl gText_Rom_251236
gText_Rom_251236: @ 0x08251236
	.string "バトルタワー　マルチ　バトルルームに\nちょうせんした　{0xFD}{0x02}さんが\l{0xFD}{0x03}　れんしょうで\lきろくを　こうしん　しました！\p……{0xFD}{0x02}さん！$"
	.if (. - gText_Rom_251236) > 0x43
	.error "gText_Rom_251236 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251236) < 0x43
	.space 0x43 - (. - gText_Rom_251236)
	.endif
