	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+28 aliases)
	.globl gText_Rom_25134A
gText_Rom_25134A: @ 0x0825134A
	.string "バトルファクトリー\nバトルトレード　シングルに\lちょうせんした　{0xFD}{0x02}さんが\l{0xFD}{0x03}　れんしょうで\lきろくを　こうしん　しました！\p……{0xFD}{0x02}さん！$"
	.if (. - gText_Rom_25134A) > 0x48
	.error "gText_Rom_25134A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25134A) < 0x48
	.space 0x48 - (. - gText_Rom_25134A)
	.endif
