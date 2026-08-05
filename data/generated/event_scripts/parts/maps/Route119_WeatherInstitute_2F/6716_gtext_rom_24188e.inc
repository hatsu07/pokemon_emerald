	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:241 Route119_WeatherInstitute_2F_Text_Grunt5PostBattle
	.globl gText_Rom_24188E
gText_Rom_24188E: @ 0x0824188E
	.string "ふん いいさ!\pあたしたちが ほんとうに ほしいのは\nもっと ほかに…… イヒヒヒ$"
	.if (. - gText_Rom_24188E) > 0x2a
	.error "gText_Rom_24188E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24188E) < 0x2a
	.space 0x2a - (. - gText_Rom_24188E)
	.endif
