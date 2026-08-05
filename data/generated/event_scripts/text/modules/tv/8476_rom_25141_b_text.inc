	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+28 aliases)
	.globl gText_Rom_25141B
gText_Rom_25141B: @ 0x0825141B
	.string "バトルアリーナで\nかちぬきチームバトルに　ちょうせんした\l{0xFD}{0x02}さんが\l{0xFD}{0x03}　にんぬきで\lきろくを　こうしん　しました！\p……{0xFD}{0x02}さん！$"
	.if (. - gText_Rom_25141B) > 0x44
	.error "gText_Rom_25141B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25141B) < 0x44
	.space 0x44 - (. - gText_Rom_25141B)
	.endif
