	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gText_Rom_24CE1D
gText_Rom_24CE1D: @ 0x0824CE1D
	.string "ふまんだった……\pと　びみょうに　おちこみながら\nこたえて　くれたよ\p……まあ　まんぞくいく　たたかいって\nなかなかできる　もんじゃないからねー\pそのときの　くやしさは\nつぎの　ひとことが　よくあらわしてるよ$"
	.if (. - gText_Rom_24CE1D) > 0x69
	.error "gText_Rom_24CE1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CE1D) < 0x69
	.space 0x69 - (. - gText_Rom_24CE1D)
	.endif
