	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:273 Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre
	.globl gText_Rom_2419BF
gText_Rom_2419BF: @ 0x082419BF
	.string "なんですって!\pえーい こうしちゃ いられない\nわれわれも おくりびやまに いそぐわよ!\pオーッホッホ!\nマグマだんめ まってなさーい!{EOS}"
	.if (. - gText_Rom_2419BF) > 0x45
	.error "gText_Rom_2419BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2419BF) < 0x45
	.space 0x45 - (. - gText_Rom_2419BF)
	.endif
