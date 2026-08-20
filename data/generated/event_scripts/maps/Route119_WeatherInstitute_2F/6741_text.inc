	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:313 Route119_WeatherInstitute_2F_Text_KyogreWeather
	.globl gText_Rom_241B43
gText_Rom_241B43: @ 0x08241B43
	.string "わたしは ホウエンちほうの てんきを\nかんそく しています\pげんざい {STR_VAR_1}で\nはげしい おおあめが ふっています!\pということは\n{STR_VAR_1}の どこかに……?{EOS}"
	.if (. - gText_Rom_241B43) > 0x4d
	.error "gText_Rom_241B43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241B43) < 0x4d
	.space 0x4d - (. - gText_Rom_241B43)
	.endif
