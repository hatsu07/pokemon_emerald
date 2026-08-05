	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+28 aliases)
	.globl gText_Rom_2512C1
gText_Rom_2512C1: @ 0x082512C1
	.string "バトルドーム\nシングル　バトルトーナメントに\lちょうせんした　{0xFD}{0x02}さんが\l{0xFD}{0x03}　れんぱで\lきろくを　こうしん　しました！\p……{0xFD}{0x02}さん！$"
	.if (. - gText_Rom_2512C1) > 0x45
	.error "gText_Rom_2512C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2512C1) < 0x45
	.space 0x45 - (. - gText_Rom_2512C1)
	.endif
