	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+15 aliases)
	.globl gText_Rom_24EA77
gText_Rom_24EA77: @ 0x0824EA77
	.string "とちゅうで　まちがって　ポケモンを\nたおし　ちゃったんだよ！！\pボールを　{0xFD}{0x03}こも　なげたのに\nぜんぶ　むだ……\pポケモンを　たおしちゃった　ときの\n{0xFD}{0x02}さんの　あぜんと　した　かお\lなんとも　いえなかったなぁ……$"
	.if (. - gText_Rom_24EA77) > 0x6c
	.error "gText_Rom_24EA77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24EA77) < 0x6c
	.space 0x6c - (. - gText_Rom_24EA77)
	.endif
