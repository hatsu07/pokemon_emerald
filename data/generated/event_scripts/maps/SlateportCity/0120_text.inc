	@ data/maps/SlateportCity/scripts.inc:1226 SlateportCity_Text_CitySign
	.globl gText_Rom_1DD51D
gText_Rom_1DD51D: @ 0x081DD51D
	.string "ここは カイナ シティ\nヒトと ポケモンが いきかう みなと$"
	.if (. - gText_Rom_1DD51D) > 0x1f
	.error "gText_Rom_1DD51D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD51D) < 0x1f
	.space 0x1f - (. - gText_Rom_1DD51D)
	.endif
