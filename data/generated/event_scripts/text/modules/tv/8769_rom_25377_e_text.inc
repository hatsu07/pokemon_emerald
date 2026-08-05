	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+32 aliases)
	.globl gText_Rom_25377E
gText_Rom_25377E: @ 0x0825377E
	.string "たいせんの　あと　{0xFD}{0x01}さんに\nいまの　たいせんの　かんそうを　きくと\p「{0xFD}{0x02}」って\nこたえて　くれました\p{0xFD}{0x01}さんの　ポケモンの\n{0xFD}{0x03}と　{0xFD}{0x04}\lそして　「{0xFD}{0x02}」……\pんー！！\nなんか　いみのふかい　ことば　よね！\pやはり　いい　トレーナーは\nいいことを　いって　くれますね\pさて　それじゃあ　また\nじかいの　ほうそうで　おあい　しましょう！"
	.byte EOS
	.if (. - gText_Rom_25377E) > 0xab
	.error "gText_Rom_25377E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25377E) < 0xab
	.space 0xab - (. - gText_Rom_25377E)
	.endif
