	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:305 Route119_WeatherInstitute_2F_Text_GroudonWeather
	.globl gText_Rom_241AF8
gText_Rom_241AF8: @ 0x08241AF8
	.string "わたしは ホウエンちほうの てんきを\nかんそく しています\pげんざい {STR_VAR_1}で\nひでりが はっせい しています!\pということは\n{STR_VAR_1}の どこかに……?{EOS}"
	.if (. - gText_Rom_241AF8) > 0x4b
	.error "gText_Rom_241AF8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241AF8) < 0x4b
	.space 0x4b - (. - gText_Rom_241AF8)
	.endif
