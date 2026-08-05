	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_2519B9
gText_Rom_2519B9: @ 0x082519B9
	.string "『ひみつきちの　ヒミツー！』\pひみつきちで　トレーナーは　いったい\nどんな　こうどうを　とる　のでしょうか？\pきょうは\n{0xFD}{0x02}さんの　ひみつきちです\p……さあ　{0xFD}{0x03}さんが\nあそびに　いらした　ようですね！\pさっそく　のぞいてみましょう！\pまず　{0xFD}{0x03}さんは……$"
	.if (. - gText_Rom_2519B9) > 0x81
	.error "gText_Rom_2519B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2519B9) < 0x81
	.space 0x81 - (. - gText_Rom_2519B9)
	.endif
