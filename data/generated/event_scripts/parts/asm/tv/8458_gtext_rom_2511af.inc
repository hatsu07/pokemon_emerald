	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+28 aliases)
	.globl gText_Rom_2511AF
gText_Rom_2511AF: @ 0x082511AF
	.string "バトルタワー　シングル　バトルルームに\nちょうせんした　{0xFD}{0x02}さんが\l{0xFD}{0x03}　れんしょうで\lきろくを　こうしん　しました！\p……{0xFD}{0x02}さん！$"
	.if (. - gText_Rom_2511AF) > 0x44
	.error "gText_Rom_2511AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2511AF) < 0x44
	.space 0x44 - (. - gText_Rom_2511AF)
	.endif
