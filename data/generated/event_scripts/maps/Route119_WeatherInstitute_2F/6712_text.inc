	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:232 Route119_WeatherInstitute_2F_Text_Grunt5Intro (+1 aliases)
	.globl gText_Rom_241847
gText_Rom_241847: @ 0x08241847
	.string "あなたも てんきに かんけいのある\nポケモンを さがしに きたの?\pだめよ!\nあたしたちが さきに いただくんだから!$"
	.if (. - gText_Rom_241847) > 0x3c
	.error "gText_Rom_241847 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241847) < 0x3c
	.space 0x3c - (. - gText_Rom_241847)
	.endif
