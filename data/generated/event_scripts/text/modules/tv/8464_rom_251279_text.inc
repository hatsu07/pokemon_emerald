	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+28 aliases)
	.globl gText_Rom_251279
gText_Rom_251279: @ 0x08251279
	.string "バトルタワー\nつうしん　マルチ　バトルルームに\lちょうせんした　{0xFD}{0x02}さんが\l{0xFD}{0x03}　れんしょうで\lきろくを　こうしん　しました！\p……{0xFD}{0x02}さん！$"
	.if (. - gText_Rom_251279) > 0x48
	.error "gText_Rom_251279 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251279) < 0x48
	.space 0x48 - (. - gText_Rom_251279)
	.endif
