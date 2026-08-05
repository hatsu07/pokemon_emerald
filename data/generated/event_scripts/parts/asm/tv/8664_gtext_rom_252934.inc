	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_252934
gText_Rom_252934: @ 0x08252934
	.string "しかい『……いやー　すごいですね\n{0xFD}{0x02}ファン　いっしょくです\pその　ほかの　トレーナーさんと　ポケモンで\nわたしの　いんしょうに　のこったのは……\l{0xFD}{0x03}さんと　{0xFD}{0x04}ですね\p{0xFD}{0x03}さんの　{0xFD}{0x04}は……"
	.byte EOS
	.if (. - gText_Rom_252934) > 0x62
	.error "gText_Rom_252934 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252934) < 0x62
	.space 0x62 - (. - gText_Rom_252934)
	.endif
