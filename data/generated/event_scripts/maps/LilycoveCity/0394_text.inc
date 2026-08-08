	@ data/maps/LilycoveCity/scripts.inc:578 LilycoveCity_Text_ContestHallInTown
	.globl gText_Rom_1E0DD4
gText_Rom_1E0DD4: @ 0x081E0DD4
	.string "この まちに ポケモンコンテストの\nかいじょうが あるんだな!\pということは よく そだった ポケモンが\nいっぱい あつまって いるんだな!\pわしの ハートは わくわく なんだな!$"
	.if (. - gText_Rom_1E0DD4) > 0x5b
	.error "gText_Rom_1E0DD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0DD4) < 0x5b
	.space 0x5b - (. - gText_Rom_1E0DD4)
	.endif
