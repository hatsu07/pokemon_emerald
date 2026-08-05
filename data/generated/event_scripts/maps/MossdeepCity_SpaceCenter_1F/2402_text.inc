	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:338 MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle
	.globl gText_Rom_20D503
gText_Rom_20D503: @ 0x0820D503
	.string "わかったよ こんど くるときは\nいきなり くるように するよ……$"
	.if (. - gText_Rom_20D503) > 0x21
	.error "gText_Rom_20D503 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20D503) < 0x21
	.space 0x21 - (. - gText_Rom_20D503)
	.endif
