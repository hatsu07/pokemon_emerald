	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:300 Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous
	.globl gText_Rom_241AB4
gText_Rom_241AB4: @ 0x08241AB4
	.string "わたしも ながい あいだ\nあめの けんきゅうを してるが\lてんきを じゆうじざいに かえるだなんて\lにんげんには むりな はなし だよ{EOS}"
	.if (. - gText_Rom_241AB4) > 0x44
	.error "gText_Rom_241AB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241AB4) < 0x44
	.space 0x44 - (. - gText_Rom_241AB4)
	.endif
