	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+28 aliases)
	.globl gText_Rom_2514E6
gText_Rom_2514E6: @ 0x082514E6
	.string "バトルピラミッドで\nバトルアドベンチャーに　ちょうせんした\l{0xFD}{0x02}さんが\l{0xFD}{0x03}　だん　せいはで\lきろくを　こうしん　しました！\p……{0xFD}{0x02}さん！$"
	.if (. - gText_Rom_2514E6) > 0x47
	.error "gText_Rom_2514E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2514E6) < 0x47
	.space 0x47 - (. - gText_Rom_2514E6)
	.endif
