	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+28 aliases)
	.globl gText_Rom_2514A3
gText_Rom_2514A3: @ 0x082514A3
	.string "バトルパレス\nダブル　バトルホールに\lちょうせんした　{0xFD}{0x02}さんが\l{0xFD}{0x03}　れんしょうで\lきろくを　こうしん　しました！\p……{0xFD}{0x02}さん！$"
	.if (. - gText_Rom_2514A3) > 0x43
	.error "gText_Rom_2514A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2514A3) < 0x43
	.space 0x43 - (. - gText_Rom_2514A3)
	.endif
