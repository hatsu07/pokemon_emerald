	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+28 aliases)
	.globl gText_Rom_2513D9
gText_Rom_2513D9: @ 0x082513D9
	.string "バトルチューブで\nバトルゲームに　ちょうせんした\l{0xFD}{0x02}さんが\l{0xFD}{0x03}　へや　とっぱで\lきろくを　こうしん　しました！\p……{0xFD}{0x02}さん！$"
	.if (. - gText_Rom_2513D9) > 0x42
	.error "gText_Rom_2513D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2513D9) < 0x42
	.space 0x42 - (. - gText_Rom_2513D9)
	.endif
