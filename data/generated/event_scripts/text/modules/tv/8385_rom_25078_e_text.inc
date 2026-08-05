	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+25 aliases)
	.globl gText_Rom_25078E
gText_Rom_25078E: @ 0x0825078E
	.string "『ポケモン　バトル　こうざ！』\pきょうも　みなさんと　ごいっしょに\nバトルに　ついて　べんきょう　しましょう\pきょうの　もんだいは\n{0xFD}{0x02}さんの　バトルに　ついてです\p{0xFD}{0x02}さんは　{0xFD}{0x03}で\n{0xFD}{0x04}と　たたかったの　ですが……$"
	.if (. - gText_Rom_25078E) > 0x6e
	.error "gText_Rom_25078E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25078E) < 0x6e
	.space 0x6e - (. - gText_Rom_25078E)
	.endif
