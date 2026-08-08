	@ data/maps/Route119_WeatherInstitute_1F/scripts.inc:71 Route119_WeatherInstitute_1F_Text_Grunt1Intro (+1 aliases)
	.globl gText_Rom_2412B4
gText_Rom_2412B4: @ 0x082412B4
	.string "リーダーが ここでの けんきゅうに\nきょうみを もったらしくて\lおれらを よこしたんだ! ジャマするな!$"
	.if (. - gText_Rom_2412B4) > 0x35
	.error "gText_Rom_2412B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2412B4) < 0x35
	.space 0x35 - (. - gText_Rom_2412B4)
	.endif
