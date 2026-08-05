	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+22 aliases)
	.globl gText_Rom_24FF60
gText_Rom_24FF60: @ 0x0824FF60
	.string "その　しゅんかん　{0xFD}{0x03}には\n{0xFD}{0x02}さんの　よろこびの　おたけびが\lひびき　わたった　そうです！\pいやー　{0xFD}{0x02}さん！\nうらやましいです！\lわたしも　いっしょに　さけびたいです！\p……いじょう\nよろこび　いっぱいの　げんばより\lおつたえ　しました！$"
	.if (. - gText_Rom_24FF60) > 0x7a
	.error "gText_Rom_24FF60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24FF60) < 0x7a
	.space 0x7a - (. - gText_Rom_24FF60)
	.endif
