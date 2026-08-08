	@ data/maps/Route119_WeatherInstitute_1F/scripts.inc:116 Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather
	.globl gText_Rom_24142D
gText_Rom_24142D: @ 0x0824142D
	.string "この けんきゅうじょの 2かいでは\nホウエンちほうの てんきの\lうつりかわりを しらべています\pさいきん また あちこちで\nいちじてきな ひでりや おおあめが\lかんそく されている ようですが……$"
	.if (. - gText_Rom_24142D) > 0x63
	.error "gText_Rom_24142D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24142D) < 0x63
	.space 0x63 - (. - gText_Rom_24142D)
	.endif
