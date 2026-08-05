	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+28 aliases)
	.globl gText_Rom_251392
gText_Rom_251392: @ 0x08251392
	.string "バトルファクトリー\nバトルトレード　ダブルに\lちょうせんした　{0xFD}{0x02}さんが\l{0xFD}{0x03}　れんしょうで\lきろくを　こうしん　しました！\p……{0xFD}{0x02}さん！$"
	.if (. - gText_Rom_251392) > 0x47
	.error "gText_Rom_251392 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251392) < 0x47
	.space 0x47 - (. - gText_Rom_251392)
	.endif
